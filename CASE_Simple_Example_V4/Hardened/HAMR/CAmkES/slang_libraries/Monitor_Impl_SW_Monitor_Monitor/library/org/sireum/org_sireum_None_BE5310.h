#ifndef SIREUM_H_org_sireum_None_BE5310
#define SIREUM_H_org_sireum_None_BE5310

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.Monitor_Impl_Operational_Api]


B None_BE5310__eq(None_BE5310 this, None_BE5310 other);
inline B None_BE5310__ne(None_BE5310 this, None_BE5310 other) {
  return !None_BE5310__eq(this, other);
};
void None_BE5310_string_(STACK_FRAME String result, None_BE5310 this);
void None_BE5310_cprint(None_BE5310 this, B isOut);

inline B None_BE5310__is(STACK_FRAME void* this) {
  return ((None_BE5310) this)->type == TNone_BE5310;
}

inline None_BE5310 None_BE5310__as(STACK_FRAME void *this) {
  if (None_BE5310__is(CALLER this)) return (None_BE5310) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.Monitor_Impl_Operational_Api].");
  abort();
}

void None_BE5310_apply(STACK_FRAME None_BE5310 this);

#ifdef __cplusplus
}
#endif

#endif