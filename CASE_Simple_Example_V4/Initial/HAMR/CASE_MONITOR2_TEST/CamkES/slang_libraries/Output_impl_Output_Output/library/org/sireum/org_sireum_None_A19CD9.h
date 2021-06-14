#ifndef SIREUM_H_org_sireum_None_A19CD9
#define SIREUM_H_org_sireum_None_A19CD9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]


B None_A19CD9__eq(None_A19CD9 this, None_A19CD9 other);
inline B None_A19CD9__ne(None_A19CD9 this, None_A19CD9 other) {
  return !None_A19CD9__eq(this, other);
};
void None_A19CD9_string_(STACK_FRAME String result, None_A19CD9 this);
void None_A19CD9_cprint(None_A19CD9 this, B isOut);

inline B None_A19CD9__is(STACK_FRAME void* this) {
  return ((None_A19CD9) this)->type == TNone_A19CD9;
}

inline None_A19CD9 None_A19CD9__as(STACK_FRAME void *this) {
  if (None_A19CD9__is(CALLER this)) return (None_A19CD9) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api].");
  abort();
}

void None_A19CD9_apply(STACK_FRAME None_A19CD9 this);

#ifdef __cplusplus
}
#endif

#endif