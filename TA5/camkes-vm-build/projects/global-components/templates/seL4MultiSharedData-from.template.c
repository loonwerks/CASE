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
#include <utils/util.h>

/*? macros.show_includes(me.instance.type.includes) ?*/


/*- set client_id = configuration[me.instance.name].get("%s_attributes" % me.interface.name) -*/
/*- if client_id is none or re.match('\\d+$', client_id) is none -*/
  /*? raise(Exception('%s.%s_attributes must be set to a number' % (me.instance.name, me.interface.name))) ?*/
/*- endif -*/
/*- set client_id = client_id.strip('"') -*/

/*- if suffix is not defined -*/
  /*- set suffix = '' -*/
/*- endif -*/

/*- set shmem_size = configuration[me.instance.name].get("%s_shmem_size" % me.interface.name, 4096) -*/
/*- set shmem_section = 'from_%s' % me.interface.name -*/
/*- set shmem_symbol = 'from_%s_data' % me.interface.name -*/
/*- set shmem_name = '%s%s' % (me.interface.name, suffix) -*/
/*- set page_size = macros.get_page_size(shmem_size, options.architecture) -*/
/*- if page_size == 0 -*/
  /*? raise(TemplateError('Setting %s.%s_shmem_size does not meet minimum size and alignment requirements. %d must be at least %d and %d aligned' % (me.instance.name, me.interface.name, size, 4096, 4096))) ?*/
/*- endif -*/
/*- set page_size_bits = int(math.log(page_size, 2)) -*/

struct {
    char content[ROUND_UP_UNSAFE(/*? shmem_size ?*/, PAGE_SIZE_4K)];
} /*? shmem_symbol ?*/
        ALIGN(/*? page_size ?*/)
        SECTION("align_/*? page_size_bits ?*/bit")
        __attribute__((externally_visible))
        USED;

/*? register_shared_variable('%s_%s_data' % (me.parent.name, client_id), shmem_symbol, shmem_size, frame_size=page_size) ?*/

volatile void * /*? shmem_name ?*/ = (volatile void *) & /*? shmem_symbol ?*/;

size_t /*? me.interface.name ?*/_get_size(void) {
    return ROUND_UP_UNSAFE(/*? shmem_size ?*/, PAGE_SIZE_4K);
}

int /*? me.interface.name ?*/_wrap_ptr(dataport_ptr_t *p, void *ptr) {
    return -1;
}

void * /*? me.interface.name ?*/_unwrap_ptr(dataport_ptr_t *p) {
    return NULL;
}
