/*
 * Copyright 2020, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

/*- do configuration[me.instance.name].update({"%s_access" % me.interface.name: "RW"}) -*/
/*- include 'seL4SharedDataWithCaps.template.c' -*/

/*- set generate_notifications = configuration[me.parent.name].get("with_signalling", false) -*/
/*- if generate_notifications -*/
	/*- from 'global-endpoint.template.c' import allocate_cap with context -*/
	/*- set notifications = [] -*/

	/*- for index in six.moves.range(len(me.parent.to_ends)) -*/
		/*- set connection_type = configuration[me.parent.to_ends[index].instance.name].get('%s_type' % me.parent.to_ends[index].interface.name, 'native') -*/

		/*- if connection_type == 'native' -*/
	  		/*- do notifications.append(alloc('notification_%d' % index, seL4_NotificationObject, write=True)) -*/
		/*- elif connection_type == 'vm' -*/
		    /*- do allocate_cap(me.parent.to_ends[index], is_reader=False) -*/
	    	/*- set notification = pop('notification') -*/
	  		/*- do notifications.append(notification) -*/

		/*- else -*/
		     /*? raise(TemplateError('Setting %s.%s_type is not valid. Must be either "native" or "vm"' % (me.parent.to_ends[index].instance.name, me.parent.to_ends[index].interface.name))) ?*/
		/*- endif -*/
	/*- endfor -*/

	void /*? me.interface.name ?*/_emit_underlying(void) {
	    /*- for notification in notifications -*/
	    seL4_Signal(/*? notification ?*/);
	    /*- endfor -*/
	}
/*- endif -*/

/*- set connection_type = configuration[me.instance.name].get('%s_type' % me.interface.name, 'native') -*/
/*- if connection_type == 'vm' -*/
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

static struct camkes_crossvm_connection /*? me.interface.name ?*/_connection = {
    &/*? me.interface.name ?*/_handle,
/*- if generate_notifications -*/
	/*? me.interface.name ?*/_emit_underlying, 
/*- else -*/
	NULL,
/*- endif -*/
-1, "/*? me.interface.name ?*/",
};
CROSS_VM_CONNECTION(/*? me.interface.name ?*/, /*? me.interface.name ?*/_connection);

WEAK void init_cross_vm_connections(vm_t *vm, void *cookie);

static void init_connections(vm_t *vm, void *cookie)
{
    if (!init_cross_vm_connections) {
    	cross_vm_connections_init(vm, CONNECTION_BASE_ADDRESS, NULL, 0);
    }
}

DEFINE_MODULE(/*? me.interface.name ?*/_module, NULL, init_connections)

/*- endif -*/
