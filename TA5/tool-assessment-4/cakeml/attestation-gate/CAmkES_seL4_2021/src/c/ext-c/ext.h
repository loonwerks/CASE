#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for attestation_gate_CMASI_AutomationRequest_i)
#define numBits_attestation_gate_CMASI_AutomationRequest_i 2048
#define numBytes_attestation_gate_CMASI_AutomationRequest_i ((numBits_attestation_gate_CMASI_AutomationRequest_i - 1) / 8 + 1)

// bit-codec size for attestation_gate_CMASI_OperatingRegion_i)
#define numBits_attestation_gate_CMASI_OperatingRegion_i 2048
#define numBytes_attestation_gate_CMASI_OperatingRegion_i ((numBits_attestation_gate_CMASI_OperatingRegion_i - 1) / 8 + 1)

// bit-codec size for attestation_gate_CMASI_LineSearchTask_i)
#define numBits_attestation_gate_CMASI_LineSearchTask_i 65536
#define numBytes_attestation_gate_CMASI_LineSearchTask_i ((numBits_attestation_gate_CMASI_LineSearchTask_i - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

// bit-codec size for attestation_gate_CMASI_AddressArray_i)
#define numBits_attestation_gate_CMASI_AddressArray_i 96
#define numBytes_attestation_gate_CMASI_AddressArray_i ((numBits_attestation_gate_CMASI_AddressArray_i - 1) / 8 + 1)

// bit-codec size for attestation_gate_CMASI_AddressAttributedMessage_i)
#define numBits_attestation_gate_CMASI_AddressAttributedMessage_i 131072
#define numBytes_attestation_gate_CMASI_AddressAttributedMessage_i ((numBits_attestation_gate_CMASI_AddressAttributedMessage_i - 1) / 8 + 1)
#endif