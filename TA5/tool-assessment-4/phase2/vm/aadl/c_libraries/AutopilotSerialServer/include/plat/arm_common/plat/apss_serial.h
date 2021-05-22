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
 
#ifdef ARM_PLAT // HAMR - would need to do something similar for pc99

#pragma once

#define APSS_HARDWARE_SERIAL_INTERFACES  \
    emits Dummy dummy_source;            \
    consumes Dummy apss_serial_dev;

#define APSS_HARDWARE_SERIAL_ATTRIBUTES

#define APSS_HARDWARE_SERIAL_COMPOSITION                                                 \
        connection seL4DTBHardware serial_conn(from dummy_source, to apss_serial_dev);

#define APSS_HARDWARE_SERIAL_CONFIG                    \
        apss_serial_dev.dtb = dtb({ "path" : "/soc/serial@12c00000" });  \
        apss_serial_dev.generate_interrupts = 1;

#endif