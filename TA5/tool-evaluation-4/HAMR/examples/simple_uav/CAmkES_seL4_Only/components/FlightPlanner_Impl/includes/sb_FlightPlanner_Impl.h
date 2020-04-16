#ifndef __sb_AADL_FlightPlanner_Impl_types__H
#define __sb_AADL_FlightPlanner_Impl_types__H

#include <sb_UAV_Impl_Instance_types.h>

bool sb_flight_plan_enqueue(const sb_SW__Mission_container *);

bool sb_mission_rcv_dequeue(bool *);

void mission_rcv(const bool *);

bool sb_recv_map_dequeue(SW__Command_Impl *);

void recv_map(const SW__Command_Impl *);

void init(const int64_t *arg);

#endif // __sb_AADL_FlightPlanner_Impl_types__H
