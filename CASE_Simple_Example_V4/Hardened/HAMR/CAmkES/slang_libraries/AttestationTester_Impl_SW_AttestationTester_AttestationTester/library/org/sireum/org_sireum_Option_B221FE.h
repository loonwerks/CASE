#ifndef SIREUM_H_org_sireum_Option_B221FE
#define SIREUM_H_org_sireum_Option_B221FE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.AttestationTester_Impl_Operational_Api]

#define Option_B221FE__eq(this, other) Type__eq(this, other)
#define Option_B221FE__ne(this, other) (!Type__eq(this, other))
#define Option_B221FE_cprint(this, isOut) Type_cprint(this, isOut)
B Option_B221FE__is(STACK_FRAME void *this);
Option_B221FE Option_B221FE__as(STACK_FRAME void *this);
inline void Option_B221FE_string_(STACK_FRAME String result, Option_B221FE this) {
  Type_string_(CALLER result, this);
}

void Option_B221FE_get_(STACK_FRAME HAMR_SW_AttestationTester_Impl_Operational_Api result, Option_B221FE this);

#ifdef __cplusplus
}
#endif

#endif