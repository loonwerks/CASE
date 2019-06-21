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
    consumes Dummy ttc0;                                                            \
    consumes Dummy ttc1;
#define HARDWARE_TIMER_ATTRIBUTES
#define HARDWARE_TIMER_COMPOSITION                                                      \
        connection seL4DTBHardware ttc0_conn(from dummy_source, to ttc0);               \
        connection seL4DTBHardware ttc1_conn(from dummy_source, to ttc1);
#define HARDWARE_TIMER_CONFIG                                                       \
        ttc0.dtb = dtb({"path" : "/amba/timer@f8001000"});                          \
        ttc0.generate_interrupts = 1;                                               \
        ttc1.dtb = dtb({"path" : "/amba/timer@f8002000"});                          \
        ttc1.generate_interrupts = 1;
#define HARDWARE_TIMER_PLAT_INTERFACES
