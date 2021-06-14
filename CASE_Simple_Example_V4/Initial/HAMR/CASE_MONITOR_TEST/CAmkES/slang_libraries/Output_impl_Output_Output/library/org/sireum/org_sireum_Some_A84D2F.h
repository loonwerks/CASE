#ifndef SIREUM_H_org_sireum_Some_A84D2F
#define SIREUM_H_org_sireum_Some_A84D2F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]

#define Some_A84D2F_value_(this) ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &(this)->value)

B Some_A84D2F__eq(Some_A84D2F this, Some_A84D2F other);
inline B Some_A84D2F__ne(Some_A84D2F this, Some_A84D2F other) {
  return !Some_A84D2F__eq(this, other);
};
void Some_A84D2F_string_(STACK_FRAME String result, Some_A84D2F this);
void Some_A84D2F_cprint(Some_A84D2F this, B isOut);

inline B Some_A84D2F__is(STACK_FRAME void* this) {
  return ((Some_A84D2F) this)->type == TSome_A84D2F;
}

inline Some_A84D2F Some_A84D2F__as(STACK_FRAME void *this) {
  if (Some_A84D2F__is(CALLER this)) return (Some_A84D2F) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api].");
  abort();
}

void Some_A84D2F_apply(STACK_FRAME Some_A84D2F this, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif