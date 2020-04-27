#ifndef __sb_AADL_consumer_t_impl_types__H
#define __sb_AADL_consumer_t_impl_types__H

#include <sb_types.h>

bool sb_read_port_dequeue(int8_t * sb_read_port);

void test_event_data_port_consumer_time_triggered_handler(const int64_t *);

void test_event_data_port_consumer_component_init(const int64_t *arg);

#endif // __sb_AADL_consumer_t_impl_types__H
