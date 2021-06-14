#ifndef SIREUM_H_org_sireum_None_04B2B5
#define SIREUM_H_org_sireum_None_04B2B5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]


B None_04B2B5__eq(None_04B2B5 this, None_04B2B5 other);
inline B None_04B2B5__ne(None_04B2B5 this, None_04B2B5 other) {
  return !None_04B2B5__eq(this, other);
};
void None_04B2B5_string_(STACK_FRAME String result, None_04B2B5 this);
void None_04B2B5_cprint(None_04B2B5 this, B isOut);

inline B None_04B2B5__is(STACK_FRAME void* this) {
  return ((None_04B2B5) this)->type == TNone_04B2B5;
}

inline None_04B2B5 None_04B2B5__as(STACK_FRAME void *this) {
  if (None_04B2B5__is(CALLER this)) return (None_04B2B5) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api].");
  abort();
}

void None_04B2B5_apply(STACK_FRAME None_04B2B5 this);

#ifdef __cplusplus
}
#endif

#endif