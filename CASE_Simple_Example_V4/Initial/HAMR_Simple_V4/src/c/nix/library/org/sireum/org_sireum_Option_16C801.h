#ifndef SIREUM_H_org_sireum_Option_16C801
#define SIREUM_H_org_sireum_Option_16C801

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]

#define Option_16C801__eq(this, other) Type__eq(this, other)
#define Option_16C801__ne(this, other) (!Type__eq(this, other))
#define Option_16C801_cprint(this, isOut) Type_cprint(this, isOut)
B Option_16C801__is(STACK_FRAME void *this);
Option_16C801 Option_16C801__as(STACK_FRAME void *this);
inline void Option_16C801_string_(STACK_FRAME String result, Option_16C801 this) {
  Type_string_(CALLER result, this);
}

void Option_16C801_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api result, Option_16C801 this);

#ifdef __cplusplus
}
#endif

#endif