#ifndef SIREUM_H_HAMR_Simple_V4_Base_Types_Bits_Payload
#define SIREUM_H_HAMR_Simple_V4_Base_Types_Bits_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR_Simple_V4.Base_Types.Bits_Payload

#define HAMR_Simple_V4_Base_Types_Bits_Payload_value_(this) ((IS_C4F575) &(this)->value)

B HAMR_Simple_V4_Base_Types_Bits_Payload__eq(HAMR_Simple_V4_Base_Types_Bits_Payload this, HAMR_Simple_V4_Base_Types_Bits_Payload other);
inline B HAMR_Simple_V4_Base_Types_Bits_Payload__ne(HAMR_Simple_V4_Base_Types_Bits_Payload this, HAMR_Simple_V4_Base_Types_Bits_Payload other) {
  return !HAMR_Simple_V4_Base_Types_Bits_Payload__eq(this, other);
};
void HAMR_Simple_V4_Base_Types_Bits_Payload_string_(STACK_FRAME String result, HAMR_Simple_V4_Base_Types_Bits_Payload this);
void HAMR_Simple_V4_Base_Types_Bits_Payload_cprint(HAMR_Simple_V4_Base_Types_Bits_Payload this, B isOut);

inline B HAMR_Simple_V4_Base_Types_Bits_Payload__is(STACK_FRAME void* this) {
  return ((HAMR_Simple_V4_Base_Types_Bits_Payload) this)->type == THAMR_Simple_V4_Base_Types_Bits_Payload;
}

inline HAMR_Simple_V4_Base_Types_Bits_Payload HAMR_Simple_V4_Base_Types_Bits_Payload__as(STACK_FRAME void *this) {
  if (HAMR_Simple_V4_Base_Types_Bits_Payload__is(CALLER this)) return (HAMR_Simple_V4_Base_Types_Bits_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR_Simple_V4.Base_Types.Bits_Payload.");
  abort();
}

void HAMR_Simple_V4_Base_Types_Bits_Payload_apply(STACK_FRAME HAMR_Simple_V4_Base_Types_Bits_Payload this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif