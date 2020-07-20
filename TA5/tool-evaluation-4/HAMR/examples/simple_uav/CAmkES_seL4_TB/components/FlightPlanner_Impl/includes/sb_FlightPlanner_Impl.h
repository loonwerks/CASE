// This file will be regenerated, do not edit

#ifndef SB_FLIGHTPLANNER_IMPL_H
#define SB_FLIGHTPLANNER_IMPL_H

#include <sb_types.h>

bool sb_flight_plan_enqueue(const sb_SW__Mission_container * sb_flight_plan);

bool sb_mission_rcv_dequeue(bool * sb_mission_rcv);

void mission_rcv(const bool * in_arg);

bool sb_recv_map_dequeue(SW__Command_Impl * sb_recv_map);

void recv_map(const SW__Command_Impl * in_arg);

void init(const int64_t *arg);

#endif // SB_FLIGHTPLANNER_IMPL_H
