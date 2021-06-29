#ifndef SIREUM_H_org_sireum_None_29B833
#define SIREUM_H_org_sireum_None_29B833

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]


B None_29B833__eq(None_29B833 this, None_29B833 other);
inline B None_29B833__ne(None_29B833 this, None_29B833 other) {
  return !None_29B833__eq(this, other);
};
void None_29B833_string_(STACK_FRAME String result, None_29B833 this);
void None_29B833_cprint(None_29B833 this, B isOut);

inline B None_29B833__is(STACK_FRAME void* this) {
  return ((None_29B833) this)->type == TNone_29B833;
}

inline None_29B833 None_29B833__as(STACK_FRAME void *this) {
  if (None_29B833__is(CALLER this)) return (None_29B833) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api].");
  abort();
}

void None_29B833_apply(STACK_FRAME None_29B833 this);

#ifdef __cplusplus
}
#endif

#endif