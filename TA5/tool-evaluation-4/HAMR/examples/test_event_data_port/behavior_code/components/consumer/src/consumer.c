#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_consumer_t_impl.h>

void test_event_data_port_consumer_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_data_port_consumer_component_init called\n", get_instance_name());
}

void test_event_data_port_consumer_s_event_handler(const int8_t * in_arg) {
  /* keep dequeuing until no more things can be had
   */
  int8_t value;

  if (sb_deq_dequeue(&value)) {
    printf("[%s] value {%d}\n", get_instance_name(), value);
  } else {
    printf("[%s] no value consumed.\n", get_instance_name());
  }
}
