#ifndef SIREUM_H_org_sireum_None_69DE14
#define SIREUM_H_org_sireum_None_69DE14

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]


B None_69DE14__eq(None_69DE14 this, None_69DE14 other);
inline B None_69DE14__ne(None_69DE14 this, None_69DE14 other) {
  return !None_69DE14__eq(this, other);
};
void None_69DE14_string_(STACK_FRAME String result, None_69DE14 this);
void None_69DE14_cprint(None_69DE14 this, B isOut);

inline B None_69DE14__is(STACK_FRAME void* this) {
  return ((None_69DE14) this)->type == TNone_69DE14;
}

inline None_69DE14 None_69DE14__as(STACK_FRAME void *this) {
  if (None_69DE14__is(CALLER this)) return (None_69DE14) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api].");
  abort();
}

void None_69DE14_apply(STACK_FRAME None_69DE14 this);

#ifdef __cplusplus
}
#endif

#endif