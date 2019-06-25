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

typedef int (*irq_ack_fn)(ps_irq_t *irq);
void serial_server_irq_handle(irq_ack_fn irq_acknowledge, ps_irq_t *irq);
