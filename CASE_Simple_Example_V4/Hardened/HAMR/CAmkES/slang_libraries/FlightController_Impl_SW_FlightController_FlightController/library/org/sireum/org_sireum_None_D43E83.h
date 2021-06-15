#ifndef SIREUM_H_org_sireum_None_D43E83
#define SIREUM_H_org_sireum_None_D43E83

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.FlightController_Impl_Initialization_Api]


B None_D43E83__eq(None_D43E83 this, None_D43E83 other);
inline B None_D43E83__ne(None_D43E83 this, None_D43E83 other) {
  return !None_D43E83__eq(this, other);
};
void None_D43E83_string_(STACK_FRAME String result, None_D43E83 this);
void None_D43E83_cprint(None_D43E83 this, B isOut);

inline B None_D43E83__is(STACK_FRAME void* this) {
  return ((None_D43E83) this)->type == TNone_D43E83;
}

inline None_D43E83 None_D43E83__as(STACK_FRAME void *this) {
  if (None_D43E83__is(CALLER this)) return (None_D43E83) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.FlightController_Impl_Initialization_Api].");
  abort();
}

void None_D43E83_apply(STACK_FRAME None_D43E83 this);

#ifdef __cplusplus
}
#endif

#endif