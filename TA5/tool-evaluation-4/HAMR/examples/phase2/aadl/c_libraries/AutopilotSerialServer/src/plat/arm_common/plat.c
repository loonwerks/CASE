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

#ifdef ARM_PLATFORM // HAMR - would need to do something similar for pc99

#include <autoconf.h>
#include <sel4/sel4.h>
#include <camkes.h>
#include <utils/util.h>
#include <platsupport/irq.h>
#include <sel4utils/sel4_zf_logif.h>

#include "../../plat.h"
#include "../../serial.h"

void plat_post_init(ps_irq_ops_t *irq_ops)
{
    // HAMR: not sure where some of the following symbols are coming from
    //ps_irq_t irq_info = { .type = PS_INTERRUPT, .irq = { .number = EXYNOS_UART0_IRQ }};
    //irq_id_t serial_irq_id = ps_irq_register(irq_ops, irq_info, autopilot_serial_server_irq_handle, NULL);
    //ZF_LOGF_IFERR(serial_irq_id < 0, "Failed to register irq for serial");
}

#endif