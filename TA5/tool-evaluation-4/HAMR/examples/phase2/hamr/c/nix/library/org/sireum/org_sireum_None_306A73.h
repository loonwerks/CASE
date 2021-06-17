#ifndef SIREUM_H_org_sireum_None_306A73
#define SIREUM_H_org_sireum_None_306A73

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.UxAS_thr_Impl_Initialization_Api]


B None_306A73__eq(None_306A73 this, None_306A73 other);
inline B None_306A73__ne(None_306A73 this, None_306A73 other) {
  return !None_306A73__eq(this, other);
};
void None_306A73_string_(STACK_FRAME String result, None_306A73 this);
void None_306A73_cprint(None_306A73 this, B isOut);

inline B None_306A73__is(STACK_FRAME void* this) {
  return ((None_306A73) this)->type == TNone_306A73;
}

inline None_306A73 None_306A73__as(STACK_FRAME void *this) {
  if (None_306A73__is(CALLER this)) return (None_306A73) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.UxAS_thr_Impl_Initialization_Api].");
  abort();
}

void None_306A73_apply(STACK_FRAME None_306A73 this);

#ifdef __cplusplus
}
#endif

#endif