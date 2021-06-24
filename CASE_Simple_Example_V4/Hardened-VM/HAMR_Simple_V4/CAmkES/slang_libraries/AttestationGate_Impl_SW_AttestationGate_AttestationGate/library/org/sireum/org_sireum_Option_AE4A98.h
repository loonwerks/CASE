#ifndef SIREUM_H_org_sireum_Option_AE4A98
#define SIREUM_H_org_sireum_Option_AE4A98

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]

#define Option_AE4A98__eq(this, other) Type__eq(this, other)
#define Option_AE4A98__ne(this, other) (!Type__eq(this, other))
#define Option_AE4A98_cprint(this, isOut) Type_cprint(this, isOut)
B Option_AE4A98__is(STACK_FRAME void *this);
Option_AE4A98 Option_AE4A98__as(STACK_FRAME void *this);
inline void Option_AE4A98_string_(STACK_FRAME String result, Option_AE4A98 this) {
  Type_string_(CALLER result, this);
}

void Option_AE4A98_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api result, Option_AE4A98 this);

#ifdef __cplusplus
}
#endif

#endif