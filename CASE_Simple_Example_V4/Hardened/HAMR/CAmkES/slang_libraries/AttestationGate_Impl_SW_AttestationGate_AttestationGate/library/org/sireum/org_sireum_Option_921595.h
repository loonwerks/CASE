#ifndef SIREUM_H_org_sireum_Option_921595
#define SIREUM_H_org_sireum_Option_921595

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.AttestationGate_Impl_Operational_Api]

#define Option_921595__eq(this, other) Type__eq(this, other)
#define Option_921595__ne(this, other) (!Type__eq(this, other))
#define Option_921595_cprint(this, isOut) Type_cprint(this, isOut)
B Option_921595__is(STACK_FRAME void *this);
Option_921595 Option_921595__as(STACK_FRAME void *this);
inline void Option_921595_string_(STACK_FRAME String result, Option_921595 this) {
  Type_string_(CALLER result, this);
}

void Option_921595_get_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Operational_Api result, Option_921595 this);

#ifdef __cplusplus
}
#endif

#endif