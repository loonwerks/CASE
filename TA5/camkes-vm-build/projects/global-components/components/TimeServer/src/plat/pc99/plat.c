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

#include <autoconf.h>
#include <assert.h>
#include <stdio.h>
#include <sel4/sel4.h>
#include <sel4/arch/constants.h>
#include <camkes.h>
#include <platsupport/plat/timer.h>
#include <utils/util.h>
#include <sel4utils/sel4_zf_logif.h>
#include <simple/simple.h>
#include <sel4utils/arch/tsc.h>

#include "../../time_server.h"
#include "../../plat.h"

static uint64_t tsc_frequency = 0;

uint64_t the_timer_tsc_frequency()
{
    return tsc_frequency;
}

void irq_handle(void)
{
    /* We don't need to call ltimer_handle_irq */
    time_server_irq_handle(irq_acknowledge, NULL);
}

// We declare this with a weak attribute here as we would like this component to work
// regardless of whether the assembly declared this to have a simple template or not.
// Having this as weak allows us to test for this at run time / link time
void camkes_make_simple(simple_t *simple) __attribute__((weak));

void plat_post_init(ltimer_t *ltimer)
{
    int error = irq_acknowledge();
    ZF_LOGF_IF(error, "Failed to ack irq");

    // Attempt to detect the presence of a simple interface and try and get the
    // tsc frequency from it
    tsc_frequency = 0;
    if (camkes_make_simple) {
        simple_t simple;
        camkes_make_simple(&simple);
        tsc_frequency = x86_get_tsc_freq_from_simple(&simple);
    }

    if (tsc_frequency == 0) {
        // failed to detect from bootinfo for whatever reason, rely on the pit calibration
        tsc_frequency = ltimer_pit_get_tsc_freq(ltimer);
    }
}
