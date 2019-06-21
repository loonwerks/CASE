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
#include <sel4/sel4.h>

/*? macros.show_includes(me.instance.type.includes) ?*/

/*- include 'get-notification.template.c' -*/

/*- set callback_notification = pop('callback_notification') -*/

void /*? me.interface.name ?*/_callback(seL4_Word badge);

void /*? me.interface.name ?*/__run(void) {
    while(1) {
        seL4_Word badge;
        seL4_Wait(/*? callback_notification ?*/, &badge);
        /*? me.interface.name ?*/_callback(badge);
    }
}
