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

#define HARDWARE_SERIAL_INTERFACES                              \
    emits Dummy dummy_source;                                   \
    consumes Dummy serial_dev;

#define HARDWARE_SERIAL_ATTRIBUTES

#define HARDWARE_SERIAL_COMPOSITION                                                 \
        connection seL4DTBHardware serial_conn(from dummy_source, to serial_dev);

#define HARDWARE_SERIAL_CONFIG                                  \
        serial_dev.dtb = dtb({"path":"/serial@70006000"});  \
        serial_dev.generate_interrupts = 1;
