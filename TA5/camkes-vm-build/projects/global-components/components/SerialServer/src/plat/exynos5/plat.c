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

#include <autoconf.h>
#include <sel4/sel4.h>
#include <camkes.h>
#include <utils/util.h>
#include <platsupport/irq.h>
#include <sel4utils/sel4_zf_logif.h>

#include "../../plat.h"
#include "../../serial.h"

void serial_dev_irq_handle(ps_irq_t *irq)
{
    serial_server_irq_handle(serial_dev_irq_acknowledge, irq);
}

void plat_post_init(void)
{
    ps_irq_t irq = { .type = PS_INTERRUPT, .irq = { .number = DEFAULT_SERIAL_INTERRUPT }};
    int error = serial_dev_irq_acknowledge(&irq);
    ZF_LOGF_IFERR(error, "Failed to acknowledge irq for serial");
}
