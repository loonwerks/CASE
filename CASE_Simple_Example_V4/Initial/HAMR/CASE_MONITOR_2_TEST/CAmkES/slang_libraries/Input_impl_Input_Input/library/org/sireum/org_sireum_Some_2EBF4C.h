#ifndef SIREUM_H_org_sireum_Some_2EBF4C
#define SIREUM_H_org_sireum_Some_2EBF4C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]

#define Some_2EBF4C_value_(this) ((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) &(this)->value)

B Some_2EBF4C__eq(Some_2EBF4C this, Some_2EBF4C other);
inline B Some_2EBF4C__ne(Some_2EBF4C this, Some_2EBF4C other) {
  return !Some_2EBF4C__eq(this, other);
};
void Some_2EBF4C_string_(STACK_FRAME String result, Some_2EBF4C this);
void Some_2EBF4C_cprint(Some_2EBF4C this, B isOut);

inline B Some_2EBF4C__is(STACK_FRAME void* this) {
  return ((Some_2EBF4C) this)->type == TSome_2EBF4C;
}

inline Some_2EBF4C Some_2EBF4C__as(STACK_FRAME void *this) {
  if (Some_2EBF4C__is(CALLER this)) return (Some_2EBF4C) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api].");
  abort();
}

void Some_2EBF4C_apply(STACK_FRAME Some_2EBF4C this, CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif