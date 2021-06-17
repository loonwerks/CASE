#ifndef SIREUM_H_org_sireum_Option_B4EF66
#define SIREUM_H_org_sireum_Option_B4EF66

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]

#define Option_B4EF66__eq(this, other) Type__eq(this, other)
#define Option_B4EF66__ne(this, other) (!Type__eq(this, other))
#define Option_B4EF66_cprint(this, isOut) Type_cprint(this, isOut)
B Option_B4EF66__is(STACK_FRAME void *this);
Option_B4EF66 Option_B4EF66__as(STACK_FRAME void *this);
inline void Option_B4EF66_string_(STACK_FRAME String result, Option_B4EF66 this) {
  Type_string_(CALLER result, this);
}

void Option_B4EF66_get_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api result, Option_B4EF66 this);

#ifdef __cplusplus
}
#endif

#endif