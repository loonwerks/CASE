#ifndef SIREUM_H_org_sireum_Option_7A3D33
#define SIREUM_H_org_sireum_Option_7A3D33

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.FlightController_Impl_Initialization_Api]

#define Option_7A3D33__eq(this, other) Type__eq(this, other)
#define Option_7A3D33__ne(this, other) (!Type__eq(this, other))
#define Option_7A3D33_cprint(this, isOut) Type_cprint(this, isOut)
B Option_7A3D33__is(STACK_FRAME void *this);
Option_7A3D33 Option_7A3D33__as(STACK_FRAME void *this);
inline void Option_7A3D33_string_(STACK_FRAME String result, Option_7A3D33 this) {
  Type_string_(CALLER result, this);
}

void Option_7A3D33_get_(STACK_FRAME HAMR_SW_FlightController_Impl_Initialization_Api result, Option_7A3D33 this);

#ifdef __cplusplus
}
#endif

#endif