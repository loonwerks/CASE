#ifndef SIREUM_H_org_sireum_Some_9535B2
#define SIREUM_H_org_sireum_Some_9535B2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.FlightController_Impl_Operational_Api]

#define Some_9535B2_value_(this) ((HAMR_SW_FlightController_Impl_Operational_Api) &(this)->value)

B Some_9535B2__eq(Some_9535B2 this, Some_9535B2 other);
inline B Some_9535B2__ne(Some_9535B2 this, Some_9535B2 other) {
  return !Some_9535B2__eq(this, other);
};
void Some_9535B2_string_(STACK_FRAME String result, Some_9535B2 this);
void Some_9535B2_cprint(Some_9535B2 this, B isOut);

inline B Some_9535B2__is(STACK_FRAME void* this) {
  return ((Some_9535B2) this)->type == TSome_9535B2;
}

inline Some_9535B2 Some_9535B2__as(STACK_FRAME void *this) {
  if (Some_9535B2__is(CALLER this)) return (Some_9535B2) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.FlightController_Impl_Operational_Api].");
  abort();
}

void Some_9535B2_apply(STACK_FRAME Some_9535B2 this, HAMR_SW_FlightController_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif