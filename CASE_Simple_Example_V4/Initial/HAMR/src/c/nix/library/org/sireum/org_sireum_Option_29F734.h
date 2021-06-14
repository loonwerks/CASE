#ifndef SIREUM_H_org_sireum_Option_29F734
#define SIREUM_H_org_sireum_Option_29F734

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]

#define Option_29F734__eq(this, other) Type__eq(this, other)
#define Option_29F734__ne(this, other) (!Type__eq(this, other))
#define Option_29F734_cprint(this, isOut) Type_cprint(this, isOut)
B Option_29F734__is(STACK_FRAME void *this);
Option_29F734 Option_29F734__as(STACK_FRAME void *this);
inline void Option_29F734_string_(STACK_FRAME String result, Option_29F734 this) {
  Type_string_(CALLER result, this);
}

void Option_29F734_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api result, Option_29F734 this);

#ifdef __cplusplus
}
#endif

#endif