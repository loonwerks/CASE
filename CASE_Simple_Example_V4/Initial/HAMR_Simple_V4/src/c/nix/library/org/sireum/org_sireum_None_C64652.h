#ifndef SIREUM_H_org_sireum_None_C64652
#define SIREUM_H_org_sireum_None_C64652

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]


B None_C64652__eq(None_C64652 this, None_C64652 other);
inline B None_C64652__ne(None_C64652 this, None_C64652 other) {
  return !None_C64652__eq(this, other);
};
void None_C64652_string_(STACK_FRAME String result, None_C64652 this);
void None_C64652_cprint(None_C64652 this, B isOut);

inline B None_C64652__is(STACK_FRAME void* this) {
  return ((None_C64652) this)->type == TNone_C64652;
}

inline None_C64652 None_C64652__as(STACK_FRAME void *this) {
  if (None_C64652__is(CALLER this)) return (None_C64652) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api].");
  abort();
}

void None_C64652_apply(STACK_FRAME None_C64652 this);

#ifdef __cplusplus
}
#endif

#endif