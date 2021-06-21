#ifndef SIREUM_H_org_sireum_None_BCB2D2
#define SIREUM_H_org_sireum_None_BCB2D2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]


B None_BCB2D2__eq(None_BCB2D2 this, None_BCB2D2 other);
inline B None_BCB2D2__ne(None_BCB2D2 this, None_BCB2D2 other) {
  return !None_BCB2D2__eq(this, other);
};
void None_BCB2D2_string_(STACK_FRAME String result, None_BCB2D2 this);
void None_BCB2D2_cprint(None_BCB2D2 this, B isOut);

inline B None_BCB2D2__is(STACK_FRAME void* this) {
  return ((None_BCB2D2) this)->type == TNone_BCB2D2;
}

inline None_BCB2D2 None_BCB2D2__as(STACK_FRAME void *this) {
  if (None_BCB2D2__is(CALLER this)) return (None_BCB2D2) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api].");
  abort();
}

void None_BCB2D2_apply(STACK_FRAME None_BCB2D2 this);

#ifdef __cplusplus
}
#endif

#endif