#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for CASE_MONITOR2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl
#define numBits_CASE_MONITOR2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl 35088
#define numBytes_CASE_MONITOR2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl ((numBits_CASE_MONITOR2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes);

// bit-codec size for CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl
#define numBits_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl 4832
#define numBytes_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl ((numBits_CASE_MONITOR2_TEST_ADSB_Types_MonitorReport_impl - 1) / 8 + 1)
#endif