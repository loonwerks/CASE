#ifndef SIREUM_H_org_sireum_Option_8A9C20
#define SIREUM_H_org_sireum_Option_8A9C20

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]

#define Option_8A9C20__eq(this, other) Type__eq(this, other)
#define Option_8A9C20__ne(this, other) (!Type__eq(this, other))
#define Option_8A9C20_cprint(this, isOut) Type_cprint(this, isOut)
B Option_8A9C20__is(STACK_FRAME void *this);
Option_8A9C20 Option_8A9C20__as(STACK_FRAME void *this);
inline void Option_8A9C20_string_(STACK_FRAME String result, Option_8A9C20 this) {
  Type_string_(CALLER result, this);
}

void Option_8A9C20_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api result, Option_8A9C20 this);

#ifdef __cplusplus
}
#endif

#endif