#ifndef SIREUM_H_org_sireum_Some_2C70A4
#define SIREUM_H_org_sireum_Some_2C70A4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]

#define Some_2C70A4_value_(this) ((CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) &(this)->value)

B Some_2C70A4__eq(Some_2C70A4 this, Some_2C70A4 other);
inline B Some_2C70A4__ne(Some_2C70A4 this, Some_2C70A4 other) {
  return !Some_2C70A4__eq(this, other);
};
void Some_2C70A4_string_(STACK_FRAME String result, Some_2C70A4 this);
void Some_2C70A4_cprint(Some_2C70A4 this, B isOut);

inline B Some_2C70A4__is(STACK_FRAME void* this) {
  return ((Some_2C70A4) this)->type == TSome_2C70A4;
}

inline Some_2C70A4 Some_2C70A4__as(STACK_FRAME void *this) {
  if (Some_2C70A4__is(CALLER this)) return (Some_2C70A4) this;
  sfAbortImpl(CALLER "Invalid cast to Some[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api].");
  abort();
}

void Some_2C70A4_apply(STACK_FRAME Some_2C70A4 this, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif