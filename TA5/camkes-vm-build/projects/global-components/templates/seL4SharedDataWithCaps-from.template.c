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
#include <camkes/dataport.h>
#include <stdint.h>
#include <stdlib.h>
#include <utils/util.h>

/*? macros.show_includes(me.instance.type.includes) ?*/

/*- set index = me.parent.from_ends.index(me) -*/


/*- set dataport_symbol_name = "from_%d_%s_data" % (index, me.interface.name) -*/
/*- set type_size = macros.dataport_size(me.interface.type) -*/
/*- set size = configuration[me.parent.to_instance.name].get('%s_size' % me.parent.to_interface.name) -*/
/*- set page_size = macros.get_page_size(size, options.architecture) -*/
/*- if page_size == 0 -*/
  /*? raise(TemplateError('Setting %s.%s_size does not meet minimum size requirements. %d must be at least %d and %d aligned' % (me.parent.to_instance.name, me.parent.to_interface.name, size, 4096, 4096))) ?*/
/*- endif -*/
/*- set page_size_bits = int(math.log(page_size, 2)) -*/

struct {
    char content[ROUND_UP_UNSAFE(/*? type_size ?*/,
        PAGE_SIZE_4K)];
} /*? dataport_symbol_name ?*/
        ALIGN(/*? page_size ?*/)
        SECTION("align_/*? page_size_bits ?*/bit")
        USED;
/*- set perm = macros.get_perm(configuration, me.instance.name, me.interface.name) -*/
/*? register_shared_variable('%s_data' % me.parent.name, dataport_symbol_name, size, frame_size=page_size, perm=perm) ?*/

volatile /*? macros.dataport_type(me.interface.type) ?*/ * /*? me.interface.name ?*/ =
    (volatile /*? macros.dataport_type(me.interface.type) ?*/ *) & from_/*? index ?*/_/*? me.interface.name ?*/_data;

/*- set id = composition.connections.index(me.parent) -*/

int /*? me.interface.name ?*/_wrap_ptr(dataport_ptr_t *p, void *ptr) {
    if ((uintptr_t)ptr < (uintptr_t)/*? me.interface.name ?*/ ||
            (uintptr_t)ptr >= (uintptr_t)/*? me.interface.name ?*/ + /*? macros.dataport_size(me.interface.type) ?*/) {
        return -1;
    }
    p->id = /*? id ?*/;
    p->offset = (off_t)((uintptr_t)ptr - (uintptr_t)/*? me.interface.name ?*/);
    return 0;
}

void * /*? me.interface.name ?*/_unwrap_ptr(dataport_ptr_t *p) {
    if (p->id == /*? id ?*/) {
        return (void*)((uintptr_t)/*? me.interface.name ?*/ + (uintptr_t)p->offset);
    } else {
        return NULL;
    }
}
