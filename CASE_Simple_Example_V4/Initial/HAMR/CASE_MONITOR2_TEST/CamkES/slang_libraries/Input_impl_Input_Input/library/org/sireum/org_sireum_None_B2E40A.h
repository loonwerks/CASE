#ifndef SIREUM_H_org_sireum_None_B2E40A
#define SIREUM_H_org_sireum_None_B2E40A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]


B None_B2E40A__eq(None_B2E40A this, None_B2E40A other);
inline B None_B2E40A__ne(None_B2E40A this, None_B2E40A other) {
  return !None_B2E40A__eq(this, other);
};
void None_B2E40A_string_(STACK_FRAME String result, None_B2E40A this);
void None_B2E40A_cprint(None_B2E40A this, B isOut);

inline B None_B2E40A__is(STACK_FRAME void* this) {
  return ((None_B2E40A) this)->type == TNone_B2E40A;
}

inline None_B2E40A None_B2E40A__as(STACK_FRAME void *this) {
  if (None_B2E40A__is(CALLER this)) return (None_B2E40A) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api].");
  abort();
}

void None_B2E40A_apply(STACK_FRAME None_B2E40A this);

#ifdef __cplusplus
}
#endif

#endif