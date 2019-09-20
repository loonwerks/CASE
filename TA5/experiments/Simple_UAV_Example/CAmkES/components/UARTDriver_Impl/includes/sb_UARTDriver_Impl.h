#ifndef __sb_AADL_UARTDriver_Impl_types__H
#define __sb_AADL_UARTDriver_Impl_types__H

#include "../../../includes/sb_PROC_HW_types.h"

bool sb_mission_window_dequeue(sb_SW__MissionWindow_container * sb_mission_window);

void mission_window(const sb_SW__MissionWindow_container * in_arg);

bool sb_tracking_id_enqueue(const uintmax_t * sb_tracking_id);

void init(const uintmax_t *arg);

#endif // __sb_AADL_UARTDriver_Impl_types__H
