/* testevent/components/emitter/src/emitter.c */

#include <camkes.h>
#include <stdio.h>
#include "../../../../includes/tb_proc_types.h"

void testevent_emitter_component_init(const int64_t *in_arg)
{
}

/* control thread: keep calling enqueue for thing
 */
void run_emitter(const int64_t *in_arg)
{
    e_emit();
    printf("[Emitter] Sent event.");
}
