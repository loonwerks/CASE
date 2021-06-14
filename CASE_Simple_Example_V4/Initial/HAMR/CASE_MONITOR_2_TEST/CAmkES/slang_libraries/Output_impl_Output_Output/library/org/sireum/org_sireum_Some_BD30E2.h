#ifndef SIREUM_H_org_sireum_Some_BD30E2
#define SIREUM_H_org_sireum_Some_BD30E2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]

#define Some_BD30E2_value_(this) ((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &(this)->value)

B Some_BD30E2__eq(Some_BD30E2 this, Some_BD30E2 other);
inline B Some_BD30E2__ne(Some_BD30E2 this, Some_BD30E2 other) {
  return !Some_BD30E2__eq(this, other);
};
void Some_BD30E2_string_(STACK_FRAME String result, Some_BD30E2 this);
void Some_BD30E2_cprint(Some_BD30E2 this, B isOut);

inline B Some_BD30E2__is(STACK_FRAME void* this) {
  return ((Some_BD30E2) this)->type == TSome_BD30E2;
}

inline Some_BD30E2 Some_BD30E2__as(STACK_FRAME void *this) {
  if (Some_BD30E2__is(CALLER this)) return (Some_BD30E2) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api].");
  abort();
}

void Some_BD30E2_apply(STACK_FRAME Some_BD30E2 this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif