#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_emitter_t_impl.h>

static int8_t _value;

void test_event_port_emitter_component_init(const int64_t *in_arg) {
  printf("[%s] test_event_port_emitter_component_init called\n", get_instance_name());
  _value = 0;
}

void test_event_port_emitter_time_triggered_handler(const int64_t *in_arg) {
  if (sb_event_port_emit() ) {
    //printf("---------------------------------------\n");
    printf("[%s] Event %d\n", get_instance_name(), _value );
    _value = (_value + 1) % 128;
  }
}
