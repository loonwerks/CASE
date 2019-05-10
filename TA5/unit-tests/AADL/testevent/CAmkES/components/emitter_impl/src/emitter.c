/* testevent/components/emitter/src/emitter.c */

#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_emitter_impl.h>

void testevent_emitter_component_init(const int64_t *in_arg)
{
    printf("testevent_emitter_component_init called\n");
}

/* control thread: keep calling enqueue for thing
 */
void run_emitter(const int64_t *in_arg)
{
    sb_emitter_impl_write_e();
    printf("[Emitter] Sent event.\n");
}
