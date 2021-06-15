#ifndef SIREUM_H_org_sireum_Option_6DC5D7
#define SIREUM_H_org_sireum_Option_6DC5D7

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.Filter_Impl_Operational_Api]

#define Option_6DC5D7__eq(this, other) Type__eq(this, other)
#define Option_6DC5D7__ne(this, other) (!Type__eq(this, other))
#define Option_6DC5D7_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6DC5D7__is(STACK_FRAME void *this);
Option_6DC5D7 Option_6DC5D7__as(STACK_FRAME void *this);
inline void Option_6DC5D7_string_(STACK_FRAME String result, Option_6DC5D7 this) {
  Type_string_(CALLER result, this);
}

void Option_6DC5D7_get_(STACK_FRAME HAMR_SW_Filter_Impl_Operational_Api result, Option_6DC5D7 this);

#ifdef __cplusplus
}
#endif

#endif