#ifndef SIREUM_H_org_sireum_Option_642C2E
#define SIREUM_H_org_sireum_Option_642C2E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.FlightController_Impl_Operational_Api]

#define Option_642C2E__eq(this, other) Type__eq(this, other)
#define Option_642C2E__ne(this, other) (!Type__eq(this, other))
#define Option_642C2E_cprint(this, isOut) Type_cprint(this, isOut)
B Option_642C2E__is(STACK_FRAME void *this);
Option_642C2E Option_642C2E__as(STACK_FRAME void *this);
inline void Option_642C2E_string_(STACK_FRAME String result, Option_642C2E this) {
  Type_string_(CALLER result, this);
}

void Option_642C2E_get_(STACK_FRAME HAMR_SW_FlightController_Impl_Operational_Api result, Option_642C2E this);

#ifdef __cplusplus
}
#endif

#endif