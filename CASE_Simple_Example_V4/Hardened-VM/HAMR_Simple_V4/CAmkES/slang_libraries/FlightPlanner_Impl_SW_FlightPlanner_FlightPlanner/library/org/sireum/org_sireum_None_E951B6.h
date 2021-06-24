#ifndef SIREUM_H_org_sireum_None_E951B6
#define SIREUM_H_org_sireum_None_E951B6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]


B None_E951B6__eq(None_E951B6 this, None_E951B6 other);
inline B None_E951B6__ne(None_E951B6 this, None_E951B6 other) {
  return !None_E951B6__eq(this, other);
};
void None_E951B6_string_(STACK_FRAME String result, None_E951B6 this);
void None_E951B6_cprint(None_E951B6 this, B isOut);

inline B None_E951B6__is(STACK_FRAME void* this) {
  return ((None_E951B6) this)->type == TNone_E951B6;
}

inline None_E951B6 None_E951B6__as(STACK_FRAME void *this) {
  if (None_E951B6__is(CALLER this)) return (None_E951B6) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api].");
  abort();
}

void None_E951B6_apply(STACK_FRAME None_E951B6 this);

#ifdef __cplusplus
}
#endif

#endif