/*#
 *#Copyright 2017, Data61
 *#Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 *#ABN 41 687 119 230.
 *#
 *#This software may be distributed and modified according to the terms of
 *#the BSD 2-Clause license. Note that NO WARRANTY is provided.
 *#See "LICENSE_BSD2.txt" for details.
 *#
 *#@TAG(DATA61_BSD)
  #*/
#include <assert.h>
#include <sel4/sel4.h>

/*- include 'seL4MultiSharedData-to.template.c' -*/

seL4_Word /*? me.interface.name ?*/_get_sender_id(void);

static void *get_buffer() {
    void *base = /*? me.interface.name ?*/_buf(/*? me.interface.name ?*/_get_sender_id());
    assert(base);
    return base;
}

/*- set base = 'get_buffer()' -*/
/*- set userspace_ipc = True -*/
/*- set dataport_type = configuration[me.parent.from_instance.name].get('%s_dataport_type' % me.parent.from_interface.name, 'Buf') -*/
/*- set buffer_size = macros.dataport_size(dataport_type) -*/
/*- set trust_partner = configuration[me.instance.name].get('trusted') == '"true"' -*/
/*- include 'rpc-connector-common-to.c' -*/

