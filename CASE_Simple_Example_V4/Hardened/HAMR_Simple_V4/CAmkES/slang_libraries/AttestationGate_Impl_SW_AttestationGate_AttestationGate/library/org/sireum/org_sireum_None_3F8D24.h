#ifndef SIREUM_H_org_sireum_None_3F8D24
#define SIREUM_H_org_sireum_None_3F8D24

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]


B None_3F8D24__eq(None_3F8D24 this, None_3F8D24 other);
inline B None_3F8D24__ne(None_3F8D24 this, None_3F8D24 other) {
  return !None_3F8D24__eq(this, other);
};
void None_3F8D24_string_(STACK_FRAME String result, None_3F8D24 this);
void None_3F8D24_cprint(None_3F8D24 this, B isOut);

inline B None_3F8D24__is(STACK_FRAME void* this) {
  return ((None_3F8D24) this)->type == TNone_3F8D24;
}

inline None_3F8D24 None_3F8D24__as(STACK_FRAME void *this) {
  if (None_3F8D24__is(CALLER this)) return (None_3F8D24) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api].");
  abort();
}

void None_3F8D24_apply(STACK_FRAME None_3F8D24 this);

#ifdef __cplusplus
}
#endif

#endif