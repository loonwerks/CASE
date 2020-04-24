#ifndef __sb_AADL_Waterways_i_types__H
#define __sb_AADL_Waterways_i_types__H

#include <sb_PROC_HW_types.h>

bool sb_AutomationRequest_dequeue(CMASI__AutomationRequest_i * sb_AutomationRequest);

void automation_request_event_handler(const CMASI__AutomationRequest_i * in_arg);

bool sb_AirVehicleState_dequeue(CMASI__AirVehicleState_i * sb_AirVehicleState);

void air_vehicle_state_event_handler(const CMASI__AirVehicleState_i * in_arg);

bool sb_OperatingRegion_dequeue(CMASI__OperatingRegion_i * sb_OperatingRegion);

void operation_region_event_handler(const CMASI__OperatingRegion_i * in_arg);

bool sb_LineSearchTask_dequeue(CMASI__LineSearchTask_i * sb_LineSearchTask);

void line_search_task_event_handler(const CMASI__LineSearchTask_i * in_arg);

bool sb_MissionCommand_enqueue(const CMASI__MissionCommand_i * sb_MissionCommand);

bool sb_VehicleActionCommand_enqueue(const CMASI__VehicleActionCommand_i * sb_VehicleActionCommand);

bool sb_AutomationResponse_enqueue(const CMASI__AutomationResponse_i * sb_AutomationResponse);

void initialize_uxas(const int64_t *arg);

#endif // __sb_AADL_Waterways_i_types__H
