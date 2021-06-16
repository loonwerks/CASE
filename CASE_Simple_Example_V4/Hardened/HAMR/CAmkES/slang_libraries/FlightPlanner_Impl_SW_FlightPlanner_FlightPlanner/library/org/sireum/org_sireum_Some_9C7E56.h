#ifndef SIREUM_H_org_sireum_Some_9C7E56
#define SIREUM_H_org_sireum_Some_9C7E56

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

#define Some_9C7E56_value_(this) ((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &(this)->value)

B Some_9C7E56__eq(Some_9C7E56 this, Some_9C7E56 other);
inline B Some_9C7E56__ne(Some_9C7E56 this, Some_9C7E56 other) {
  return !Some_9C7E56__eq(this, other);
};
void Some_9C7E56_string_(STACK_FRAME String result, Some_9C7E56 this);
void Some_9C7E56_cprint(Some_9C7E56 this, B isOut);

inline B Some_9C7E56__is(STACK_FRAME void* this) {
  return ((Some_9C7E56) this)->type == TSome_9C7E56;
}

inline Some_9C7E56 Some_9C7E56__as(STACK_FRAME void *this) {
  if (Some_9C7E56__is(CALLER this)) return (Some_9C7E56) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.FlightPlanner_Impl_Initialization_Api].");
  abort();
}

void Some_9C7E56_apply(STACK_FRAME Some_9C7E56 this, HAMR_SW_FlightPlanner_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif