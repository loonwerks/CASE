// This file will be regenerated, do not edit

#ifndef SB_WAYPOINTMANAGER_IMPL_H
#define SB_WAYPOINTMANAGER_IMPL_H

#include <sb_types.h>

bool sb_flight_plan_dequeue(sb_SW__Mission_container *);

void flight_plan(const sb_SW__Mission_container *);

bool sb_mission_rcv_enqueue(const bool *);

bool sb_mission_window_enqueue(const sb_SW__MissionWindow_container *);

bool sb_tracking_id_dequeue(int64_t *);

void tracking_id(const int64_t *);

void init(const int64_t *arg);

#endif // SB_WAYPOINTMANAGER_IMPL_H
