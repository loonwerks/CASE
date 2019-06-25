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
#pragma once

#define HARDWARE_TIMER_INTERFACES                                                   \
    emits Dummy dummy_source;                                                       \
    consumes Dummy pwm;
#define HARDWARE_TIMER_ATTRIBUTES
#define HARDWARE_TIMER_COMPOSITION                                                      \
        connection seL4DTBHardware pwm_conn(from dummy_source, to pwm);
#define HARDWARE_TIMER_CONFIG                                                                       \
        pwm.dtb = dtb({"path" : "/soc/pwm@12dd0000"});                                              \
        pwm.generate_interrupts = 1;
#define HARDWARE_TIMER_PLAT_INTERFACES
