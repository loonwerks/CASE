#include <camkes.h>
#include <stdio.h>
#include <sb_types.h>

void receiver_init(const int64_t *in_arg) {
  printf("[%s] test_data_port_destination_component_init called\n", get_instance_name());
}
