#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_emitter_impl.h>

int8_t counter = 0;

void test_event_data_port_emitter_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_data_port_emitter_component_init called\n", get_instance_name());
}

void run_emitter(const int64_t *in_arg) {
  for(int8_t i = 1; i <= counter; i++) {
    sb_enq_enqueue(&i);
  }
  printf("---------------------------------------\n");
  printf("[%s] Sent %i events.\n", get_instance_name(), counter);
  
  counter = (counter + 1) % 7; // send b/w 0 to 6 events per dispatch
}
