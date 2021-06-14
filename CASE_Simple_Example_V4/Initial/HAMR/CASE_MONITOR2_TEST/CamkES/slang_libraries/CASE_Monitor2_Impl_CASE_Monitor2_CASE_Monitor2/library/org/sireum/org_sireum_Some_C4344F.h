#ifndef SIREUM_H_org_sireum_Some_C4344F
#define SIREUM_H_org_sireum_Some_C4344F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]

#define Some_C4344F_value_(this) ((CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) &(this)->value)

B Some_C4344F__eq(Some_C4344F this, Some_C4344F other);
inline B Some_C4344F__ne(Some_C4344F this, Some_C4344F other) {
  return !Some_C4344F__eq(this, other);
};
void Some_C4344F_string_(STACK_FRAME String result, Some_C4344F this);
void Some_C4344F_cprint(Some_C4344F this, B isOut);

inline B Some_C4344F__is(STACK_FRAME void* this) {
  return ((Some_C4344F) this)->type == TSome_C4344F;
}

inline Some_C4344F Some_C4344F__as(STACK_FRAME void *this) {
  if (Some_C4344F__is(CALLER this)) return (Some_C4344F) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api].");
  abort();
}

void Some_C4344F_apply(STACK_FRAME Some_C4344F this, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif