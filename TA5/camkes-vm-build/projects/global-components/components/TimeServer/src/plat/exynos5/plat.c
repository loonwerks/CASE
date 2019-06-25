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
#include <assert.h>
#include <stdio.h>
#include <sel4/sel4.h>
#include <sel4/arch/constants.h>
#include <camkes.h>
#include <platsupport/plat/timer.h>
#include <platsupport/irq.h>
#include <utils/util.h>
#include <sel4utils/sel4_zf_logif.h>
#include <simple/simple.h>

#include "../../plat.h"
#include "../../time_server.h"

void pwm_irq_handle(ps_irq_t *irq)
{
    time_server_irq_handle(pwm_irq_acknowledge, irq);
}

void plat_post_init(ltimer_t *ltimer)
{
    int error;

    /* Acknowledge all the timers inside the PWM timer */
    for (int i = 0; i < 5; i++) {
        ps_irq_t irq = { .type = PS_INTERRUPT, .irq = { .number = PWM_T0_INTERRUPT + i }};
        error = pwm_irq_acknowledge(&irq);
        ZF_LOGF_IF(error, "Failed to ack pwm t%d irq", i + 1);
    }
}
