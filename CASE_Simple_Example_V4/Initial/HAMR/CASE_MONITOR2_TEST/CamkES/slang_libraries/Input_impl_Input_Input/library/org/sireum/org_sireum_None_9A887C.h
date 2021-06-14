#ifndef SIREUM_H_org_sireum_None_9A887C
#define SIREUM_H_org_sireum_None_9A887C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]


B None_9A887C__eq(None_9A887C this, None_9A887C other);
inline B None_9A887C__ne(None_9A887C this, None_9A887C other) {
  return !None_9A887C__eq(this, other);
};
void None_9A887C_string_(STACK_FRAME String result, None_9A887C this);
void None_9A887C_cprint(None_9A887C this, B isOut);

inline B None_9A887C__is(STACK_FRAME void* this) {
  return ((None_9A887C) this)->type == TNone_9A887C;
}

inline None_9A887C None_9A887C__as(STACK_FRAME void *this) {
  if (None_9A887C__is(CALLER this)) return (None_9A887C) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api].");
  abort();
}

void None_9A887C_apply(STACK_FRAME None_9A887C this);

#ifdef __cplusplus
}
#endif

#endif