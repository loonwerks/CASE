#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_destination_t_impl.h>

void test_data_port_periodic_destination_component_time_triggered(const int64_t *arg)
{
    int8_t value;

    if(sb_read_port_read(&value)){
        printf("[destination] value {%d}\n", value);
    }
}
