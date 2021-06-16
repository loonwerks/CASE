#ifndef SIREUM_H_org_sireum_None_118401
#define SIREUM_H_org_sireum_None_118401

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.AttestationGate_Impl_Operational_Api]


B None_118401__eq(None_118401 this, None_118401 other);
inline B None_118401__ne(None_118401 this, None_118401 other) {
  return !None_118401__eq(this, other);
};
void None_118401_string_(STACK_FRAME String result, None_118401 this);
void None_118401_cprint(None_118401 this, B isOut);

inline B None_118401__is(STACK_FRAME void* this) {
  return ((None_118401) this)->type == TNone_118401;
}

inline None_118401 None_118401__as(STACK_FRAME void *this) {
  if (None_118401__is(CALLER this)) return (None_118401) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.AttestationGate_Impl_Operational_Api].");
  abort();
}

void None_118401_apply(STACK_FRAME None_118401 this);

#ifdef __cplusplus
}
#endif

#endif