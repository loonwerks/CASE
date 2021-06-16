#ifndef SIREUM_H_org_sireum_Option_4EC416
#define SIREUM_H_org_sireum_Option_4EC416

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]

#define Option_4EC416__eq(this, other) Type__eq(this, other)
#define Option_4EC416__ne(this, other) (!Type__eq(this, other))
#define Option_4EC416_cprint(this, isOut) Type_cprint(this, isOut)
B Option_4EC416__is(STACK_FRAME void *this);
Option_4EC416 Option_4EC416__as(STACK_FRAME void *this);
inline void Option_4EC416_string_(STACK_FRAME String result, Option_4EC416 this) {
  Type_string_(CALLER result, this);
}

void Option_4EC416_get_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api result, Option_4EC416 this);

#ifdef __cplusplus
}
#endif

#endif