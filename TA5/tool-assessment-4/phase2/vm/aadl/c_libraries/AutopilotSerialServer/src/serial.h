/*
 * Copyright 2019, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#include <platsupport/irq.h>


#include <sys/types.h>

void serial_pre_init(void);

void serial_post_init(void);

ssize_t autopilot_serial_server_write_serial(void *data, size_t length);

ssize_t autopilot_serial_server_read_serial(void *data, size_t length);

void autopilot_serial_server_irq_handle(void *data, ps_irq_acknowledge_fn_t acknowledge_fn, void *ack_data);
