#ifndef SIREUM_H_org_sireum_Some_CBF40F
#define SIREUM_H_org_sireum_Some_CBF40F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]

#define Some_CBF40F_value_(this) ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &(this)->value)

B Some_CBF40F__eq(Some_CBF40F this, Some_CBF40F other);
inline B Some_CBF40F__ne(Some_CBF40F this, Some_CBF40F other) {
  return !Some_CBF40F__eq(this, other);
};
void Some_CBF40F_string_(STACK_FRAME String result, Some_CBF40F this);
void Some_CBF40F_cprint(Some_CBF40F this, B isOut);

inline B Some_CBF40F__is(STACK_FRAME void* this) {
  return ((Some_CBF40F) this)->type == TSome_CBF40F;
}

inline Some_CBF40F Some_CBF40F__as(STACK_FRAME void *this) {
  if (Some_CBF40F__is(CALLER this)) return (Some_CBF40F) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api].");
  abort();
}

void Some_CBF40F_apply(STACK_FRAME Some_CBF40F this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif