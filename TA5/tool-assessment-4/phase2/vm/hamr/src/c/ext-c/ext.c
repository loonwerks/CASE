#include <ext.h>

// This file will not be overwritten so is safe to edit

// add c extension code here

// example method that sets the first numBits bits of byteArray to 1
void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "byte_array_default", 0);

  sfAssert(SF (numBits - 1) / 8  + 1 <= numBytes, "");

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

// example method that places the hex value of byteArray into str
void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "byte_array_string", 0);

  for(size_t byte = 0; byte < numBytes; byte++) {
    U8_string_(SF str, byteArray[byte]);
    String__append(SF str, string(" "));
  }
}