#ifndef __sb_AADL_emitter_t_impl_types__H
#define __sb_AADL_emitter_t_impl_types__H

#include <sb_proc_types.h>

bool sb_write_port_enqueue(const int8_t * sb_write_port);

void run_emitter(const int64_t *);

void test_event_data_port_emitter_component_init(const int64_t *arg);

#endif // __sb_AADL_emitter_t_impl_types__H
