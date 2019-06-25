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

#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include <camkes.h>
#include <camkes/io.h>

static ps_io_port_ops_t io_ops;

#define CONFIG_ADDR 0xcf8
#define CONFIG_DATA 0xcfc

static void config_select(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset)
{
    /* Convert to 32bit values for doing bit shifting on */
    uint32_t lbus = bus;
    uint32_t ldev = dev;
    uint32_t lfun = fun;
    uint32_t address = (lbus << 16) | (ldev << 11) | (lfun << 8) | (offset & 0xfc) | 0x80000000u;
    ps_io_port_out(&io_ops, CONFIG_ADDR, IOSIZE_32, address);
}

uint8_t pci_config_read8(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset)
{
    config_select(bus, dev, fun, offset);
    uint32_t result = 0;
    uint32_t port = CONFIG_DATA + (offset & 3);
    int error = ps_io_port_in(&io_ops, port, IOSIZE_8, &result);
    if (error) {
        return 0;
    }

    return (uint8_t) result;
}

uint16_t pci_config_read16(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset)
{
    config_select(bus, dev, fun, offset);
    uint32_t result = 0;
    uint32_t port = CONFIG_DATA + (offset & 2);
    int error = ps_io_port_in(&io_ops, port, IOSIZE_16, &result);
    if (error) {
        return 0;
    }

    return (uint16_t) result;
}

uint32_t pci_config_read32(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset)
{
    config_select(bus, dev, fun, offset);
    uint32_t result = 0;
    uint32_t port = CONFIG_DATA;
    int error = ps_io_port_in(&io_ops, port, IOSIZE_32, &result);
    if (error) {
        return 0;
    }

    return result;
}

void pci_config_write8(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset, uint8_t val)
{
    config_select(bus, dev, fun, offset);
    uint32_t port = CONFIG_DATA + (offset & 3);
    // Ignore the error, if any
    ps_io_port_out(&io_ops, port, IOSIZE_8, val);
}

void pci_config_write16(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset, uint16_t val)
{
    config_select(bus, dev, fun, offset);
    uint32_t port = CONFIG_DATA + (offset & 2);
    // Ignore the error, if any
    ps_io_port_out(&io_ops, port, IOSIZE_16, val);
}

void pci_config_write32(uint8_t bus, uint8_t dev, uint8_t fun, unsigned int offset, uint32_t val)
{
    config_select(bus, dev, fun, offset);
    uint32_t port = CONFIG_DATA;
    // Ignore the error, if any
    ps_io_port_out(&io_ops, port, IOSIZE_32, val);
}

void pre_init(void)
{
    set_putchar(putchar_putchar);
    int error = camkes_io_port_ops(&io_ops);
    assert(!error);
}
