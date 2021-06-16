#ifndef SIREUM_H_org_sireum_Option_96FA67
#define SIREUM_H_org_sireum_Option_96FA67

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]

#define Option_96FA67__eq(this, other) Type__eq(this, other)
#define Option_96FA67__ne(this, other) (!Type__eq(this, other))
#define Option_96FA67_cprint(this, isOut) Type_cprint(this, isOut)
B Option_96FA67__is(STACK_FRAME void *this);
Option_96FA67 Option_96FA67__as(STACK_FRAME void *this);
inline void Option_96FA67_string_(STACK_FRAME String result, Option_96FA67 this) {
  Type_string_(CALLER result, this);
}

void Option_96FA67_get_(STACK_FRAME HAMR_SW_AttestationManager_Impl_Initialization_Api result, Option_96FA67 this);

#ifdef __cplusplus
}
#endif

#endif