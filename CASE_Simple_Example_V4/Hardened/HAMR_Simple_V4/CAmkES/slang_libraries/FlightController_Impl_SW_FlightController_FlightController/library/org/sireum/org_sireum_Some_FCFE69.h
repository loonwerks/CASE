#ifndef SIREUM_H_org_sireum_Some_FCFE69
#define SIREUM_H_org_sireum_Some_FCFE69

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]

#define Some_FCFE69_value_(this) ((HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &(this)->value)

B Some_FCFE69__eq(Some_FCFE69 this, Some_FCFE69 other);
inline B Some_FCFE69__ne(Some_FCFE69 this, Some_FCFE69 other) {
  return !Some_FCFE69__eq(this, other);
};
void Some_FCFE69_string_(STACK_FRAME String result, Some_FCFE69 this);
void Some_FCFE69_cprint(Some_FCFE69 this, B isOut);

inline B Some_FCFE69__is(STACK_FRAME void* this) {
  return ((Some_FCFE69) this)->type == TSome_FCFE69;
}

inline Some_FCFE69 Some_FCFE69__as(STACK_FRAME void *this) {
  if (Some_FCFE69__is(CALLER this)) return (Some_FCFE69) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api].");
  abort();
}

void Some_FCFE69_apply(STACK_FRAME Some_FCFE69 this, HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif