#ifndef __sb_AADL_FlightPlanner_Impl_types__H
#define __sb_AADL_FlightPlanner_Impl_types__H

#include "../../../includes/sb_PROC_HW_types.h"

bool sb_flight_plan_enqueue(const sb_SW__Mission_container * sb_flight_plan);

bool sb_mission_rcv_dequeue(bool * sb_mission_rcv);

void mission_rcv(const bool * in_arg);

bool sb_recv_map_dequeue(SW__Command_Impl * sb_recv_map);

void recv_map(const SW__Command_Impl * in_arg);

void init(const int64_t *arg);

#endif // __sb_AADL_FlightPlanner_Impl_types__H
