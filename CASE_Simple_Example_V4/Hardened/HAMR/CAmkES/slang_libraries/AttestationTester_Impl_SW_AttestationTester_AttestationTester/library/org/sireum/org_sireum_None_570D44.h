#ifndef SIREUM_H_org_sireum_None_570D44
#define SIREUM_H_org_sireum_None_570D44

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.AttestationTester_Impl_Initialization_Api]


B None_570D44__eq(None_570D44 this, None_570D44 other);
inline B None_570D44__ne(None_570D44 this, None_570D44 other) {
  return !None_570D44__eq(this, other);
};
void None_570D44_string_(STACK_FRAME String result, None_570D44 this);
void None_570D44_cprint(None_570D44 this, B isOut);

inline B None_570D44__is(STACK_FRAME void* this) {
  return ((None_570D44) this)->type == TNone_570D44;
}

inline None_570D44 None_570D44__as(STACK_FRAME void *this) {
  if (None_570D44__is(CALLER this)) return (None_570D44) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.AttestationTester_Impl_Initialization_Api].");
  abort();
}

void None_570D44_apply(STACK_FRAME None_570D44 this);

#ifdef __cplusplus
}
#endif

#endif