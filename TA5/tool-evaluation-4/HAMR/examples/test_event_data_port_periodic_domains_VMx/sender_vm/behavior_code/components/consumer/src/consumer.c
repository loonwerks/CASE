#include <stdio.h>
#include <sb_types.h>
#include <sb_consumer_t_impl.h>

extern const char *get_instance_name(void);

void test_event_data_port_consumer_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_data_port_consumer_component_init called\n", get_instance_name());
}

void test_event_data_port_consumer_time_triggered_handler(const int64_t * in_arg) {
  int8_t value;

  // dequeue event data port
  while(sb_read_port_dequeue(&value)) {
    printf("[%s] received {%d}\n", get_instance_name(), value);
  }
}
