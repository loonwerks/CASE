#ifndef SIREUM_H_org_sireum_None_43D596
#define SIREUM_H_org_sireum_None_43D596

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]


B None_43D596__eq(None_43D596 this, None_43D596 other);
inline B None_43D596__ne(None_43D596 this, None_43D596 other) {
  return !None_43D596__eq(this, other);
};
void None_43D596_string_(STACK_FRAME String result, None_43D596 this);
void None_43D596_cprint(None_43D596 this, B isOut);

inline B None_43D596__is(STACK_FRAME void* this) {
  return ((None_43D596) this)->type == TNone_43D596;
}

inline None_43D596 None_43D596__as(STACK_FRAME void *this) {
  if (None_43D596__is(CALLER this)) return (None_43D596) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api].");
  abort();
}

void None_43D596_apply(STACK_FRAME None_43D596 this);

#ifdef __cplusplus
}
#endif

#endif