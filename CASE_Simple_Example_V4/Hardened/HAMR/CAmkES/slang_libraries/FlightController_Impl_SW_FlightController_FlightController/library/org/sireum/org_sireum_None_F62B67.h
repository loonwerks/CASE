#ifndef SIREUM_H_org_sireum_None_F62B67
#define SIREUM_H_org_sireum_None_F62B67

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.FlightController_Impl_Operational_Api]


B None_F62B67__eq(None_F62B67 this, None_F62B67 other);
inline B None_F62B67__ne(None_F62B67 this, None_F62B67 other) {
  return !None_F62B67__eq(this, other);
};
void None_F62B67_string_(STACK_FRAME String result, None_F62B67 this);
void None_F62B67_cprint(None_F62B67 this, B isOut);

inline B None_F62B67__is(STACK_FRAME void* this) {
  return ((None_F62B67) this)->type == TNone_F62B67;
}

inline None_F62B67 None_F62B67__as(STACK_FRAME void *this) {
  if (None_F62B67__is(CALLER this)) return (None_F62B67) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.FlightController_Impl_Operational_Api].");
  abort();
}

void None_F62B67_apply(STACK_FRAME None_F62B67 this);

#ifdef __cplusplus
}
#endif

#endif