#ifndef SIREUM_H_org_sireum_Some_8753F1
#define SIREUM_H_org_sireum_Some_8753F1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.AttestationGate_Impl_Operational_Api]

#define Some_8753F1_value_(this) ((HAMR_SW_AttestationGate_Impl_Operational_Api) &(this)->value)

B Some_8753F1__eq(Some_8753F1 this, Some_8753F1 other);
inline B Some_8753F1__ne(Some_8753F1 this, Some_8753F1 other) {
  return !Some_8753F1__eq(this, other);
};
void Some_8753F1_string_(STACK_FRAME String result, Some_8753F1 this);
void Some_8753F1_cprint(Some_8753F1 this, B isOut);

inline B Some_8753F1__is(STACK_FRAME void* this) {
  return ((Some_8753F1) this)->type == TSome_8753F1;
}

inline Some_8753F1 Some_8753F1__as(STACK_FRAME void *this) {
  if (Some_8753F1__is(CALLER this)) return (Some_8753F1) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.AttestationGate_Impl_Operational_Api].");
  abort();
}

void Some_8753F1_apply(STACK_FRAME Some_8753F1 this, HAMR_SW_AttestationGate_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif