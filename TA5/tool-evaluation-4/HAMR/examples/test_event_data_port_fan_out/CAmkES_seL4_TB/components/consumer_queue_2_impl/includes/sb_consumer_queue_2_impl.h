#ifndef __sb_AADL_consumer_queue_2_impl_types__H
#define __sb_AADL_consumer_queue_2_impl_types__H

#include <sb_proc_types.h>

bool sb_deq_dequeue(int8_t * sb_deq);

void test_event_data_port_consumer_s_event_handler(const int8_t * in_arg);

void test_event_data_port_consumer_component_init(const int64_t *arg);

#endif // __sb_AADL_consumer_queue_2_impl_types__H
