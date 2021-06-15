#ifndef SIREUM_H_org_sireum_Option_E8C05C
#define SIREUM_H_org_sireum_Option_E8C05C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.Monitor_Impl_Operational_Api]

#define Option_E8C05C__eq(this, other) Type__eq(this, other)
#define Option_E8C05C__ne(this, other) (!Type__eq(this, other))
#define Option_E8C05C_cprint(this, isOut) Type_cprint(this, isOut)
B Option_E8C05C__is(STACK_FRAME void *this);
Option_E8C05C Option_E8C05C__as(STACK_FRAME void *this);
inline void Option_E8C05C_string_(STACK_FRAME String result, Option_E8C05C this) {
  Type_string_(CALLER result, this);
}

void Option_E8C05C_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api result, Option_E8C05C this);

#ifdef __cplusplus
}
#endif

#endif