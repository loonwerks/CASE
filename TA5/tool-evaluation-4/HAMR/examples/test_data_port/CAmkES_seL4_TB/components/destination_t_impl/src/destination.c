#include <camkes.h>
#include <stdio.h>
#include <sb_top_impl_Instance_types.h>
#include <sb_destination_t_impl.h>

void test_data_port_destination_component_init(const int64_t *in_arg) {
  printf("[%s] test_data_port_destination_component_init called\n", get_instance_name());
}

void run_receiver(const int64_t *in_arg) {

  int8_t value;
  if(sb_read_port_read(&value)){
    printf("[%s] value {%d}\n", get_instance_name(), value);
  }
}
