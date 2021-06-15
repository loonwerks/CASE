#ifndef SIREUM_H_org_sireum_Some_EB994A
#define SIREUM_H_org_sireum_Some_EB994A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.FlightPlanner_Impl_Operational_Api]

#define Some_EB994A_value_(this) ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &(this)->value)

B Some_EB994A__eq(Some_EB994A this, Some_EB994A other);
inline B Some_EB994A__ne(Some_EB994A this, Some_EB994A other) {
  return !Some_EB994A__eq(this, other);
};
void Some_EB994A_string_(STACK_FRAME String result, Some_EB994A this);
void Some_EB994A_cprint(Some_EB994A this, B isOut);

inline B Some_EB994A__is(STACK_FRAME void* this) {
  return ((Some_EB994A) this)->type == TSome_EB994A;
}

inline Some_EB994A Some_EB994A__as(STACK_FRAME void *this) {
  if (Some_EB994A__is(CALLER this)) return (Some_EB994A) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.FlightPlanner_Impl_Operational_Api].");
  abort();
}

void Some_EB994A_apply(STACK_FRAME Some_EB994A this, HAMR_SW_FlightPlanner_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif