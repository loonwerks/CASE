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

void epit2_irq_handle(ps_irq_t *irq)
{
    time_server_irq_handle(epit2_irq_acknowledge, irq);
}

void gpt_irq_handle(ps_irq_t *irq)
{
    time_server_irq_handle(gpt_irq_acknowledge, irq);
}

void plat_post_init(ltimer_t *ltimer)
{
    int error;

    ps_irq_t gpt_irq = { .type = PS_INTERRUPT, .irq = { .number = TIMESTAMP_INTERRUPT }};
    error = gpt_irq_acknowledge(&gpt_irq);
    ZF_LOGF_IF(error, "Failed to ack gpt irq");

    ps_irq_t epit2_irq = { .type = PS_INTERRUPT, .irq = { .number = TIMEOUT_INTERRUPT }};
    error = epit2_irq_acknowledge(&epit2_irq);
    ZF_LOGF_IF(error, "Failed to ack epit2 irq");
}
