#include <camkes.h>
#include <stdio.h>
#include <sb_consumer_queue_2_impl.h>

void test_event_port_consumer_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_port_consumer_component_init called\n", get_instance_name());
}

void test_event_port_consumer_s_event_handler() {
 int32_t counter = 0;
  while(sb_s_read()) {
    counter++;
  }
  
  printf("[%s] Received %i events\n", get_instance_name(), counter);
}
