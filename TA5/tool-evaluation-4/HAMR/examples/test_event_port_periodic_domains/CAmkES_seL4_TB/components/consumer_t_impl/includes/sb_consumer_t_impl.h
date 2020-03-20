#ifndef __sb_AADL_consumer_t_impl_types__H
#define __sb_AADL_consumer_t_impl_types__H

#include <sb_proc_types.h>

bool sb_consume_read(void);

void test_event_port_consumer_s_event_handler(void);

void test_data_port_periodic_domains_destination_component_time_triggered(const int64_t *);

void test_event_port_consumer_component_init(const int64_t *arg);

#endif // __sb_AADL_consumer_t_impl_types__H
