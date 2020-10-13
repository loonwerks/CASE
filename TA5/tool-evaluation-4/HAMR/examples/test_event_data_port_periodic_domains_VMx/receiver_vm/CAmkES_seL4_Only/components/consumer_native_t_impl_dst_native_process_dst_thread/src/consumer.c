#include <stdio.h>
#include <sb_types.h>
#include <sb_consumer_native_t_impl.h>

extern const char *get_instance_name(void);

void test_event_data_port_consumer_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_data_port_consumer_component_init called\n", get_instance_name());
}

void test_event_data_port_consumer_event_handler(const int8_t * in_arg) {

  // print received value
  printf("[%s] received {%d}\n", get_instance_name(), *in_arg);

  int8_t value;
  // dequeue any remaining events
  while(sb_read_port_dequeue(&value)) {
    printf("[%s] received {%d}\n", get_instance_name(), value);
  }
}
