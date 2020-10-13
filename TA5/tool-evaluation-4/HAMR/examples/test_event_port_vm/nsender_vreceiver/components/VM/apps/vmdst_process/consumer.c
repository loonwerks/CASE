#include <stdio.h>
#include <sb_types.h>
#include <sb_consumer_t_impl.h>

void test_event_port_consumer_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_port_consumer_component_init called\n", get_instance_name());
}

void test_event_port_consumer_time_triggered_handler(const int64_t * in_arg) {
  if(sp_event_port_consume()){
    printf("[%s] event consumed\n", get_instance_name());
  }
}
