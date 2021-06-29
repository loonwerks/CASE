#ifndef SIREUM_H_org_sireum_None_6557E1
#define SIREUM_H_org_sireum_None_6557E1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]


B None_6557E1__eq(None_6557E1 this, None_6557E1 other);
inline B None_6557E1__ne(None_6557E1 this, None_6557E1 other) {
  return !None_6557E1__eq(this, other);
};
void None_6557E1_string_(STACK_FRAME String result, None_6557E1 this);
void None_6557E1_cprint(None_6557E1 this, B isOut);

inline B None_6557E1__is(STACK_FRAME void* this) {
  return ((None_6557E1) this)->type == TNone_6557E1;
}

inline None_6557E1 None_6557E1__as(STACK_FRAME void *this) {
  if (None_6557E1__is(CALLER this)) return (None_6557E1) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api].");
  abort();
}

void None_6557E1_apply(STACK_FRAME None_6557E1 this);

#ifdef __cplusplus
}
#endif

#endif