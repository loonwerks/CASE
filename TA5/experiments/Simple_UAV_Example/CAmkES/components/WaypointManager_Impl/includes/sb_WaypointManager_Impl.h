#ifndef __sb_AADL_WaypointManager_Impl_types__H
#define __sb_AADL_WaypointManager_Impl_types__H

#include "../../../includes/sb_PROC_HW_types.h"

bool sb_flight_plan_dequeue(sb_SW__Mission_container * sb_flight_plan);

void flight_plan(const sb_SW__Mission_container * in_arg);

bool sb_mission_rcv_enqueue(const bool * sb_mission_rcv);

bool sb_mission_window_enqueue(const sb_SW__MissionWindow_container * sb_mission_window);

bool sb_tracking_id_dequeue(uintmax_t * sb_tracking_id);

void tracking_id(const uintmax_t * in_arg);

void init(const uintmax_t *arg);

#endif // __sb_AADL_WaypointManager_Impl_types__H
