#ifndef SIREUM_H_org_sireum_None_D81833
#define SIREUM_H_org_sireum_None_D81833

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]


B None_D81833__eq(None_D81833 this, None_D81833 other);
inline B None_D81833__ne(None_D81833 this, None_D81833 other) {
  return !None_D81833__eq(this, other);
};
void None_D81833_string_(STACK_FRAME String result, None_D81833 this);
void None_D81833_cprint(None_D81833 this, B isOut);

inline B None_D81833__is(STACK_FRAME void* this) {
  return ((None_D81833) this)->type == TNone_D81833;
}

inline None_D81833 None_D81833__as(STACK_FRAME void *this) {
  if (None_D81833__is(CALLER this)) return (None_D81833) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api].");
  abort();
}

void None_D81833_apply(STACK_FRAME None_D81833 this);

#ifdef __cplusplus
}
#endif

#endif