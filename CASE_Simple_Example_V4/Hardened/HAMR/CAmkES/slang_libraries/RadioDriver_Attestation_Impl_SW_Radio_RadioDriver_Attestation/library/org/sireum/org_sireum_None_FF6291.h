#ifndef SIREUM_H_org_sireum_None_FF6291
#define SIREUM_H_org_sireum_None_FF6291

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]


B None_FF6291__eq(None_FF6291 this, None_FF6291 other);
inline B None_FF6291__ne(None_FF6291 this, None_FF6291 other) {
  return !None_FF6291__eq(this, other);
};
void None_FF6291_string_(STACK_FRAME String result, None_FF6291 this);
void None_FF6291_cprint(None_FF6291 this, B isOut);

inline B None_FF6291__is(STACK_FRAME void* this) {
  return ((None_FF6291) this)->type == TNone_FF6291;
}

inline None_FF6291 None_FF6291__as(STACK_FRAME void *this) {
  if (None_FF6291__is(CALLER this)) return (None_FF6291) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api].");
  abort();
}

void None_FF6291_apply(STACK_FRAME None_FF6291 this);

#ifdef __cplusplus
}
#endif

#endif