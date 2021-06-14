#ifndef SIREUM_H_org_sireum_Some_2D0976
#define SIREUM_H_org_sireum_Some_2D0976

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]

#define Some_2D0976_value_(this) ((CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &(this)->value)

B Some_2D0976__eq(Some_2D0976 this, Some_2D0976 other);
inline B Some_2D0976__ne(Some_2D0976 this, Some_2D0976 other) {
  return !Some_2D0976__eq(this, other);
};
void Some_2D0976_string_(STACK_FRAME String result, Some_2D0976 this);
void Some_2D0976_cprint(Some_2D0976 this, B isOut);

inline B Some_2D0976__is(STACK_FRAME void* this) {
  return ((Some_2D0976) this)->type == TSome_2D0976;
}

inline Some_2D0976 Some_2D0976__as(STACK_FRAME void *this) {
  if (Some_2D0976__is(CALLER this)) return (Some_2D0976) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api].");
  abort();
}

void Some_2D0976_apply(STACK_FRAME Some_2D0976 this, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif