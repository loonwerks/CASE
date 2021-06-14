#ifndef SIREUM_H_org_sireum_Some_BA86B7
#define SIREUM_H_org_sireum_Some_BA86B7

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]

#define Some_BA86B7_value_(this) ((CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) &(this)->value)

B Some_BA86B7__eq(Some_BA86B7 this, Some_BA86B7 other);
inline B Some_BA86B7__ne(Some_BA86B7 this, Some_BA86B7 other) {
  return !Some_BA86B7__eq(this, other);
};
void Some_BA86B7_string_(STACK_FRAME String result, Some_BA86B7 this);
void Some_BA86B7_cprint(Some_BA86B7 this, B isOut);

inline B Some_BA86B7__is(STACK_FRAME void* this) {
  return ((Some_BA86B7) this)->type == TSome_BA86B7;
}

inline Some_BA86B7 Some_BA86B7__as(STACK_FRAME void *this) {
  if (Some_BA86B7__is(CALLER this)) return (Some_BA86B7) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api].");
  abort();
}

void Some_BA86B7_apply(STACK_FRAME Some_BA86B7 this, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif