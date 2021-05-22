#include <ext.h>

// This file will not be overwritten so is safe to edit

// add c extension code here

// example method that sets the first numBits bits of byteArray to 1
void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "byte_array_default", 0);

  sfAssert(SF (numBits - 1) / 8  + 1 <= numBytes, "byte_array_default: numBytes * 8 must be at least numBits");

  for(size_t byte = 0; byte < numBytes; byte++) {
    uint8_t v = 0;
    for(uint8_t bit = 0; bit < 8; bit++) {
      if(byte * 8 + bit < numBits) {
        v |= 1UL << bit;
      }
    }
    byteArray[byte] = v;
  }
}

// example method that places the hex value of the bytes in byteArray into str
void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "byte_array_string", 0);

  sfAssert(SF (str->size + numBytes) <= MaxString, "byte_array_string: Insufficient maximum for String characters, consider increasing the --max-string-size option");

  for(size_t byte = 0; byte < numBytes; byte++) {
    U8_string_(SF str, byteArray[byte]);
    String__append(SF str, string(" "));
  }
}

// example method that directly prints the hex values of the bytes in byte_array
void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "hex_dump", 0);

  printf("[ ");
  for(size_t byte = 0; byte < numBytes; byte++) {
    if(byte != 0 && byte % 16 == 0) { printf("\n  "); }
    printf("%02X ", byte_array[byte]);
  }
  printf("]\n");
}

size_t encode_Mission_MissionBitCodec_PFC_pfc(
        struct pfc_PFC_MissionBitCodec_Mission *input,
        U8 *output) {
    DeclNewops_Bits_Context(ctx);
    DeclNewOption_30119F(result);
    ops_Bits_Context_create(&ctx);
    pfc_PFC_MissionBitCodec_Mission_encode_(&result, input, &ctx);
    if (ctx.errorCode != 0) {
        return -1;
    }
    memcpy(output, &(result.Some_8D03B1.value.value), (ctx.offset / 8) + (ctx.offset % 8 != 0 ? 1 : 0));
    return ctx.offset;
}

B decode_Mission_MissionBitCodec_PFC_pfc(
        unsigned char* input,
        Z size,
        struct pfc_PFC_MissionBitCodec_Mission *output) {
    DeclNewOption_FF6E7A(result);
    DeclNewIS_C4F575(in);
    DeclNewops_Bits_Context(ctx);
    ops_Bits_Context_create(&ctx);
    memcpy(&(in.value), input, (size / 8) + (size % 8 != 0 ? 1 : 0));
    in.size = size;
    pfc_PFC_MissionBitCodec_Mission_decode(&result, &in, &ctx);
    if (ctx.errorCode != 0) {
        return F;
    }
    memcpy(output, &(result.Some_82FB12.value), sizeof(struct pfc_PFC_MissionBitCodec_Mission));
    return T;
}