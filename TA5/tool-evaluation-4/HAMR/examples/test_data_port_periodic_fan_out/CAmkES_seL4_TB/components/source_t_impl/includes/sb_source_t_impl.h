#ifndef SB_SOURCE_T_IMPL_H
#define SB_SOURCE_T_IMPL_H

#include <sb_types.h>

bool sb_write_port_write(const int8_t * sb_write_port);

void test_data_port_periodic_source_component_time_triggered(const int64_t *);

void test_data_port_periodic_source_component_init(const int64_t *arg);

#endif // SB_SOURCE_T_IMPL_H
