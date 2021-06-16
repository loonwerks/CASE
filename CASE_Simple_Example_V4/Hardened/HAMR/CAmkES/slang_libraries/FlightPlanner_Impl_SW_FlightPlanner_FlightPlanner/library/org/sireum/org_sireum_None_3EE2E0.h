#ifndef SIREUM_H_org_sireum_None_3EE2E0
#define SIREUM_H_org_sireum_None_3EE2E0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.FlightPlanner_Impl_Operational_Api]


B None_3EE2E0__eq(None_3EE2E0 this, None_3EE2E0 other);
inline B None_3EE2E0__ne(None_3EE2E0 this, None_3EE2E0 other) {
  return !None_3EE2E0__eq(this, other);
};
void None_3EE2E0_string_(STACK_FRAME String result, None_3EE2E0 this);
void None_3EE2E0_cprint(None_3EE2E0 this, B isOut);

inline B None_3EE2E0__is(STACK_FRAME void* this) {
  return ((None_3EE2E0) this)->type == TNone_3EE2E0;
}

inline None_3EE2E0 None_3EE2E0__as(STACK_FRAME void *this) {
  if (None_3EE2E0__is(CALLER this)) return (None_3EE2E0) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.FlightPlanner_Impl_Operational_Api].");
  abort();
}

void None_3EE2E0_apply(STACK_FRAME None_3EE2E0 this);

#ifdef __cplusplus
}
#endif

#endif