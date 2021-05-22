#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for pfc_PFC_Mission
#define numBits_pfc_PFC_Mission 288
#define numBytes_pfc_PFC_Mission ((numBits_pfc_PFC_Mission - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes);

#define DeclNewISZ_Bits(x) DeclNewIS_C4F575(x)

#define ISZ_Bits IS_C4F575

size_t encode_Mission_MissionBitCodec_PFC_pfc(
        struct pfc_PFC_MissionBitCodec_Mission *input,
        U8 *output);

B decode_Mission_MissionBitCodec_PFC_pfc(
        U8* input,
        Z size,
        struct pfc_PFC_MissionBitCodec_Mission *output);
#endif