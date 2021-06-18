#ifndef SIREUM_H_org_sireum_Option_E8930C
#define SIREUM_H_org_sireum_Option_E8930C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]

#define Option_E8930C__eq(this, other) Type__eq(this, other)
#define Option_E8930C__ne(this, other) (!Type__eq(this, other))
#define Option_E8930C_cprint(this, isOut) Type_cprint(this, isOut)
B Option_E8930C__is(STACK_FRAME void *this);
Option_E8930C Option_E8930C__as(STACK_FRAME void *this);
inline void Option_E8930C_string_(STACK_FRAME String result, Option_E8930C this) {
  Type_string_(CALLER result, this);
}

void Option_E8930C_get_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api result, Option_E8930C this);

#ifdef __cplusplus
}
#endif

#endif