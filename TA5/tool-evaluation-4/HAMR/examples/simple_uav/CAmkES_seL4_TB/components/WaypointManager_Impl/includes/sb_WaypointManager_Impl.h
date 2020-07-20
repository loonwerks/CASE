// This file will be regenerated, do not edit

#ifndef SB_WAYPOINTMANAGER_IMPL_H
#define SB_WAYPOINTMANAGER_IMPL_H

#include <sb_types.h>

bool sb_flight_plan_dequeue(sb_SW__Mission_container * sb_flight_plan);

void flight_plan(const sb_SW__Mission_container * in_arg);

bool sb_mission_rcv_enqueue(const bool * sb_mission_rcv);

bool sb_mission_window_enqueue(const sb_SW__MissionWindow_container * sb_mission_window);

bool sb_tracking_id_dequeue(int64_t * sb_tracking_id);

void tracking_id(const int64_t * in_arg);

void init(const int64_t *arg);

#endif // SB_WAYPOINTMANAGER_IMPL_H
