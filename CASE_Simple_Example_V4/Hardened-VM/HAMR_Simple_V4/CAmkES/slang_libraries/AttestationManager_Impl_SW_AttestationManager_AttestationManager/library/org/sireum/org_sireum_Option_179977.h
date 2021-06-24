#ifndef SIREUM_H_org_sireum_Option_179977
#define SIREUM_H_org_sireum_Option_179977

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]

#define Option_179977__eq(this, other) Type__eq(this, other)
#define Option_179977__ne(this, other) (!Type__eq(this, other))
#define Option_179977_cprint(this, isOut) Type_cprint(this, isOut)
B Option_179977__is(STACK_FRAME void *this);
Option_179977 Option_179977__as(STACK_FRAME void *this);
inline void Option_179977_string_(STACK_FRAME String result, Option_179977 this) {
  Type_string_(CALLER result, this);
}

void Option_179977_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api result, Option_179977 this);

#ifdef __cplusplus
}
#endif

#endif