#ifndef SB_FLIGHTPLANNER_IMPL_H
#define SB_FLIGHTPLANNER_IMPL_H

#include <sb_types.h>

bool sb_flight_plan_enqueue(const sb_SW__Mission_container *);

bool sb_mission_rcv_dequeue(bool *);

void mission_rcv(const bool *);

bool sb_recv_map_dequeue(SW__Command_Impl *);

void recv_map(const SW__Command_Impl *);

void init(const int64_t *arg);

#endif // SB_FLIGHTPLANNER_IMPL_H
