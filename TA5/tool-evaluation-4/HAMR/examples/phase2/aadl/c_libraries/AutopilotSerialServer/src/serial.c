/*
 * Copyright 2017, Data61
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
/* #include <sync/mutex.h> */
/* #include <utils/attribute.h> */
/* #include <utils/ansi.h> */
#include <camkes.h>
#include <camkes/io.h>
#include <camkes/irq.h>
#include <platsupport/chardev.h>
#include <platsupport/irq.h>
#include "serial.h"
#include "plat.h"

#include "sentinel_serial_buffer.h"


#define BUFFER_SIZE 4096


// HAMR
// found serial_lock and serial_unlock in 
// projects/camkes-tool/libsel4camkes/include/camkes/gdb/serial.h
// but not sure how they get linked in
int serial_lock(void) { };
int serial_unlock(void) { };


typedef struct getchar_client {
    sentinel_serial_buffer_t *rx_buffer;
    sentinel_serial_buffer_t *tx_buffer;
} getchar_client_t;


static ps_io_ops_t io_ops;


static getchar_client_t *getchar_client = NULL;


/* static sync_mutex_t serial_mutex; */


/* Forward declarations */
static void timer_callback(void *data);


ssize_t autopilot_serial_server_write_serial(void *data, size_t length)
{
    ssize_t result = -1;
    if (sentinel_serial_buffer_append_sentinelized_string(getchar_client->tx_buffer,
							  (const uint8_t *) data, length)) {
      /* Kick start the serial by applying the timer_callback */
      timer_callback(NULL);
      result = length;
    }
    return result;
}


ssize_t autopilot_serial_server_read_serial(void *data, size_t length)
{
  return sentinel_serial_buffer_get_next_payload_string(getchar_client->rx_buffer, (uint8_t *) data, length);
}


static void handle_char(uint8_t c)
{
    sentinel_serial_buffer_append_char(getchar_client->rx_buffer, c);
}


static void timer_callback(void *data)
{
    int UNUSED error;
    uint8_t c;
    uint8_t buffer[BUFFER_SIZE];
    error = serial_lock(); /* error = sync_mutex_lock(&serial_mutex); */
    // Flush input
    ssize_t read_count = plat_serial_read(buffer, BUFFER_SIZE, NULL, NULL);
    if (read_count > 0) {
      for (ssize_t index = 0; index < read_count; ++index) {
	handle_char(buffer[index]);
      }
    }
    // Flush output
    while(sentinel_serial_buffer_get_next_char(getchar_client->tx_buffer, &c)) {
      plat_serial_putchar((int) c);
    }
    error = serial_unlock(); /* error = sync_mutex_unlock(&serial_mutex); */
}


/*
seL4_CPtr timeout_notification(void);
int run_serial(void)
{
    seL4_CPtr notification = timeout_notification();
    while (1) {
        seL4_Wait(notification, NULL);
        timer_callback(NULL);
    }
    return 0;
}
*/


void autopilot_serial_server_irq_handle(void *data, ps_irq_acknowledge_fn_t acknowledge_fn, void *ack_data)
{
    int error = serial_lock(); /* int error = sync_mutex_lock(&serial_mutex); */
    ZF_LOGF_IF(error, "APSS: Failed to lock mutex");

    plat_serial_interrupt(handle_char);

    error = acknowledge_fn(ack_data);
    ZF_LOGF_IF(error, "APSS: Failed to acknowledge IRQ");

    error = serial_unlock(); /* error = sync_mutex_unlock(&serial_mutex); */
    ZF_LOGF_IF(error, "APSS: Failed to unlock mutex");
}


void serial_pre_init(void)
{
    int error;
    /* sync_mutex_init(&serial_mutex, 1); */
    error = serial_lock(); /* error = sync_mutex_lock(&serial_mutex); */

    error = camkes_io_ops(&io_ops);
    ZF_LOGF_IF(error, "Failed to initialise IO ops");

    // Initialize the serial port
    plat_pre_init(&io_ops);

    /* initialize the client */
    getchar_client = calloc(1, sizeof(getchar_client_t));
    getchar_client->rx_buffer = sentinel_serial_buffer_alloc();
    getchar_client->tx_buffer = sentinel_serial_buffer_alloc();

    fprintf(stderr, "apss serial pre_init: rx_buffer %p, tx_buffer %p\n",
	    getchar_client->rx_buffer, getchar_client->tx_buffer);
    fflush(stdout);

    plat_post_init(&(io_ops.irq_ops));
    
    /* Start regular heartbeat of 500ms */
    /* Need to add Timer component first...
    timeout_periodic(0, 500000000);
    */
    
    error = serial_unlock(); /* error = sync_mutex_unlock(&serial_mutex); */
}


void serial_post_init(void)
{
}
