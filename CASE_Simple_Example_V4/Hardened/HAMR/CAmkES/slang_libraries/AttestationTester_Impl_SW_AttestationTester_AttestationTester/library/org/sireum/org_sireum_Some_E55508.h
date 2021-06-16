#ifndef SIREUM_H_org_sireum_Some_E55508
#define SIREUM_H_org_sireum_Some_E55508

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.AttestationTester_Impl_Operational_Api]

#define Some_E55508_value_(this) ((HAMR_SW_AttestationTester_Impl_Operational_Api) &(this)->value)

B Some_E55508__eq(Some_E55508 this, Some_E55508 other);
inline B Some_E55508__ne(Some_E55508 this, Some_E55508 other) {
  return !Some_E55508__eq(this, other);
};
void Some_E55508_string_(STACK_FRAME String result, Some_E55508 this);
void Some_E55508_cprint(Some_E55508 this, B isOut);

inline B Some_E55508__is(STACK_FRAME void* this) {
  return ((Some_E55508) this)->type == TSome_E55508;
}

inline Some_E55508 Some_E55508__as(STACK_FRAME void *this) {
  if (Some_E55508__is(CALLER this)) return (Some_E55508) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.AttestationTester_Impl_Operational_Api].");
  abort();
}

void Some_E55508_apply(STACK_FRAME Some_E55508 this, HAMR_SW_AttestationTester_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif