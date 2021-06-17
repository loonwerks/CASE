#ifndef SIREUM_H_org_sireum_Option_AE3831
#define SIREUM_H_org_sireum_Option_AE3831

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.Drivers.UARTDriver_Impl_Operational_Api]

#define Option_AE3831__eq(this, other) Type__eq(this, other)
#define Option_AE3831__ne(this, other) (!Type__eq(this, other))
#define Option_AE3831_cprint(this, isOut) Type_cprint(this, isOut)
B Option_AE3831__is(STACK_FRAME void *this);
Option_AE3831 Option_AE3831__as(STACK_FRAME void *this);
inline void Option_AE3831_string_(STACK_FRAME String result, Option_AE3831 this) {
  Type_string_(CALLER result, this);
}

void Option_AE3831_get_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api result, Option_AE3831 this);

#ifdef __cplusplus
}
#endif

#endif