#include <camkes.h>
#include <stdio.h>
#include <sb_emitter_t_impl.h>

void test_event_port_emitter_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_port_emitter_component_init called\n", get_instance_name());
}

void run_emitter(const int64_t *in_arg) {
  printf("---------------------------------------\n");
  sb_emit_enqueue();
  printf("[%s] Sent event.\n", get_instance_name());
}
