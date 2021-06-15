#ifndef SIREUM_H_HAMR_Base_Types_Bits_Payload
#define SIREUM_H_HAMR_Base_Types_Bits_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR.Base_Types.Bits_Payload

#define HAMR_Base_Types_Bits_Payload_value_(this) ((IS_C4F575) &(this)->value)

B HAMR_Base_Types_Bits_Payload__eq(HAMR_Base_Types_Bits_Payload this, HAMR_Base_Types_Bits_Payload other);
inline B HAMR_Base_Types_Bits_Payload__ne(HAMR_Base_Types_Bits_Payload this, HAMR_Base_Types_Bits_Payload other) {
  return !HAMR_Base_Types_Bits_Payload__eq(this, other);
};
void HAMR_Base_Types_Bits_Payload_string_(STACK_FRAME String result, HAMR_Base_Types_Bits_Payload this);
void HAMR_Base_Types_Bits_Payload_cprint(HAMR_Base_Types_Bits_Payload this, B isOut);

inline B HAMR_Base_Types_Bits_Payload__is(STACK_FRAME void* this) {
  return ((HAMR_Base_Types_Bits_Payload) this)->type == THAMR_Base_Types_Bits_Payload;
}

inline HAMR_Base_Types_Bits_Payload HAMR_Base_Types_Bits_Payload__as(STACK_FRAME void *this) {
  if (HAMR_Base_Types_Bits_Payload__is(CALLER this)) return (HAMR_Base_Types_Bits_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR.Base_Types.Bits_Payload.");
  abort();
}

void HAMR_Base_Types_Bits_Payload_apply(STACK_FRAME HAMR_Base_Types_Bits_Payload this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif