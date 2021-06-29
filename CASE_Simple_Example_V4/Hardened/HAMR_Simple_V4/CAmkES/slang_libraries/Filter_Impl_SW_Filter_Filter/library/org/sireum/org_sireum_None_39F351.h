#ifndef SIREUM_H_org_sireum_None_39F351
#define SIREUM_H_org_sireum_None_39F351

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]


B None_39F351__eq(None_39F351 this, None_39F351 other);
inline B None_39F351__ne(None_39F351 this, None_39F351 other) {
  return !None_39F351__eq(this, other);
};
void None_39F351_string_(STACK_FRAME String result, None_39F351 this);
void None_39F351_cprint(None_39F351 this, B isOut);

inline B None_39F351__is(STACK_FRAME void* this) {
  return ((None_39F351) this)->type == TNone_39F351;
}

inline None_39F351 None_39F351__as(STACK_FRAME void *this) {
  if (None_39F351__is(CALLER this)) return (None_39F351) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api].");
  abort();
}

void None_39F351_apply(STACK_FRAME None_39F351 this);

#ifdef __cplusplus
}
#endif

#endif