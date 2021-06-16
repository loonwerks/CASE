#ifndef SIREUM_H_org_sireum_Some_E082A6
#define SIREUM_H_org_sireum_Some_E082A6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.FlightController_Impl_Initialization_Api]

#define Some_E082A6_value_(this) ((HAMR_SW_FlightController_Impl_Initialization_Api) &(this)->value)

B Some_E082A6__eq(Some_E082A6 this, Some_E082A6 other);
inline B Some_E082A6__ne(Some_E082A6 this, Some_E082A6 other) {
  return !Some_E082A6__eq(this, other);
};
void Some_E082A6_string_(STACK_FRAME String result, Some_E082A6 this);
void Some_E082A6_cprint(Some_E082A6 this, B isOut);

inline B Some_E082A6__is(STACK_FRAME void* this) {
  return ((Some_E082A6) this)->type == TSome_E082A6;
}

inline Some_E082A6 Some_E082A6__as(STACK_FRAME void *this) {
  if (Some_E082A6__is(CALLER this)) return (Some_E082A6) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.FlightController_Impl_Initialization_Api].");
  abort();
}

void Some_E082A6_apply(STACK_FRAME Some_E082A6 this, HAMR_SW_FlightController_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif