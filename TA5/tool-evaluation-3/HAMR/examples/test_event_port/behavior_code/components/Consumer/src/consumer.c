#include <camkes.h>
#include <stdio.h>
#include <sb_consumer_impl.h>

static int8_t _value;

void test_event_port_consumer_component_init(const int64_t *in_arg) {
  printf("test_event_port_consumer_component_init called\n");
  _value = 0;
}

void test_event_port_consumer_s_event_handler() {

  printf("[Consumer] Callback %d fired.\n", _value);
  _value = (_value + 1) % 500;
}
