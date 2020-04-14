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

#include <camkes.h>
#include <vmlinux.h>
#include <sel4vm/guest_vm.h>

#include <sel4vmmplatsupport/drivers/cross_vm_connection.h>
#include <sel4vmmplatsupport/drivers/pci_helper.h>
#include <pci/helper.h>

#define CONNECTION_BASE_ADDRESS 0x3F000000

// these are defined in the dataport's glue code
extern dataport_caps_handle_t crossvm_dp_0_handle;
//extern dataport_caps_handle_t crossvm_dp_1_handle;

void done_emit_underlying(void); 

static struct camkes_crossvm_connection connections[] = {
    {&crossvm_dp_0_handle, NULL, -1},
};


void done_emit_underlying(void) WEAK;
void ready_emit_underlying(void) WEAK;
void init_cross_vm_connections(vm_t *vm, void *cookie)
{
	if (done_emit_underlying) {
		connections[0].emit_fn = done_emit_underlying;
	} else if (ready_emit_underlying) {
		connections[0].emit_fn = ready_emit_underlying;
	} else {
		ZF_LOGF("Could not find emit function");
	}

    cross_vm_connections_init(vm, CONNECTION_BASE_ADDRESS, connections, ARRAY_SIZE(connections));
}

DEFINE_MODULE(cross_vm_connections, NULL, init_cross_vm_connections)
