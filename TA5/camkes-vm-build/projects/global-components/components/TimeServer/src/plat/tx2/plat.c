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

#include <camkes.h>
#include <platsupport/plat/timer.h>
#include <platsupport/irq.h>
#include <sel4utils/sel4_zf_logif.h>

#include "../../plat.h"
#include "../../time_server.h"

#define NUM_TIMERS 6

void nv_timer_irq_handle(ps_irq_t *irq)
{
    time_server_irq_handle(nv_timer_irq_acknowledge, irq);
}

void plat_post_init(ltimer_t *ltimer)
{
    int error;

    /* Acknowledge all the timers */
    for (int i = 0; i < NUM_TIMERS; i++) {
        ps_irq_t nv_timer_irq = (ps_irq_t) {
            .type = PS_INTERRUPT, .irq = { .number = INT_NV_TMR0 + i }
        };
        error = nv_timer_irq_acknowledge(&nv_timer_irq);
        ZF_LOGF_IF(error, "Failed to ack timer %d's irq", i);
    }
}
