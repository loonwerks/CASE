#ifndef SIREUM_H_org_sireum_Some_ED6B7D
#define SIREUM_H_org_sireum_Some_ED6B7D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]

#define Some_ED6B7D_value_(this) ((CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &(this)->value)

B Some_ED6B7D__eq(Some_ED6B7D this, Some_ED6B7D other);
inline B Some_ED6B7D__ne(Some_ED6B7D this, Some_ED6B7D other) {
  return !Some_ED6B7D__eq(this, other);
};
void Some_ED6B7D_string_(STACK_FRAME String result, Some_ED6B7D this);
void Some_ED6B7D_cprint(Some_ED6B7D this, B isOut);

inline B Some_ED6B7D__is(STACK_FRAME void* this) {
  return ((Some_ED6B7D) this)->type == TSome_ED6B7D;
}

inline Some_ED6B7D Some_ED6B7D__as(STACK_FRAME void *this) {
  if (Some_ED6B7D__is(CALLER this)) return (Some_ED6B7D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api].");
  abort();
}

void Some_ED6B7D_apply(STACK_FRAME Some_ED6B7D this, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif