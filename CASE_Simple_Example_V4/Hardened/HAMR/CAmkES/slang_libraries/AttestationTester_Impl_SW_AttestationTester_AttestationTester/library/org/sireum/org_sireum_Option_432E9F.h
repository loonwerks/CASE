#ifndef SIREUM_H_org_sireum_Option_432E9F
#define SIREUM_H_org_sireum_Option_432E9F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]

#define Option_432E9F__eq(this, other) Type__eq(this, other)
#define Option_432E9F__ne(this, other) (!Type__eq(this, other))
#define Option_432E9F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_432E9F__is(STACK_FRAME void *this);
Option_432E9F Option_432E9F__as(STACK_FRAME void *this);
inline void Option_432E9F_string_(STACK_FRAME String result, Option_432E9F this) {
  Type_string_(CALLER result, this);
}

void Option_432E9F_get_(STACK_FRAME HAMR_SW_AttestationTester_Impl_Initialization_Api result, Option_432E9F this);

#ifdef __cplusplus
}
#endif

#endif