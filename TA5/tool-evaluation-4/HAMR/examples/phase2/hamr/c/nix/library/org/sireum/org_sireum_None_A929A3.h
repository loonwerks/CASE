#ifndef SIREUM_H_org_sireum_None_A929A3
#define SIREUM_H_org_sireum_None_A929A3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.Drivers.UARTDriver_Impl_Operational_Api]


B None_A929A3__eq(None_A929A3 this, None_A929A3 other);
inline B None_A929A3__ne(None_A929A3 this, None_A929A3 other) {
  return !None_A929A3__eq(this, other);
};
void None_A929A3_string_(STACK_FRAME String result, None_A929A3 this);
void None_A929A3_cprint(None_A929A3 this, B isOut);

inline B None_A929A3__is(STACK_FRAME void* this) {
  return ((None_A929A3) this)->type == TNone_A929A3;
}

inline None_A929A3 None_A929A3__as(STACK_FRAME void *this) {
  if (None_A929A3__is(CALLER this)) return (None_A929A3) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.Drivers.UARTDriver_Impl_Operational_Api].");
  abort();
}

void None_A929A3_apply(STACK_FRAME None_A929A3 this);

#ifdef __cplusplus
}
#endif

#endif