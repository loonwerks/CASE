#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_destination_t_impl.h>

void testdpmon_destination_component_time_triggered(int64_t *arg)
{
    int8_t value;

    if(sb_read_port_read(&value)){
        printf("[destination] value {%d}\n", value);
    }
}
