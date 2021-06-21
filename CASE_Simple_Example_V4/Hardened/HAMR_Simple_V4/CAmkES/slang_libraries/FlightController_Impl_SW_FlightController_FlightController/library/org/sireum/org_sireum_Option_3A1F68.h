#ifndef SIREUM_H_org_sireum_Option_3A1F68
#define SIREUM_H_org_sireum_Option_3A1F68

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]

#define Option_3A1F68__eq(this, other) Type__eq(this, other)
#define Option_3A1F68__ne(this, other) (!Type__eq(this, other))
#define Option_3A1F68_cprint(this, isOut) Type_cprint(this, isOut)
B Option_3A1F68__is(STACK_FRAME void *this);
Option_3A1F68 Option_3A1F68__as(STACK_FRAME void *this);
inline void Option_3A1F68_string_(STACK_FRAME String result, Option_3A1F68 this) {
  Type_string_(CALLER result, this);
}

void Option_3A1F68_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api result, Option_3A1F68 this);

#ifdef __cplusplus
}
#endif

#endif