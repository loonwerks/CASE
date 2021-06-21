#ifndef SIREUM_H_org_sireum_Option_6F9BAD
#define SIREUM_H_org_sireum_Option_6F9BAD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]

#define Option_6F9BAD__eq(this, other) Type__eq(this, other)
#define Option_6F9BAD__ne(this, other) (!Type__eq(this, other))
#define Option_6F9BAD_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6F9BAD__is(STACK_FRAME void *this);
Option_6F9BAD Option_6F9BAD__as(STACK_FRAME void *this);
inline void Option_6F9BAD_string_(STACK_FRAME String result, Option_6F9BAD this) {
  Type_string_(CALLER result, this);
}

void Option_6F9BAD_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api result, Option_6F9BAD this);

#ifdef __cplusplus
}
#endif

#endif