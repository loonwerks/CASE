#ifndef SIREUM_H_org_sireum_None_E08F39
#define SIREUM_H_org_sireum_None_E08F39

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.AttestationManager_Impl_Initialization_Api]


B None_E08F39__eq(None_E08F39 this, None_E08F39 other);
inline B None_E08F39__ne(None_E08F39 this, None_E08F39 other) {
  return !None_E08F39__eq(this, other);
};
void None_E08F39_string_(STACK_FRAME String result, None_E08F39 this);
void None_E08F39_cprint(None_E08F39 this, B isOut);

inline B None_E08F39__is(STACK_FRAME void* this) {
  return ((None_E08F39) this)->type == TNone_E08F39;
}

inline None_E08F39 None_E08F39__as(STACK_FRAME void *this) {
  if (None_E08F39__is(CALLER this)) return (None_E08F39) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.AttestationManager_Impl_Initialization_Api].");
  abort();
}

void None_E08F39_apply(STACK_FRAME None_E08F39 this);

#ifdef __cplusplus
}
#endif

#endif