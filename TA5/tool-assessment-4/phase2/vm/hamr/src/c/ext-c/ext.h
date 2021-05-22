#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl)
#define numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl 1
#define numBytes_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl ((numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_MissionCommand_i)
#define numBits_hamr_CMASI_MissionCommand_i 16384
#define numBytes_hamr_CMASI_MissionCommand_i ((numBits_hamr_CMASI_MissionCommand_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AirVehicleState_i)
#define numBits_hamr_CMASI_AirVehicleState_i 4096
#define numBytes_hamr_CMASI_AirVehicleState_i ((numBits_hamr_CMASI_AirVehicleState_i - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

// bit-codec size for hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl)
#define numBits_hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl 1
#define numBytes_hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl ((numBits_hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AddressArray_i)
#define numBits_hamr_CMASI_AddressArray_i 96
#define numBytes_hamr_CMASI_AddressArray_i ((numBits_hamr_CMASI_AddressArray_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AddressAttributedMessage_i)
#define numBits_hamr_CMASI_AddressAttributedMessage_i 131072
#define numBytes_hamr_CMASI_AddressAttributedMessage_i ((numBits_hamr_CMASI_AddressAttributedMessage_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_Polygon_i)
#define numBits_hamr_CMASI_Polygon_i 1024
#define numBytes_hamr_CMASI_Polygon_i ((numBits_hamr_CMASI_Polygon_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AutomationRequest_i)
#define numBits_hamr_CMASI_AutomationRequest_i 2048
#define numBytes_hamr_CMASI_AutomationRequest_i ((numBits_hamr_CMASI_AutomationRequest_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_OperatingRegion_i)
#define numBits_hamr_CMASI_OperatingRegion_i 2048
#define numBytes_hamr_CMASI_OperatingRegion_i ((numBits_hamr_CMASI_OperatingRegion_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_LineSearchTask_i)
#define numBits_hamr_CMASI_LineSearchTask_i 65536
#define numBytes_hamr_CMASI_LineSearchTask_i ((numBits_hamr_CMASI_LineSearchTask_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AutomationResponse_i)
#define numBits_hamr_CMASI_AutomationResponse_i 262144
#define numBytes_hamr_CMASI_AutomationResponse_i ((numBits_hamr_CMASI_AutomationResponse_i - 1) / 8 + 1)

// bit-codec size for B)
#define numBits_B 1
#define numBytes_B ((numBits_B - 1) / 8 + 1)
#endif