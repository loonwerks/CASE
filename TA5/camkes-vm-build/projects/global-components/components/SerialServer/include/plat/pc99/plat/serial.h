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

#define HARDWARE_SERIAL_INTERFACES                                      \
    uses IOPort serial_port;                                            \
    consumes Irq4 serial_irq;

#define HARDWARE_SERIAL_ATTRIBUTES

#define HARDWARE_SERIAL_COMPOSITION                                                             \
        component Serial hw_serial;                                                             \
        connection seL4HardwareIOPort serial_ioport(from serial_port, to hw_serial.serial);     \
        connection seL4HardwareInterrupt serial_irq(from hw_serial.serial_irq, to serial_irq);  \

#define HARDWARE_SERIAL_CONFIG                                              \
        hw_serial.serial_attributes <- serial_attributes;                   \
        hw_serial.serial_irq_irq_type <- serial_irq_irq_type;               \
        hw_serial.serial_irq_irq_ioapic <- serial_irq_irq_ioapic;           \
        hw_serial.serial_irq_irq_ioapic_pin <- serial_irq_irq_ioapic_pin;   \
        hw_serial.serial_irq_irq_vector <- serial_irq_irq_vector;
