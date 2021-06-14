#ifndef SIREUM_H_CASE_MONITOR_TEST_Base_Types_Bits_Payload
#define SIREUM_H_CASE_MONITOR_TEST_Base_Types_Bits_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// CASE_MONITOR_TEST.Base_Types.Bits_Payload

#define CASE_MONITOR_TEST_Base_Types_Bits_Payload_value_(this) ((IS_C4F575) &(this)->value)

B CASE_MONITOR_TEST_Base_Types_Bits_Payload__eq(CASE_MONITOR_TEST_Base_Types_Bits_Payload this, CASE_MONITOR_TEST_Base_Types_Bits_Payload other);
inline B CASE_MONITOR_TEST_Base_Types_Bits_Payload__ne(CASE_MONITOR_TEST_Base_Types_Bits_Payload this, CASE_MONITOR_TEST_Base_Types_Bits_Payload other) {
  return !CASE_MONITOR_TEST_Base_Types_Bits_Payload__eq(this, other);
};
void CASE_MONITOR_TEST_Base_Types_Bits_Payload_string_(STACK_FRAME String result, CASE_MONITOR_TEST_Base_Types_Bits_Payload this);
void CASE_MONITOR_TEST_Base_Types_Bits_Payload_cprint(CASE_MONITOR_TEST_Base_Types_Bits_Payload this, B isOut);

inline B CASE_MONITOR_TEST_Base_Types_Bits_Payload__is(STACK_FRAME void* this) {
  return ((CASE_MONITOR_TEST_Base_Types_Bits_Payload) this)->type == TCASE_MONITOR_TEST_Base_Types_Bits_Payload;
}

inline CASE_MONITOR_TEST_Base_Types_Bits_Payload CASE_MONITOR_TEST_Base_Types_Bits_Payload__as(STACK_FRAME void *this) {
  if (CASE_MONITOR_TEST_Base_Types_Bits_Payload__is(CALLER this)) return (CASE_MONITOR_TEST_Base_Types_Bits_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to CASE_MONITOR_TEST.Base_Types.Bits_Payload.");
  abort();
}

void CASE_MONITOR_TEST_Base_Types_Bits_Payload_apply(STACK_FRAME CASE_MONITOR_TEST_Base_Types_Bits_Payload this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif