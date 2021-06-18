#ifndef SIREUM_H_org_sireum_Some_D48312
#define SIREUM_H_org_sireum_Some_D48312

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]

#define Some_D48312_value_(this) ((hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &(this)->value)

B Some_D48312__eq(Some_D48312 this, Some_D48312 other);
inline B Some_D48312__ne(Some_D48312 this, Some_D48312 other) {
  return !Some_D48312__eq(this, other);
};
void Some_D48312_string_(STACK_FRAME String result, Some_D48312 this);
void Some_D48312_cprint(Some_D48312 this, B isOut);

inline B Some_D48312__is(STACK_FRAME void* this) {
  return ((Some_D48312) this)->type == TSome_D48312;
}

inline Some_D48312 Some_D48312__as(STACK_FRAME void *this) {
  if (Some_D48312__is(CALLER this)) return (Some_D48312) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api].");
  abort();
}

void Some_D48312_apply(STACK_FRAME Some_D48312 this, hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif