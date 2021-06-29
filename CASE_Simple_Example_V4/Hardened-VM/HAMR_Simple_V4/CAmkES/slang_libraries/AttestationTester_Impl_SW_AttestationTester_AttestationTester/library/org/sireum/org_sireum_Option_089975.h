#ifndef SIREUM_H_org_sireum_Option_089975
#define SIREUM_H_org_sireum_Option_089975

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]

#define Option_089975__eq(this, other) Type__eq(this, other)
#define Option_089975__ne(this, other) (!Type__eq(this, other))
#define Option_089975_cprint(this, isOut) Type_cprint(this, isOut)
B Option_089975__is(STACK_FRAME void *this);
Option_089975 Option_089975__as(STACK_FRAME void *this);
inline void Option_089975_string_(STACK_FRAME String result, Option_089975 this) {
  Type_string_(CALLER result, this);
}

void Option_089975_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api result, Option_089975 this);

#ifdef __cplusplus
}
#endif

#endif