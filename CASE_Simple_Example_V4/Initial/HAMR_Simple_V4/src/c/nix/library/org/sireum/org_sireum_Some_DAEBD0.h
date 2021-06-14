#ifndef SIREUM_H_org_sireum_Some_DAEBD0
#define SIREUM_H_org_sireum_Some_DAEBD0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]

#define Some_DAEBD0_value_(this) ((HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) &(this)->value)

B Some_DAEBD0__eq(Some_DAEBD0 this, Some_DAEBD0 other);
inline B Some_DAEBD0__ne(Some_DAEBD0 this, Some_DAEBD0 other) {
  return !Some_DAEBD0__eq(this, other);
};
void Some_DAEBD0_string_(STACK_FRAME String result, Some_DAEBD0 this);
void Some_DAEBD0_cprint(Some_DAEBD0 this, B isOut);

inline B Some_DAEBD0__is(STACK_FRAME void* this) {
  return ((Some_DAEBD0) this)->type == TSome_DAEBD0;
}

inline Some_DAEBD0 Some_DAEBD0__as(STACK_FRAME void *this) {
  if (Some_DAEBD0__is(CALLER this)) return (Some_DAEBD0) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api].");
  abort();
}

void Some_DAEBD0_apply(STACK_FRAME Some_DAEBD0 this, HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif