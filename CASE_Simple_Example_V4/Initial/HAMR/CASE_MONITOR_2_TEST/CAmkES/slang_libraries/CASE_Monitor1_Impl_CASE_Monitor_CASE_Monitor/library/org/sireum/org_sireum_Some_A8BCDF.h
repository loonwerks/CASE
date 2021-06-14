#ifndef SIREUM_H_org_sireum_Some_A8BCDF
#define SIREUM_H_org_sireum_Some_A8BCDF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

#define Some_A8BCDF_value_(this) ((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &(this)->value)

B Some_A8BCDF__eq(Some_A8BCDF this, Some_A8BCDF other);
inline B Some_A8BCDF__ne(Some_A8BCDF this, Some_A8BCDF other) {
  return !Some_A8BCDF__eq(this, other);
};
void Some_A8BCDF_string_(STACK_FRAME String result, Some_A8BCDF this);
void Some_A8BCDF_cprint(Some_A8BCDF this, B isOut);

inline B Some_A8BCDF__is(STACK_FRAME void* this) {
  return ((Some_A8BCDF) this)->type == TSome_A8BCDF;
}

inline Some_A8BCDF Some_A8BCDF__as(STACK_FRAME void *this) {
  if (Some_A8BCDF__is(CALLER this)) return (Some_A8BCDF) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api].");
  abort();
}

void Some_A8BCDF_apply(STACK_FRAME Some_A8BCDF this, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif