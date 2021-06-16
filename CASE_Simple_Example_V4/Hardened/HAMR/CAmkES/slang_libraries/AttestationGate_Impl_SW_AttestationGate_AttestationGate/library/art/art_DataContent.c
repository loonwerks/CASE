#include <all.h>

// art.DataContent

B art_DataContent__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case THAMR_Base_Types_Bits_Payload: return T;
    case Tart_Empty: return T;
    default: return F;
  }
}

art_DataContent art_DataContent__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case THAMR_Base_Types_Bits_Payload: break;
    case Tart_Empty: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.DataContent.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_DataContent) this;
}

void art_DataContent_string_(STACK_FRAME String result, art_DataContent this);