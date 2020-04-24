#ifndef __sb_AADL_UARTDriver_Impl_types__H
#define __sb_AADL_UARTDriver_Impl_types__H

#include <sb_PROC_HW_types.h>

bool sb_recv_data_dequeue(CASE_Model_Transformations__CASE_UART_Msg_Impl * sb_recv_data);

void recv_data_event_handler(const CASE_Model_Transformations__CASE_UART_Msg_Impl * in_arg);

bool sb_MissionCommand_dequeue(CMASI__MissionCommand_i * sb_MissionCommand);

void mission_command_event_handler(const CMASI__MissionCommand_i * in_arg);

bool sb_send_data_enqueue(const CASE_Model_Transformations__CASE_UART_Msg_Impl * sb_send_data);

bool sb_AirVehicleState_enqueue(const CMASI__AirVehicleState_i * sb_AirVehicleState);

void initialize_uart(const int64_t *arg);

#endif // __sb_AADL_UARTDriver_Impl_types__H
