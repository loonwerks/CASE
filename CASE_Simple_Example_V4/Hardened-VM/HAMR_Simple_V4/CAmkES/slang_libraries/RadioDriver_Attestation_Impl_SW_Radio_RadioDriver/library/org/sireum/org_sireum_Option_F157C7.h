#ifndef SIREUM_H_org_sireum_Option_F157C7
#define SIREUM_H_org_sireum_Option_F157C7

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]

#define Option_F157C7__eq(this, other) Type__eq(this, other)
#define Option_F157C7__ne(this, other) (!Type__eq(this, other))
#define Option_F157C7_cprint(this, isOut) Type_cprint(this, isOut)
B Option_F157C7__is(STACK_FRAME void *this);
Option_F157C7 Option_F157C7__as(STACK_FRAME void *this);
inline void Option_F157C7_string_(STACK_FRAME String result, Option_F157C7 this) {
  Type_string_(CALLER result, this);
}

void Option_F157C7_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api result, Option_F157C7 this);

#ifdef __cplusplus
}
#endif

#endif