#ifndef SIREUM_H_org_sireum_None_E227E5
#define SIREUM_H_org_sireum_None_E227E5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.Filter_Impl_Initialization_Api]


B None_E227E5__eq(None_E227E5 this, None_E227E5 other);
inline B None_E227E5__ne(None_E227E5 this, None_E227E5 other) {
  return !None_E227E5__eq(this, other);
};
void None_E227E5_string_(STACK_FRAME String result, None_E227E5 this);
void None_E227E5_cprint(None_E227E5 this, B isOut);

inline B None_E227E5__is(STACK_FRAME void* this) {
  return ((None_E227E5) this)->type == TNone_E227E5;
}

inline None_E227E5 None_E227E5__as(STACK_FRAME void *this) {
  if (None_E227E5__is(CALLER this)) return (None_E227E5) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.Filter_Impl_Initialization_Api].");
  abort();
}

void None_E227E5_apply(STACK_FRAME None_E227E5 this);

#ifdef __cplusplus
}
#endif

#endif