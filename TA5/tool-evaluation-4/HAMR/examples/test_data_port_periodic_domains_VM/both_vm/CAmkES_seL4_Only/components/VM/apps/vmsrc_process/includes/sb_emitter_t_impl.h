#ifndef SB_EMITTER_T_IMPL_H
#define SB_EMITTER_T_IMPL_H

#include <sb_types.h>

const char *get_instance_name(void);

bool sb_write_port_write(const int8_t * value);

void test_event_data_port_emitter_time_triggered_handler(const int64_t * in_arg);

void test_event_data_port_emitter_component_init(const int64_t *arg);

#endif // SB_EMITTER_T_IMPL_H
