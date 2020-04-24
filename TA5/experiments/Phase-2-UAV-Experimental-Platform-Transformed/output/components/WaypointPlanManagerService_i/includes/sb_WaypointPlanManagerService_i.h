#ifndef __sb_AADL_WaypointPlanManagerService_i_types__H
#define __sb_AADL_WaypointPlanManagerService_i_types__H

#include <sb_PROC_HW_types.h>

bool sb_AutomationResponse_dequeue(CMASI__AutomationResponse_i * sb_AutomationResponse);

void automation_response_event_handler(const CMASI__AutomationResponse_i * in_arg);

bool sb_AirVehicleState_dequeue(CMASI__AirVehicleState_i * sb_AirVehicleState);

void air_vehicle_state_event_handler(const CMASI__AirVehicleState_i * in_arg);

bool sb_MissionCommand_enqueue(const CMASI__MissionCommand_i * sb_MissionCommand);

bool sb_ReturnHome_dequeue(void);

void return_home_event_handler(void);

void initialize_wpm(const int64_t *arg);

#endif // __sb_AADL_WaypointPlanManagerService_i_types__H
