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
/*- set suffix = "_buf" -*/
/*- include 'seL4MultiSharedData-from.template.c' -*/

static void *get_buffer() {
    return (void*)/*? me.interface.name + suffix ?*/;
}

/*- set base = 'get_buffer()' -*/
/*- set userspace_ipc = True -*/
/*- set dataport_type = configuration[me.instance.name].get('%s_dataport_type' % me.interface.name, 'Buf') -*/
/*- set buffer_size = macros.dataport_size(dataport_type) -*/
/*- set trust_partner = configuration[me.instance.name].get('trusted') == '"true"' -*/
/*- include 'rpc-connector-common-from.c' -*/
