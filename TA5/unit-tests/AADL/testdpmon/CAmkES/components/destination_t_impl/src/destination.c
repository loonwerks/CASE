#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_destination_t_impl.h>

void run_receiver(const int64_t *in_arg)
{
    int8_t value;

    if(sb_read_port_read(&value)){
        printf("[destination] value {%d}\n", value);
    }
}
