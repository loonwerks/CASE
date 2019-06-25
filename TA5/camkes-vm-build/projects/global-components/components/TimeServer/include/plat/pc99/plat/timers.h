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
#pragma once

#define HARDWARE_TIMER_INTERFACES                                      \
    uses IOPort pit_command;                                           \
    uses IOPort pit_channel0;                                          \
    consumes PITIRQ irq;

#define HARDWARE_TIMER_ATTRIBUTES                                      \
    attribute int pit_vector;

#define HARDWARE_TIMER_COMPOSITION                                     \
        component PIT pit;                                             \
        connection seL4HardwareIOPort pit_command(from pit_command,    \
                                                  to pit.command);     \
        connection seL4HardwareIOPort pit_channel0(from pit_channel0,  \
                                                   to pit.channel0);   \
        connection seL4HardwareInterrupt pit_irq(from pit.irq, to irq);

#define HARDWARE_TIMER_CONFIG                                          \
        pit.command_attributes  <- command_attributes;                 \
        pit.channel0_attributes  <- channel0_attributes;               \
        pit.irq_irq_type  <- irq_irq_type;                             \
        pit.irq_irq_ioapic  <- irq_irq_ioapic;                         \
        pit.irq_irq_ioapic_pin  <- irq_irq_ioapic_pin;                 \
        pit.irq_irq_vector  <- irq_irq_vector;

#define HARDWARE_TIMER_PLAT_INTERFACES                                  \
    uint64_t tsc_frequency();
