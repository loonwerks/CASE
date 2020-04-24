#ifndef __sb_AADL_RadioDriver_Impl_types__H
#define __sb_AADL_RadioDriver_Impl_types__H

#include <sb_PROC_HW_types.h>

bool sb_recv_data_dequeue(CASE_Model_Transformations__CASE_RF_Msg_Impl * sb_recv_data);

void recv_data_event_handler(const CASE_Model_Transformations__CASE_RF_Msg_Impl * in_arg);

bool sb_send_data_enqueue(const CASE_Model_Transformations__CASE_RF_Msg_Impl * sb_send_data);

bool sb_AutomationResponse_dequeue(CMASI__AutomationResponse_i * sb_AutomationResponse);

void automation_response_handler(const CMASI__AutomationResponse_i * in_arg);

bool sb_AirVehicleState_dequeue(CMASI__AirVehicleState_i * sb_AirVehicleState);

void air_vehicle_state_handler(const CMASI__AirVehicleState_i * in_arg);

bool sb_AutomationRequest_enqueue(const CMASI__AddressAttributedMessage_i * sb_AutomationRequest);

bool sb_OperatingRegion_enqueue(const CMASI__AddressAttributedMessage_i * sb_OperatingRegion);

bool sb_LineSearchTask_enqueue(const CMASI__AddressAttributedMessage_i * sb_LineSearchTask);

void initialize_radio(const int64_t *arg);

#endif // __sb_AADL_RadioDriver_Impl_types__H
