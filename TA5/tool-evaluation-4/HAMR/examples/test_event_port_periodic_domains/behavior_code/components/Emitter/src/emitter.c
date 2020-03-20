#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_emitter_impl.h>

void test_event_port_emitter_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_port_emitter_component_init called\n", get_instance_name());
}

void run_emitter(const int64_t *in_arg) {
  printf("---------------------------------------\n");
  sb_e_write();
  printf("[%s] Sent event.\n", get_instance_name());
}
