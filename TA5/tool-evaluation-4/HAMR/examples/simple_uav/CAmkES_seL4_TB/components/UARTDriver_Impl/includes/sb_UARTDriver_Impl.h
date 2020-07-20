// This file will be regenerated, do not edit

#ifndef SB_UARTDRIVER_IMPL_H
#define SB_UARTDRIVER_IMPL_H

#include <sb_types.h>

bool sb_mission_window_dequeue(sb_SW__MissionWindow_container * sb_mission_window);

void mission_window(const sb_SW__MissionWindow_container * in_arg);

bool sb_tracking_id_enqueue(const int64_t * sb_tracking_id);

void init(const int64_t *arg);

#endif // SB_UARTDRIVER_IMPL_H
