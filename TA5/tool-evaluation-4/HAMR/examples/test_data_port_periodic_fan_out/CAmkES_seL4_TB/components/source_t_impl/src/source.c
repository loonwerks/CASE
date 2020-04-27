#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>
#include <sb_source_t_impl.h>

static int8_t _value;

void test_data_port_periodic_source_component_init(const int64_t *in_arg) {
  printf("[%s] test_data_port_periodic_source_component_init called\n", get_instance_name());
  _value = 0;
}

void test_data_port_periodic_source_component_time_triggered(const int64_t *arg) {
  if (sb_write_port_write( &_value ) ) {
    printf("---------------------------------------\n");
    printf("[%s] Sent %d\n", get_instance_name(), _value );
    _value = (_value + 1) % 500;
  }
}
