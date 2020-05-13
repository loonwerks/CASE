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
#include <camkes.h>
#include <vmlinux.h>
#include <sel4vm/guest_vm.h>

#include <sel4vmmplatsupport/drivers/cross_vm_connection.h>
#include <sel4vmmplatsupport/drivers/pci_helper.h>
#include <pci/helper.h>

#ifdef CONFIG_PLAT_QEMU_ARM_VIRT
#define CONNECTION_BASE_ADDRESS 0xDF000000
#else
#define CONNECTION_BASE_ADDRESS 0x3F000000
#endif

// The following device definitions correspond to the following camkes interfaces.

// maybe dataport queue_t crossvm_dp_0;
// emits SendEvent ready;

#define NUM_CONNECTIONS 1
static struct camkes_crossvm_connection connections[NUM_CONNECTIONS];

// these are defined in the dataport's glue code
extern dataport_caps_handle_t crossvm_dp_0_handle;
void ready_emit_underlying(void);

static int consume_callback(vm_t *vm, void *cookie)
{
    consume_connection_event(vm, (seL4_Word) cookie, true);
    return 0;
}


void init_cross_vm_connections(vm_t *vm, void *cookie)
{
    connections[0] = (struct camkes_crossvm_connection) {
        .handle = &crossvm_dp_0_handle,
        .emit_fn = ready_emit_underlying,
        .consume_badge = -1
    };

    for (int i = 0; i < NUM_CONNECTIONS; i++) {
        if (connections[i].consume_badge != -1) {
            int err = register_async_event_handler(connections[i].consume_badge, consume_callback, (void *)connections[i].consume_badge);
            ZF_LOGF_IF(err, "Failed to register_async_event_handler for init_cross_vm_connections.");
        }
    }

    cross_vm_connections_init(vm, CONNECTION_BASE_ADDRESS, connections, ARRAY_SIZE(connections));
}

DEFINE_MODULE(cross_vm_connections, NULL, init_cross_vm_connections)

