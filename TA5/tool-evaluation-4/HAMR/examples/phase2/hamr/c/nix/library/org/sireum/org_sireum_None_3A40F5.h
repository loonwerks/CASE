#ifndef SIREUM_H_org_sireum_None_3A40F5
#define SIREUM_H_org_sireum_None_3A40F5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]


B None_3A40F5__eq(None_3A40F5 this, None_3A40F5 other);
inline B None_3A40F5__ne(None_3A40F5 this, None_3A40F5 other) {
  return !None_3A40F5__eq(this, other);
};
void None_3A40F5_string_(STACK_FRAME String result, None_3A40F5 this);
void None_3A40F5_cprint(None_3A40F5 this, B isOut);

inline B None_3A40F5__is(STACK_FRAME void* this) {
  return ((None_3A40F5) this)->type == TNone_3A40F5;
}

inline None_3A40F5 None_3A40F5__as(STACK_FRAME void *this) {
  if (None_3A40F5__is(CALLER this)) return (None_3A40F5) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api].");
  abort();
}

void None_3A40F5_apply(STACK_FRAME None_3A40F5 this);

#ifdef __cplusplus
}
#endif

#endif