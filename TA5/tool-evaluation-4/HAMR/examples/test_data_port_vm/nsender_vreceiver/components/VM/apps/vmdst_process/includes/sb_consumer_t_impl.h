#ifndef SB_CONSUMER_T_IMPL_H
#define SB_CONSUMER_T_IMPL_H

#include <sb_types.h>

const char *get_instance_name(void);

bool sp_read_port_read(int8_t *);

void test_data_port_consumer_time_triggered_handler(const int64_t * in_arg);

void test_data_port_consumer_component_init(const int64_t *arg);

#endif // SB_CONSUMER_T_IMPL_H