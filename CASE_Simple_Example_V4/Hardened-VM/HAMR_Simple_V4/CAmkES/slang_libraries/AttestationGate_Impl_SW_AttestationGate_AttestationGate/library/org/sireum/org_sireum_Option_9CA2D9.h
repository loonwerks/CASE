#ifndef SIREUM_H_org_sireum_Option_9CA2D9
#define SIREUM_H_org_sireum_Option_9CA2D9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]

#define Option_9CA2D9__eq(this, other) Type__eq(this, other)
#define Option_9CA2D9__ne(this, other) (!Type__eq(this, other))
#define Option_9CA2D9_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9CA2D9__is(STACK_FRAME void *this);
Option_9CA2D9 Option_9CA2D9__as(STACK_FRAME void *this);
inline void Option_9CA2D9_string_(STACK_FRAME String result, Option_9CA2D9 this) {
  Type_string_(CALLER result, this);
}

void Option_9CA2D9_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api result, Option_9CA2D9 this);

#ifdef __cplusplus
}
#endif

#endif