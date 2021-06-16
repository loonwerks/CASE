#ifndef SIREUM_H_org_sireum_Option_A0CA6B
#define SIREUM_H_org_sireum_Option_A0CA6B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

#define Option_A0CA6B__eq(this, other) Type__eq(this, other)
#define Option_A0CA6B__ne(this, other) (!Type__eq(this, other))
#define Option_A0CA6B_cprint(this, isOut) Type_cprint(this, isOut)
B Option_A0CA6B__is(STACK_FRAME void *this);
Option_A0CA6B Option_A0CA6B__as(STACK_FRAME void *this);
inline void Option_A0CA6B_string_(STACK_FRAME String result, Option_A0CA6B this) {
  Type_string_(CALLER result, this);
}

void Option_A0CA6B_get_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Initialization_Api result, Option_A0CA6B this);

#ifdef __cplusplus
}
#endif

#endif