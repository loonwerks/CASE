#ifndef SIREUM_H_org_sireum_Some_A6A622
#define SIREUM_H_org_sireum_Some_A6A622

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

#define Some_A6A622_value_(this) ((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &(this)->value)

B Some_A6A622__eq(Some_A6A622 this, Some_A6A622 other);
inline B Some_A6A622__ne(Some_A6A622 this, Some_A6A622 other) {
  return !Some_A6A622__eq(this, other);
};
void Some_A6A622_string_(STACK_FRAME String result, Some_A6A622 this);
void Some_A6A622_cprint(Some_A6A622 this, B isOut);

inline B Some_A6A622__is(STACK_FRAME void* this) {
  return ((Some_A6A622) this)->type == TSome_A6A622;
}

inline Some_A6A622 Some_A6A622__as(STACK_FRAME void *this) {
  if (Some_A6A622__is(CALLER this)) return (Some_A6A622) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api].");
  abort();
}

void Some_A6A622_apply(STACK_FRAME Some_A6A622 this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif