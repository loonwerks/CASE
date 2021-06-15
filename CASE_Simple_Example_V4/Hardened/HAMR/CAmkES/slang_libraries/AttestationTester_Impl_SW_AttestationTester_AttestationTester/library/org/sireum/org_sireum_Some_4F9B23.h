#ifndef SIREUM_H_org_sireum_Some_4F9B23
#define SIREUM_H_org_sireum_Some_4F9B23

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.AttestationTester_Impl_Initialization_Api]

#define Some_4F9B23_value_(this) ((HAMR_SW_AttestationTester_Impl_Initialization_Api) &(this)->value)

B Some_4F9B23__eq(Some_4F9B23 this, Some_4F9B23 other);
inline B Some_4F9B23__ne(Some_4F9B23 this, Some_4F9B23 other) {
  return !Some_4F9B23__eq(this, other);
};
void Some_4F9B23_string_(STACK_FRAME String result, Some_4F9B23 this);
void Some_4F9B23_cprint(Some_4F9B23 this, B isOut);

inline B Some_4F9B23__is(STACK_FRAME void* this) {
  return ((Some_4F9B23) this)->type == TSome_4F9B23;
}

inline Some_4F9B23 Some_4F9B23__as(STACK_FRAME void *this) {
  if (Some_4F9B23__is(CALLER this)) return (Some_4F9B23) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.AttestationTester_Impl_Initialization_Api].");
  abort();
}

void Some_4F9B23_apply(STACK_FRAME Some_4F9B23 this, HAMR_SW_AttestationTester_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif