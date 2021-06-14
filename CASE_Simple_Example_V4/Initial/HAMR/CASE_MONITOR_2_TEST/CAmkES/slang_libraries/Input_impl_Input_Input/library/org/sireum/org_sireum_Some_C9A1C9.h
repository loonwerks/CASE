#ifndef SIREUM_H_org_sireum_Some_C9A1C9
#define SIREUM_H_org_sireum_Some_C9A1C9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]

#define Some_C9A1C9_value_(this) ((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) &(this)->value)

B Some_C9A1C9__eq(Some_C9A1C9 this, Some_C9A1C9 other);
inline B Some_C9A1C9__ne(Some_C9A1C9 this, Some_C9A1C9 other) {
  return !Some_C9A1C9__eq(this, other);
};
void Some_C9A1C9_string_(STACK_FRAME String result, Some_C9A1C9 this);
void Some_C9A1C9_cprint(Some_C9A1C9 this, B isOut);

inline B Some_C9A1C9__is(STACK_FRAME void* this) {
  return ((Some_C9A1C9) this)->type == TSome_C9A1C9;
}

inline Some_C9A1C9 Some_C9A1C9__as(STACK_FRAME void *this) {
  if (Some_C9A1C9__is(CALLER this)) return (Some_C9A1C9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api].");
  abort();
}

void Some_C9A1C9_apply(STACK_FRAME Some_C9A1C9 this, CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif