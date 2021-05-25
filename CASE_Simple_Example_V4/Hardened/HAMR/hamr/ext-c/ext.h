#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for HAMR_SW_RF_Msg_Impl
#define numBits_HAMR_SW_RF_Msg_Impl 472
#define numBytes_HAMR_SW_RF_Msg_Impl ((numBits_HAMR_SW_RF_Msg_Impl - 1) / 8 + 1)

// bit-codec size for HAMR_SW_AttestationRequestMsg_Impl
#define numBits_HAMR_SW_AttestationRequestMsg_Impl 80
#define numBytes_HAMR_SW_AttestationRequestMsg_Impl ((numBits_HAMR_SW_AttestationRequestMsg_Impl - 1) / 8 + 1)

// bit-codec size for HAMR_SW_AttestationResponseMsg_Impl
#define numBits_HAMR_SW_AttestationResponseMsg_Impl 88
#define numBytes_HAMR_SW_AttestationResponseMsg_Impl ((numBits_HAMR_SW_AttestationResponseMsg_Impl - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes);

// bit-codec size for HAMR_SW_Mission
#define numBits_HAMR_SW_Mission 960
#define numBytes_HAMR_SW_Mission ((numBits_HAMR_SW_Mission - 1) / 8 + 1)

// bit-codec size for HAMR_SW_Address_Impl
#define numBits_HAMR_SW_Address_Impl 128
#define numBytes_HAMR_SW_Address_Impl ((numBits_HAMR_SW_Address_Impl - 1) / 8 + 1)
#endif