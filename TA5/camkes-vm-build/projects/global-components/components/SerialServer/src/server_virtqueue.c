/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#include <autoconf.h>
#include <camkes.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include <sel4/sel4.h>
#include <utils/attribute.h>
#include <utils/ansi.h>
#include <camkes.h>
#include <virtqueue.h>
#include <camkes/virtqueue.h>
#include <platsupport/chardev.h>
#include "plat.h"
#include "server_virtqueue.h"

virtqueue_device_t * read_virtqueue;
virtqueue_device_t * write_virtqueue;

enum virtqueue_op {
    VQ_SERIAL_READ,
    VQ_SERIAL_WRITE
};

typedef struct {
    virtqueue_device_t *vq;
    volatile void *virtqueue_buf;
    void *serial_buf;
    size_t buf_size;
} virtqueue_token_t;

virtqueue_token_t *current_read_vq_token = NULL;
virtqueue_token_t *current_write_vq_token = NULL;

static void virtqueue_send(virtqueue_device_t *vq, volatile void * buf, size_t buf_size)
{
    int enqueue_res = virtqueue_device_enqueue(vq, buf, buf_size);
    if (enqueue_res) {
        ZF_LOGE("Serial server virtqueue enqueue failed");
        return;
    }

    int err = virtqueue_device_signal(vq);
    if (err != 0) {
        ZF_LOGE("Serial server signal failed");
        return;
    }
}

static void write_callback(ps_chardevice_t* device, enum chardev_status stat,
                           size_t bytes_transfered, void* token)
{
    virtqueue_token_t *vq_token = (virtqueue_token_t *)token;

    volatile void *vq_buf = vq_token->virtqueue_buf;
    void *serial_buf = vq_token->serial_buf;
    size_t buf_size = vq_token->buf_size;
    virtqueue_device_t *vq = vq_token->vq;

    free(serial_buf);
    free(current_write_vq_token);
    current_write_vq_token = NULL;

    virtqueue_send(vq, vq_buf, buf_size);
}

static void read_callback(ps_chardevice_t* device, enum chardev_status stat,
                          size_t bytes_transfered, void* token)
{
    virtqueue_token_t *vq_token = (virtqueue_token_t *)token;

    volatile void *vq_buf = vq_token->virtqueue_buf;
    void *serial_buf = vq_token->serial_buf;
    size_t buf_size = vq_token->buf_size;
    virtqueue_device_t *vq = vq_token->vq;

    memcpy(vq_buf, serial_buf, bytes_transfered);
    virtqueue_send(vq, vq_buf, buf_size);

    free(serial_buf);
    free(current_read_vq_token);
    current_read_vq_token = NULL;
}

static void handle_virtqueue_message(virtqueue_device_t *vq, volatile void* buf, size_t buf_size, enum virtqueue_op op)
{
    int res;

    if (op == VQ_SERIAL_READ && current_read_vq_token) {
        return;
    } else if (op == VQ_SERIAL_WRITE && current_write_vq_token ) {
        return;
    }

    void *serial_buffer = calloc(buf_size, sizeof(char));
    if (serial_buffer == NULL) {
        ZF_LOGE("Unable to alloc serial buffer of size: %u", buf_size);
        virtqueue_send(vq, buf, buf_size);
        return;
    }
    virtqueue_token_t *vq_token = (virtqueue_token_t *)malloc(sizeof(virtqueue_token_t));
    if (vq_token == NULL) {
        ZF_LOGE("Unable to alloc vq token");
        free(serial_buffer);
        virtqueue_send(vq, buf, buf_size);
        return;
    }
    vq_token->vq = vq;
    vq_token->virtqueue_buf = buf;
    vq_token->serial_buf = serial_buffer;
    vq_token->buf_size = buf_size;

    if (op == VQ_SERIAL_READ) {
        res = plat_serial_read(serial_buffer, buf_size, read_callback, (void *)vq_token);
        if (res == -1) {
            ZF_LOGE("Unable to serial read buffer");
        }
        current_read_vq_token = vq_token;
    } else {
        memcpy(serial_buffer, buf, buf_size);
        res = plat_serial_write(serial_buffer, buf_size, write_callback, (void *)vq_token);
        if (res == -1) {
            ZF_LOGE("Unable to serial write buffer");
        }
        current_write_vq_token = vq_token;
    }

    if (res == -1) {
        free(vq_token);
        free(serial_buffer);
        virtqueue_send(vq, buf, buf_size);
    }
    return;
}

static void handle_virtqueue_callback(virtqueue_device_t* vq, enum virtqueue_op op)
{
    volatile void* available_buf = NULL;
    size_t buf_size = 0;
    int dequeue_res = virtqueue_device_dequeue(vq,
                                               &available_buf,
                                               &buf_size);
    if (dequeue_res) {
        ZF_LOGE("Serial server virtqueue dequeue failed");
        return;
    }

    /* Process the incoming virtqueue message */
    handle_virtqueue_message(vq, available_buf, buf_size, op);
}

void serial_wait_callback(void)
{
    int error;
    error = serial_lock();
    int write_poll_res = virtqueue_device_poll(write_virtqueue);
    if (write_poll_res) {
        handle_virtqueue_callback(write_virtqueue, VQ_SERIAL_WRITE);
    }
    if (write_poll_res == -1) {
        ZF_LOGE("Serial server write poll failed");
    }

    int read_poll_res = virtqueue_device_poll(read_virtqueue);
    if (read_poll_res) {
        handle_virtqueue_callback(read_virtqueue, VQ_SERIAL_READ);
    }
    if (read_poll_res == -1) {
        ZF_LOGE("Serial server read poll failed");
    }
    error = serial_unlock();
}

int virtqueue_init(void)
{
    /* Initialise read virtqueue */
    int error = camkes_virtqueue_device_init(&read_virtqueue, 0);
    if (error) {
        ZF_LOGE("Unable to initialise serial server read virtqueue");
    }
    /* Initialise write virtqueue */
    error = camkes_virtqueue_device_init(&write_virtqueue, 1);
    if (error) {
        ZF_LOGE("Unable to initialise serial server write virtqueue");
    }
    return error;
}

