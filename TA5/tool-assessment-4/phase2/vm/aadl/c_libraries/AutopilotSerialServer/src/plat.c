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
#include <stdio.h>
#include <stdint.h>

#include <camkes.h>
#include <camkes/io.h>
#include <sel4/sel4.h>
#include <utils/attribute.h>
#include <utils/ansi.h>

#include "plat.h"

struct ps_chardevice serial_device;
struct ps_chardevice *serial = NULL;

ssize_t plat_serial_write(void *buf, size_t buf_size, chardev_callback_t cb, void *token)
{
    ssize_t res = ps_cdev_write(serial, buf, buf_size, cb, token);
    return res;
}

ssize_t plat_serial_read(void *buf, size_t buf_size, chardev_callback_t cb, void *token)
{
    ssize_t res = ps_cdev_read(serial, buf, buf_size, cb, token);
    return res;
}

void plat_serial_interrupt(handle_char_fn handle_char)
{
    if (serial) {
        int data = 0;
        ps_cdev_handle_irq(serial, 0);
        while (data !=  EOF) {
            data = ps_cdev_getchar(serial);
            if (data != EOF) {
                handle_char((uint8_t)data);
            }
        }
    }
}

void plat_serial_putchar(int c)
{
    if (serial) {
        ps_cdev_putchar(serial, c);
    }
}

void plat_pre_init(ps_io_ops_t *io_ops)
{
    ZF_LOGF_IF(io_ops == NULL, "Was passed an empty IO ops struct");

#ifdef CONFIG_PLAT_EXYNOS5
    io_ops->clock_sys.priv = NULL;
    io_ops->mux_sys.priv = NULL;
#endif

    serial = ps_cdev_init(PS_SERIAL0, io_ops, &serial_device);
    if (serial == NULL) {
        ZF_LOGE("Failed to initialise character device");
    }
}
