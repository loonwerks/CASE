#ifndef SIREUM_H_org_sireum_Some_B4F3A8
#define SIREUM_H_org_sireum_Some_B4F3A8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]

#define Some_B4F3A8_value_(this) ((HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) &(this)->value)

B Some_B4F3A8__eq(Some_B4F3A8 this, Some_B4F3A8 other);
inline B Some_B4F3A8__ne(Some_B4F3A8 this, Some_B4F3A8 other) {
  return !Some_B4F3A8__eq(this, other);
};
void Some_B4F3A8_string_(STACK_FRAME String result, Some_B4F3A8 this);
void Some_B4F3A8_cprint(Some_B4F3A8 this, B isOut);

inline B Some_B4F3A8__is(STACK_FRAME void* this) {
  return ((Some_B4F3A8) this)->type == TSome_B4F3A8;
}

inline Some_B4F3A8 Some_B4F3A8__as(STACK_FRAME void *this) {
  if (Some_B4F3A8__is(CALLER this)) return (Some_B4F3A8) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api].");
  abort();
}

void Some_B4F3A8_apply(STACK_FRAME Some_B4F3A8 this, HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif