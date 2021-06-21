#ifndef SIREUM_H_org_sireum_None_830D4E
#define SIREUM_H_org_sireum_None_830D4E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]


B None_830D4E__eq(None_830D4E this, None_830D4E other);
inline B None_830D4E__ne(None_830D4E this, None_830D4E other) {
  return !None_830D4E__eq(this, other);
};
void None_830D4E_string_(STACK_FRAME String result, None_830D4E this);
void None_830D4E_cprint(None_830D4E this, B isOut);

inline B None_830D4E__is(STACK_FRAME void* this) {
  return ((None_830D4E) this)->type == TNone_830D4E;
}

inline None_830D4E None_830D4E__as(STACK_FRAME void *this) {
  if (None_830D4E__is(CALLER this)) return (None_830D4E) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api].");
  abort();
}

void None_830D4E_apply(STACK_FRAME None_830D4E this);

#ifdef __cplusplus
}
#endif

#endif