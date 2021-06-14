#ifndef SIREUM_H_org_sireum_Some_0FF3DD
#define SIREUM_H_org_sireum_Some_0FF3DD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]

#define Some_0FF3DD_value_(this) ((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &(this)->value)

B Some_0FF3DD__eq(Some_0FF3DD this, Some_0FF3DD other);
inline B Some_0FF3DD__ne(Some_0FF3DD this, Some_0FF3DD other) {
  return !Some_0FF3DD__eq(this, other);
};
void Some_0FF3DD_string_(STACK_FRAME String result, Some_0FF3DD this);
void Some_0FF3DD_cprint(Some_0FF3DD this, B isOut);

inline B Some_0FF3DD__is(STACK_FRAME void* this) {
  return ((Some_0FF3DD) this)->type == TSome_0FF3DD;
}

inline Some_0FF3DD Some_0FF3DD__as(STACK_FRAME void *this) {
  if (Some_0FF3DD__is(CALLER this)) return (Some_0FF3DD) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api].");
  abort();
}

void Some_0FF3DD_apply(STACK_FRAME Some_0FF3DD this, HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif