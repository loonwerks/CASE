#ifndef SIREUM_H_org_sireum_Option_869AEE
#define SIREUM_H_org_sireum_Option_869AEE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]

#define Option_869AEE__eq(this, other) Type__eq(this, other)
#define Option_869AEE__ne(this, other) (!Type__eq(this, other))
#define Option_869AEE_cprint(this, isOut) Type_cprint(this, isOut)
B Option_869AEE__is(STACK_FRAME void *this);
Option_869AEE Option_869AEE__as(STACK_FRAME void *this);
inline void Option_869AEE_string_(STACK_FRAME String result, Option_869AEE this) {
  Type_string_(CALLER result, this);
}

void Option_869AEE_get_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api result, Option_869AEE this);

#ifdef __cplusplus
}
#endif

#endif