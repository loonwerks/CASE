#ifndef SIREUM_H_org_sireum_None_B594B8
#define SIREUM_H_org_sireum_None_B594B8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]


B None_B594B8__eq(None_B594B8 this, None_B594B8 other);
inline B None_B594B8__ne(None_B594B8 this, None_B594B8 other) {
  return !None_B594B8__eq(this, other);
};
void None_B594B8_string_(STACK_FRAME String result, None_B594B8 this);
void None_B594B8_cprint(None_B594B8 this, B isOut);

inline B None_B594B8__is(STACK_FRAME void* this) {
  return ((None_B594B8) this)->type == TNone_B594B8;
}

inline None_B594B8 None_B594B8__as(STACK_FRAME void *this) {
  if (None_B594B8__is(CALLER this)) return (None_B594B8) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api].");
  abort();
}

void None_B594B8_apply(STACK_FRAME None_B594B8 this);

#ifdef __cplusplus
}
#endif

#endif