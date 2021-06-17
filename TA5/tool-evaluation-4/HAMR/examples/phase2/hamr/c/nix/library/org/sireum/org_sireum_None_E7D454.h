#ifndef SIREUM_H_org_sireum_None_E7D454
#define SIREUM_H_org_sireum_None_E7D454

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.Drivers.UARTDriver_Impl_Initialization_Api]


B None_E7D454__eq(None_E7D454 this, None_E7D454 other);
inline B None_E7D454__ne(None_E7D454 this, None_E7D454 other) {
  return !None_E7D454__eq(this, other);
};
void None_E7D454_string_(STACK_FRAME String result, None_E7D454 this);
void None_E7D454_cprint(None_E7D454 this, B isOut);

inline B None_E7D454__is(STACK_FRAME void* this) {
  return ((None_E7D454) this)->type == TNone_E7D454;
}

inline None_E7D454 None_E7D454__as(STACK_FRAME void *this) {
  if (None_E7D454__is(CALLER this)) return (None_E7D454) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.Drivers.UARTDriver_Impl_Initialization_Api].");
  abort();
}

void None_E7D454_apply(STACK_FRAME None_E7D454 this);

#ifdef __cplusplus
}
#endif

#endif