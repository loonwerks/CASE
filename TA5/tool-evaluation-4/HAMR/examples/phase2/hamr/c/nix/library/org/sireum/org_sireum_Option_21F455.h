#ifndef SIREUM_H_org_sireum_Option_21F455
#define SIREUM_H_org_sireum_Option_21F455

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]

#define Option_21F455__eq(this, other) Type__eq(this, other)
#define Option_21F455__ne(this, other) (!Type__eq(this, other))
#define Option_21F455_cprint(this, isOut) Type_cprint(this, isOut)
B Option_21F455__is(STACK_FRAME void *this);
Option_21F455 Option_21F455__as(STACK_FRAME void *this);
inline void Option_21F455_string_(STACK_FRAME String result, Option_21F455 this) {
  Type_string_(CALLER result, this);
}

void Option_21F455_get_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api result, Option_21F455 this);

#ifdef __cplusplus
}
#endif

#endif