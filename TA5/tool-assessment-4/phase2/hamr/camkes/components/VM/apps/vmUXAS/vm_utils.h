#ifndef VM_UTILS_H
#define VM_UTILS_H

#include <stdint.h>
#include <stddef.h>

char* setupOutgoingEventDataPort(char* portName, int portSize, int* port_fd, int** portEmit); // convenience method

char* setupIncomingEventDataPort(char* portName, int portSize, int* portQueue_fd);	// convenience method

char* setupOutgoingDataPort(char* portName, int portSize, int* port_fd); // convenience method

char* setupIncomingDataPort(char* portName, int portSize, int* portQueue_fd);	// convenience method

void tearDownPort(char* raw_fd, int fd, int size); // convenience method

void hex_dump(uint8_t *byteArray, size_t numBits);


// bit-codec size for hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl
#define numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl 262144
#define numBytes_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl ((numBits_hamr_CASE_Model_Transformations_CASE_UART_Msg_Impl - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_MissionCommand_i
#define numBits_hamr_CMASI_MissionCommand_i 16384
#define numBytes_hamr_CMASI_MissionCommand_i ((numBits_hamr_CMASI_MissionCommand_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AirVehicleState_i
#define numBits_hamr_CMASI_AirVehicleState_i 4096
#define numBytes_hamr_CMASI_AirVehicleState_i ((numBits_hamr_CMASI_AirVehicleState_i - 1) / 8 + 1)

// bit-codec size for hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl
#define numBits_hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl 262144
#define numBytes_hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl ((numBits_hamr_CASE_Model_Transformations_CASE_RF_Msg_Impl - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AddressArray_i
#define numBits_hamr_CMASI_AddressArray_i 96
#define numBytes_hamr_CMASI_AddressArray_i ((numBits_hamr_CMASI_AddressArray_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AddressAttributedMessage_i
#define numBits_hamr_CMASI_AddressAttributedMessage_i 131072
#define numBytes_hamr_CMASI_AddressAttributedMessage_i ((numBits_hamr_CMASI_AddressAttributedMessage_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_Polygon_i
#define numBits_hamr_CMASI_Polygon_i 1024
#define numBytes_hamr_CMASI_Polygon_i ((numBits_hamr_CMASI_Polygon_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AutomationRequest_i
#define numBits_hamr_CMASI_AutomationRequest_i 2048
#define numBytes_hamr_CMASI_AutomationRequest_i ((numBits_hamr_CMASI_AutomationRequest_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_OperatingRegion_i
#define numBits_hamr_CMASI_OperatingRegion_i 2048
#define numBytes_hamr_CMASI_OperatingRegion_i ((numBits_hamr_CMASI_OperatingRegion_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_LineSearchTask_i
#define numBits_hamr_CMASI_LineSearchTask_i 65536
#define numBytes_hamr_CMASI_LineSearchTask_i ((numBits_hamr_CMASI_LineSearchTask_i - 1) / 8 + 1)

// bit-codec size for hamr_CMASI_AutomationResponse_i
#define numBits_hamr_CMASI_AutomationResponse_i 262144
#define numBytes_hamr_CMASI_AutomationResponse_i ((numBits_hamr_CMASI_AutomationResponse_i - 1) / 8 + 1)

#endif