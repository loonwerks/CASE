#ifndef SIREUM_H_org_sireum_None_BE0654
#define SIREUM_H_org_sireum_None_BE0654

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.AttestationGate_Impl_Initialization_Api]


B None_BE0654__eq(None_BE0654 this, None_BE0654 other);
inline B None_BE0654__ne(None_BE0654 this, None_BE0654 other) {
  return !None_BE0654__eq(this, other);
};
void None_BE0654_string_(STACK_FRAME String result, None_BE0654 this);
void None_BE0654_cprint(None_BE0654 this, B isOut);

inline B None_BE0654__is(STACK_FRAME void* this) {
  return ((None_BE0654) this)->type == TNone_BE0654;
}

inline None_BE0654 None_BE0654__as(STACK_FRAME void *this) {
  if (None_BE0654__is(CALLER this)) return (None_BE0654) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.AttestationGate_Impl_Initialization_Api].");
  abort();
}

void None_BE0654_apply(STACK_FRAME None_BE0654 this);

#ifdef __cplusplus
}
#endif

#endif