#ifndef SIREUM_H_org_sireum_None_556BC5
#define SIREUM_H_org_sireum_None_556BC5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]


B None_556BC5__eq(None_556BC5 this, None_556BC5 other);
inline B None_556BC5__ne(None_556BC5 this, None_556BC5 other) {
  return !None_556BC5__eq(this, other);
};
void None_556BC5_string_(STACK_FRAME String result, None_556BC5 this);
void None_556BC5_cprint(None_556BC5 this, B isOut);

inline B None_556BC5__is(STACK_FRAME void* this) {
  return ((None_556BC5) this)->type == TNone_556BC5;
}

inline None_556BC5 None_556BC5__as(STACK_FRAME void *this) {
  if (None_556BC5__is(CALLER this)) return (None_556BC5) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api].");
  abort();
}

void None_556BC5_apply(STACK_FRAME None_556BC5 this);

#ifdef __cplusplus
}
#endif

#endif