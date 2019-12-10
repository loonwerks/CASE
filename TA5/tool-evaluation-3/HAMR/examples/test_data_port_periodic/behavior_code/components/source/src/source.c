#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_source_t_impl.h>

static int8_t _value;

void test_data_port_periodic_source_component_init(const int64_t *in_arg)
{
    printf("test_data_port_periodic_source_component_init called\n");
    _value = 0;
}

void test_data_port_periodic_source_component_time_triggered(const int64_t *arg)
{
    if (sb_write_port_write( &_value ) ) {
        printf("[source] Sent %d\n", _value );
        _value = (_value + 1) % 500;
    }
}
