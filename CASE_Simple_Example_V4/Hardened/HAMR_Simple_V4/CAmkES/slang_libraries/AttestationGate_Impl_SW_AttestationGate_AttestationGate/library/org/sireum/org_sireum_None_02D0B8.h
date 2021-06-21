#ifndef SIREUM_H_org_sireum_None_02D0B8
#define SIREUM_H_org_sireum_None_02D0B8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]


B None_02D0B8__eq(None_02D0B8 this, None_02D0B8 other);
inline B None_02D0B8__ne(None_02D0B8 this, None_02D0B8 other) {
  return !None_02D0B8__eq(this, other);
};
void None_02D0B8_string_(STACK_FRAME String result, None_02D0B8 this);
void None_02D0B8_cprint(None_02D0B8 this, B isOut);

inline B None_02D0B8__is(STACK_FRAME void* this) {
  return ((None_02D0B8) this)->type == TNone_02D0B8;
}

inline None_02D0B8 None_02D0B8__as(STACK_FRAME void *this) {
  if (None_02D0B8__is(CALLER this)) return (None_02D0B8) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api].");
  abort();
}

void None_02D0B8_apply(STACK_FRAME None_02D0B8 this);

#ifdef __cplusplus
}
#endif

#endif