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

#define HARDWARE_TIMER_COMPONENT                                       \
    component DMTimer {                                                \
        hardware;                                                      \
        dataport Buf(4096) mem;                                        \
        emits DMTimerIRQ irq;                                          \
    }                                                                  \

#define HARDWARE_TIMER_INTERFACES                                      \
    dataport Buf(4096) dmtimer2_mem;                                   \
    dataport Buf(4096) dmtimer3_mem;                                   \
    consumes DMTimerIRQ dmtimer2_irq;                                  \
    consumes DMTimerIRQ dmtimer3_irq;
#define HARDWARE_TIMER_ATTRIBUTES
#define HARDWARE_TIMER_COMPOSITION                                     \
        component DMTimer dmtimer2;                                    \
        component DMTimer dmtimer3;                                    \
        connection seL4HardwareMMIO dmtimer2_mem(from dmtimer2_mem,    \
                                                 to dmtimer2.mem);     \
        connection seL4HardwareMMIO dmtimer3_mem(from dmtimer3_mem,    \
                                                 to dmtimer3.mem);     \
        connection seL4HardwareInterrupt dmtimer2_irq(from dmtimer2.irq, \
                                                      to dmtimer2_irq);  \
        connection seL4HardwareInterrupt dmtimer3_irq(from dmtimer3.irq, \
                                                      to dmtimer3_irq);
#define HARDWARE_TIMER_CONFIG                                            \
    dmtimer2.mem_paddr = 0x48040000;                                     \
    dmtimer2.mem_size = 0x1000;                                          \
    dmtimer2.irq_irq_number = 68;                                        \
    dmtimer3.mem_paddr = 0x48042000;                                     \
    dmtimer3.mem_size = 0x1000;                                          \
    dmtimer3.irq_irq_number = 69;
#define HARDWARE_TIMER_PLAT_INTERFACES
