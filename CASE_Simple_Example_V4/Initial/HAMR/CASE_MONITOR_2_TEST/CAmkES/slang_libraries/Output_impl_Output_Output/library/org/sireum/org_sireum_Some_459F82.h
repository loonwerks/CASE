#ifndef SIREUM_H_org_sireum_Some_459F82
#define SIREUM_H_org_sireum_Some_459F82

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]

#define Some_459F82_value_(this) ((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &(this)->value)

B Some_459F82__eq(Some_459F82 this, Some_459F82 other);
inline B Some_459F82__ne(Some_459F82 this, Some_459F82 other) {
  return !Some_459F82__eq(this, other);
};
void Some_459F82_string_(STACK_FRAME String result, Some_459F82 this);
void Some_459F82_cprint(Some_459F82 this, B isOut);

inline B Some_459F82__is(STACK_FRAME void* this) {
  return ((Some_459F82) this)->type == TSome_459F82;
}

inline Some_459F82 Some_459F82__as(STACK_FRAME void *this) {
  if (Some_459F82__is(CALLER this)) return (Some_459F82) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api].");
  abort();
}

void Some_459F82_apply(STACK_FRAME Some_459F82 this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif