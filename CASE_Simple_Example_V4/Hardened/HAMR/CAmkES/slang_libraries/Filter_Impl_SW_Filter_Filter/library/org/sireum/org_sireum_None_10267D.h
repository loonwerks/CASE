#ifndef SIREUM_H_org_sireum_None_10267D
#define SIREUM_H_org_sireum_None_10267D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.Filter_Impl_Operational_Api]


B None_10267D__eq(None_10267D this, None_10267D other);
inline B None_10267D__ne(None_10267D this, None_10267D other) {
  return !None_10267D__eq(this, other);
};
void None_10267D_string_(STACK_FRAME String result, None_10267D this);
void None_10267D_cprint(None_10267D this, B isOut);

inline B None_10267D__is(STACK_FRAME void* this) {
  return ((None_10267D) this)->type == TNone_10267D;
}

inline None_10267D None_10267D__as(STACK_FRAME void *this) {
  if (None_10267D__is(CALLER this)) return (None_10267D) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.Filter_Impl_Operational_Api].");
  abort();
}

void None_10267D_apply(STACK_FRAME None_10267D this);

#ifdef __cplusplus
}
#endif

#endif