#ifndef SIREUM_H_org_sireum_None_3F37D3
#define SIREUM_H_org_sireum_None_3F37D3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]


B None_3F37D3__eq(None_3F37D3 this, None_3F37D3 other);
inline B None_3F37D3__ne(None_3F37D3 this, None_3F37D3 other) {
  return !None_3F37D3__eq(this, other);
};
void None_3F37D3_string_(STACK_FRAME String result, None_3F37D3 this);
void None_3F37D3_cprint(None_3F37D3 this, B isOut);

inline B None_3F37D3__is(STACK_FRAME void* this) {
  return ((None_3F37D3) this)->type == TNone_3F37D3;
}

inline None_3F37D3 None_3F37D3__as(STACK_FRAME void *this) {
  if (None_3F37D3__is(CALLER this)) return (None_3F37D3) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api].");
  abort();
}

void None_3F37D3_apply(STACK_FRAME None_3F37D3 this);

#ifdef __cplusplus
}
#endif

#endif