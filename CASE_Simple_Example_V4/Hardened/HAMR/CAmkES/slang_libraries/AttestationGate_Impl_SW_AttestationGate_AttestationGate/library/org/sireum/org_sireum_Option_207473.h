#ifndef SIREUM_H_org_sireum_Option_207473
#define SIREUM_H_org_sireum_Option_207473

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.AttestationGate_Impl_Initialization_Api]

#define Option_207473__eq(this, other) Type__eq(this, other)
#define Option_207473__ne(this, other) (!Type__eq(this, other))
#define Option_207473_cprint(this, isOut) Type_cprint(this, isOut)
B Option_207473__is(STACK_FRAME void *this);
Option_207473 Option_207473__as(STACK_FRAME void *this);
inline void Option_207473_string_(STACK_FRAME String result, Option_207473 this) {
  Type_string_(CALLER result, this);
}

void Option_207473_get_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api result, Option_207473 this);

#ifdef __cplusplus
}
#endif

#endif