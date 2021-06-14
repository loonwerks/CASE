#ifndef SIREUM_H_org_sireum_Some_2E1D55
#define SIREUM_H_org_sireum_Some_2E1D55

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

#define Some_2E1D55_value_(this) ((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &(this)->value)

B Some_2E1D55__eq(Some_2E1D55 this, Some_2E1D55 other);
inline B Some_2E1D55__ne(Some_2E1D55 this, Some_2E1D55 other) {
  return !Some_2E1D55__eq(this, other);
};
void Some_2E1D55_string_(STACK_FRAME String result, Some_2E1D55 this);
void Some_2E1D55_cprint(Some_2E1D55 this, B isOut);

inline B Some_2E1D55__is(STACK_FRAME void* this) {
  return ((Some_2E1D55) this)->type == TSome_2E1D55;
}

inline Some_2E1D55 Some_2E1D55__as(STACK_FRAME void *this) {
  if (Some_2E1D55__is(CALLER this)) return (Some_2E1D55) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api].");
  abort();
}

void Some_2E1D55_apply(STACK_FRAME Some_2E1D55 this, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif