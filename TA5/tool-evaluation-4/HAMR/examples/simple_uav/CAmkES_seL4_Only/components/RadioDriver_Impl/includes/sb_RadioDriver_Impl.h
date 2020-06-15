#ifndef SB_RADIODRIVER_IMPL_H
#define SB_RADIODRIVER_IMPL_H

#include <sb_types.h>

bool sb_recv_map_out_enqueue(const SW__Command_Impl *);

void init(const int64_t *arg);

#endif // SB_RADIODRIVER_IMPL_H
