#ifndef SIREUM_H_org_sireum_Some_3A7E15
#define SIREUM_H_org_sireum_Some_3A7E15

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]

#define Some_3A7E15_value_(this) ((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &(this)->value)

B Some_3A7E15__eq(Some_3A7E15 this, Some_3A7E15 other);
inline B Some_3A7E15__ne(Some_3A7E15 this, Some_3A7E15 other) {
  return !Some_3A7E15__eq(this, other);
};
void Some_3A7E15_string_(STACK_FRAME String result, Some_3A7E15 this);
void Some_3A7E15_cprint(Some_3A7E15 this, B isOut);

inline B Some_3A7E15__is(STACK_FRAME void* this) {
  return ((Some_3A7E15) this)->type == TSome_3A7E15;
}

inline Some_3A7E15 Some_3A7E15__as(STACK_FRAME void *this) {
  if (Some_3A7E15__is(CALLER this)) return (Some_3A7E15) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api].");
  abort();
}

void Some_3A7E15_apply(STACK_FRAME Some_3A7E15 this, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif