#include <camkes.h>
#include <stdio.h>
#include <sb_consumer_queue_default_impl.h>

void test_event_port_consumer_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_port_consumer_component_init called\n", get_instance_name());
}

void test_event_port_consumer_s_event_handler() {
 int32_t counter = 1; // 1 for the event that triggered the handler
  while(sb_s_dequeue()) {
    counter++;
  }
  
  printf("[%s] Received %i events\n", get_instance_name(), counter);
}

