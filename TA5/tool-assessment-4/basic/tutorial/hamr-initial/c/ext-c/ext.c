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