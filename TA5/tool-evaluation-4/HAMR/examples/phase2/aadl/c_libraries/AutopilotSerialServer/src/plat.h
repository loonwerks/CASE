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
#pragma once

#include <platsupport/chardev.h>
#include <platsupport/io.h>

typedef void (*handle_char_fn)(uint8_t);

void plat_pre_init(ps_io_ops_t *io_ops);
/* Definition located at plat/${KernelPlatform}/plat.c */
void plat_post_init(ps_irq_ops_t *irq_ops);
void plat_serial_interrupt(handle_char_fn handle_char);
void plat_serial_putchar(int c);
ssize_t plat_serial_read(void *buf, size_t buf_size, chardev_callback_t cb, void *token);
ssize_t plat_serial_write(void *buf, size_t buf_size, chardev_callback_t cb, void *token);
