#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_emitter_t_impl.h>

static int8_t _value;

void test_event_data_port_emitter_component_init(const int64_t *in_arg)
{
    printf("test_event_data_port_emitter_component_init called\n");
    _value = 0;
}

void run_emitter(const int64_t *in_arg)
{
    if (sb_enq_enqueue( &_value ) ) {
        printf("[source] Sent %d\n", _value);
        _value = (_value + 1) % 500;
    } else {
        printf("[source] Unable to send\n");
    }
}
