#ifndef SIREUM_H_org_sireum_None_2A8B4A
#define SIREUM_H_org_sireum_None_2A8B4A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.Monitor_Impl_Initialization_Api]


B None_2A8B4A__eq(None_2A8B4A this, None_2A8B4A other);
inline B None_2A8B4A__ne(None_2A8B4A this, None_2A8B4A other) {
  return !None_2A8B4A__eq(this, other);
};
void None_2A8B4A_string_(STACK_FRAME String result, None_2A8B4A this);
void None_2A8B4A_cprint(None_2A8B4A this, B isOut);

inline B None_2A8B4A__is(STACK_FRAME void* this) {
  return ((None_2A8B4A) this)->type == TNone_2A8B4A;
}

inline None_2A8B4A None_2A8B4A__as(STACK_FRAME void *this) {
  if (None_2A8B4A__is(CALLER this)) return (None_2A8B4A) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.Monitor_Impl_Initialization_Api].");
  abort();
}

void None_2A8B4A_apply(STACK_FRAME None_2A8B4A this);

#ifdef __cplusplus
}
#endif

#endif