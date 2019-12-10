#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_emitter_impl.h>

void test_event_port_emitter_component_init(const int64_t *in_arg)
{
    printf("test_event_port_emitter_component_init called\n");
}

void run_emitter(const int64_t *in_arg)
{
    sb_emitter_impl_write_e();
    printf("[Emitter] Sent event.\n");
}
