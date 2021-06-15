#ifndef SIREUM_H_org_sireum_Option_6475FA
#define SIREUM_H_org_sireum_Option_6475FA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.FlightPlanner_Impl_Operational_Api]

#define Option_6475FA__eq(this, other) Type__eq(this, other)
#define Option_6475FA__ne(this, other) (!Type__eq(this, other))
#define Option_6475FA_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6475FA__is(STACK_FRAME void *this);
Option_6475FA Option_6475FA__as(STACK_FRAME void *this);
inline void Option_6475FA_string_(STACK_FRAME String result, Option_6475FA this) {
  Type_string_(CALLER result, this);
}

void Option_6475FA_get_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Operational_Api result, Option_6475FA this);

#ifdef __cplusplus
}
#endif

#endif