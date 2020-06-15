#ifndef SB_EMITTER_IMPL_H
#define SB_EMITTER_IMPL_H

#include <sb_types.h>

bool sb_e_enqueue(void);

void run_emitter(const int64_t *);

void test_event_port_emitter_component_init(const int64_t *arg);

#endif // SB_EMITTER_IMPL_H
