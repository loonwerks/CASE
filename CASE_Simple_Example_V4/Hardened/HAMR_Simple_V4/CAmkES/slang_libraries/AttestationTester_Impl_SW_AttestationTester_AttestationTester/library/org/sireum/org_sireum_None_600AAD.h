#ifndef SIREUM_H_org_sireum_None_600AAD
#define SIREUM_H_org_sireum_None_600AAD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]


B None_600AAD__eq(None_600AAD this, None_600AAD other);
inline B None_600AAD__ne(None_600AAD this, None_600AAD other) {
  return !None_600AAD__eq(this, other);
};
void None_600AAD_string_(STACK_FRAME String result, None_600AAD this);
void None_600AAD_cprint(None_600AAD this, B isOut);

inline B None_600AAD__is(STACK_FRAME void* this) {
  return ((None_600AAD) this)->type == TNone_600AAD;
}

inline None_600AAD None_600AAD__as(STACK_FRAME void *this) {
  if (None_600AAD__is(CALLER this)) return (None_600AAD) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api].");
  abort();
}

void None_600AAD_apply(STACK_FRAME None_600AAD this);

#ifdef __cplusplus
}
#endif

#endif