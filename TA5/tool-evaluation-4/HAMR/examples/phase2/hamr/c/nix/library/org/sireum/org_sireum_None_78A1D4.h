#ifndef SIREUM_H_org_sireum_None_78A1D4
#define SIREUM_H_org_sireum_None_78A1D4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]


B None_78A1D4__eq(None_78A1D4 this, None_78A1D4 other);
inline B None_78A1D4__ne(None_78A1D4 this, None_78A1D4 other) {
  return !None_78A1D4__eq(this, other);
};
void None_78A1D4_string_(STACK_FRAME String result, None_78A1D4 this);
void None_78A1D4_cprint(None_78A1D4 this, B isOut);

inline B None_78A1D4__is(STACK_FRAME void* this) {
  return ((None_78A1D4) this)->type == TNone_78A1D4;
}

inline None_78A1D4 None_78A1D4__as(STACK_FRAME void *this) {
  if (None_78A1D4__is(CALLER this)) return (None_78A1D4) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api].");
  abort();
}

void None_78A1D4_apply(STACK_FRAME None_78A1D4 this);

#ifdef __cplusplus
}
#endif

#endif