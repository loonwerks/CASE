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
#include <sel4/sel4.h>
#include <dataport_caps.h>

/*? macros.show_includes(me.instance.type.includes) ?*/

/*- set index = me.parent.to_ends.index(me) -*/

#define SHM_ALIGN /*? macros.PAGE_SIZE ?*/

/*- set dataport_symbol_name = "to_%d_%s_data" % (index, me.interface.name) -*/
/*- set type_size = macros.dataport_size(me.interface.type) -*/
/*- set dataport_size = configuration[me.instance.name].get('%s_size' % me.interface.name) -*/
/*- set page_size = macros.get_page_size(dataport_size, options.architecture) -*/
/*- if page_size == 0 -*/
  /*? raise(TemplateError('Setting %s.%s_size does not meet minimum size requirements. %d must be at least %d and %d aligned' % (me.instance.name, me.interface.name, size, 4096, 4096))) ?*/
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
/*? register_shared_variable('%s_data' % me.parent.name, dataport_symbol_name, dataport_size, frame_size=page_size, perm=perm) ?*/

/*- set frame_objs = get_shared_variable_backing_frames('%s_data' % me.parent.name, dataport_size) -*/
/*- set frame_caps = [] -*/
static seL4_CPtr frame_caps[] = {
/*- for (i, frame) in enumerate(frame_objs) -*/
    /*- set frame_cap = alloc_cap('%s_%d' % ('%s_data' % me.parent.name, i), frame) -*/
    /*- do frame_caps.append(frame_cap) -*/
    /*? frame_cap ?*/,
/*- endfor -*/
};
/*- set num_frame_caps = len(frame_caps) -*/

volatile /*? macros.dataport_type(me.interface.type) ?*/ * /*? me.interface.name ?*/ =
    (volatile /*? macros.dataport_type(me.interface.type) ?*/ *) & to_/*? index ?*/_/*? me.interface.name ?*/_data;

/*- set id = composition.connections.index(me.parent) -*/

int /*? me.interface.name ?*/_wrap_ptr(dataport_ptr_t *p, void *ptr) {
    if ((uintptr_t)ptr < (uintptr_t)/*? me.interface.name ?*/ ||
            (uintptr_t)ptr >= (uintptr_t)/*? me.interface.name ?*/ + /*? macros.dataport_size(me.interface.type) ?*/) {
        return -1;
    }
    p->id = /*? id ?*/;
    p->offset =  (off_t)((uintptr_t)ptr - (uintptr_t)/*? me.interface.name ?*/);
    return 0;
}

void * /*? me.interface.name ?*/_unwrap_ptr(dataport_ptr_t *p) {
    if (p->id == /*? id ?*/) {
        return (void*)((uintptr_t)/*? me.interface.name ?*/ + (uintptr_t)p->offset);
    } else {
        return NULL;
    }
}

static seL4_CPtr /*? me.interface.name ?*/_get_nth_frame_cap(unsigned int n) {
    return frame_caps[n];
}

static seL4_CPtr* /*? me.interface.name ?*/_get_frame_caps(void) {
    return frame_caps;
}

static unsigned int /*? me.interface.name ?*/_get_num_frame_caps(void) {
    return /*? num_frame_caps ?*/;
}

static unsigned int /*? me.interface.name ?*/_get_id(void) {
    return /*? configuration[me.instance.name].get('%s_id' % me.interface.name) ?*/;
}

static size_t /*? me.interface.name ?*/_get_size(void) {
    return /*? dataport_size ?*/;
}

static seL4_CapRights_t /*? me.interface.name ?*/_get_rights(void) {
    /*- if perm is none -*/
        return seL4_AllRights;
    /*- else -*/
        /*- set read = int("R" in perm) -*/
        /*- set write = int("W" in perm) -*/
        /*# The 0 grant/grantreply argument below is because the grant operations are meaningless on dataports.
         *# The lack of execute permission is because cap rights don't capture the right to execute
         *# the contents of a mapped-in page. #*/
        return seL4_CapRights_new(0, 0, /*? read ?*/, /*? write ?*/);
    /*- endif -*/
}

dataport_caps_handle_t /*? me.interface.name ?*/_handle = {
    .get_nth_frame_cap = /*? me.interface.name ?*/_get_nth_frame_cap,
    .get_id = /*? me.interface.name ?*/_get_id,
    .get_num_frame_caps = /*? me.interface.name ?*/_get_num_frame_caps,
    .get_frame_caps = /*? me.interface.name ?*/_get_frame_caps,
    .get_size = /*? me.interface.name ?*/_get_size,
    .get_rights = /*? me.interface.name ?*/_get_rights,
};
