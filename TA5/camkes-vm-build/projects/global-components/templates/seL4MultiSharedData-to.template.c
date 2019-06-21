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
#include <sel4/sel4.h>
#include <utils/util.h>

/*? macros.show_includes(me.instance.type.includes) ?*/

/*# Enumerate all the incoming interfaces #*/
/*- set shmems = [] -*/
/*- set client_ids = set() -*/
/*- for c in me.parent.from_ends -*/

    /*- set client_id = configuration[c.instance.name].get("%s_attributes" % c.interface.name) -*/
    /*- if client_id is none or re.match('\\d+$', client_id) is none -*/
        /*? raise(Exception('%s.%s_attributes must be set to a number' % (c.instance.name, c.interface.name))) ?*/
    /*- endif -*/
    /*- set client_id = client_id.strip('"') -*/

    /*- if client_id not in client_ids -*/
        /*- do client_ids.add(client_id) -*/

        /*- set shmem_size = configuration[c.instance.name].get("%s_shmem_size" % c.interface.name, 4096) -*/
        /*- set shmem_section = 'to_%s_%s' % (me.interface.name, client_id) -*/
        /*- set shmem_symbol = 'to_%s_%s_data' % (me.interface.name, client_id) -*/
        /*- set shmem_name = "%s_buf_%s" % (me.interface.name, client_id) -*/
        /*- set page_size = macros.get_page_size(shmem_size, options.architecture) -*/
        /*- if page_size == 0 -*/
          /*? raise(TemplateError('Setting %s.%s_shmem_size does not meet minimum size and alignment requirements. %d must be at least %d and %d aligned' % (c.instance.name, c.interface.name, size, 4096, 4096))) ?*/
        /*- endif -*/
        /*- set page_size_bits = int(math.log(page_size, 2)) -*/


        #define SHM_ALIGN (1 << 12)
        struct {
            char content[ROUND_UP_UNSAFE(/*? shmem_size ?*/, PAGE_SIZE_4K)];
        } /*? shmem_symbol ?*/
                ALIGN(/*? page_size ?*/)
                SECTION("align_/*? page_size_bits ?*/bit")
                __attribute__((externally_visible))
                USED;

        /*? register_shared_variable('%s_%s_data' % (me.parent.name, client_id), shmem_symbol, shmem_size, frame_size=page_size) ?*/

        volatile void * /*? shmem_name ?*/ = (volatile void *) & /*? shmem_symbol ?*/;

        /*- do shmems.append((shmem_name, client_id, shmem_size)) -*/
    /*- else -*/
        /* skipping /*? client_id ?*/ */
    /*- endif -*/

/*- endfor -*/


void * /*? me.interface.name ?*/_buf(seL4_Word client_id) {
    /*- if len(shmems) == 0 -*/
        return NULL;
    /*- else -*/
        switch (client_id) {
            /*- for symbol, id, _ in shmems -*/
            case /*? id ?*/:
                return (void *) /*? symbol ?*/;
            /*- endfor -*/
        default:
            return NULL;
        }
    /*- endif -*/
}

size_t /*? me.interface.name ?*/_buf_size(seL4_Word client_id) {
    /*- if len(shmems) == 0 -*/
        return 0;
    /*- else -*/
        switch (client_id) {
            /*- for _, id, size in shmems -*/
            case /*? id ?*/:
                return ROUND_UP_UNSAFE(/*? size ?*/, PAGE_SIZE_4K);
            /*- endfor -*/
        default:
            return 0;
        }
    /*- endif -*/
}

unsigned int /*? me.interface.name ?*/_num_badges(void) {
    return /*? len(shmems) ?*/;
}

seL4_Word /*? me.interface.name ?*/_enumerate_badge(unsigned int i) {
    /*- if len(shmems) == 0 -*/
       return -1;
    /*- else -*/
        switch (i) {
            /*- for _, id, _ in shmems -*/
                case /*? loop.index0 ?*/:
                    return /*? id ?*/;
            /*- endfor -*/
        default:
            return -1;
        }
    /*- endif -*/
}


int /*? me.interface.name ?*/_wrap_ptr(dataport_ptr_t *p, void *ptr) {
    return -1;
}

void * /*? me.interface.name ?*/_unwrap_ptr(dataport_ptr_t *p) {
    return NULL;
}
