#ifndef SIREUM_H_org_sireum_None_3790E6
#define SIREUM_H_org_sireum_None_3790E6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]


B None_3790E6__eq(None_3790E6 this, None_3790E6 other);
inline B None_3790E6__ne(None_3790E6 this, None_3790E6 other) {
  return !None_3790E6__eq(this, other);
};
void None_3790E6_string_(STACK_FRAME String result, None_3790E6 this);
void None_3790E6_cprint(None_3790E6 this, B isOut);

inline B None_3790E6__is(STACK_FRAME void* this) {
  return ((None_3790E6) this)->type == TNone_3790E6;
}

inline None_3790E6 None_3790E6__as(STACK_FRAME void *this) {
  if (None_3790E6__is(CALLER this)) return (None_3790E6) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api].");
  abort();
}

void None_3790E6_apply(STACK_FRAME None_3790E6 this);

#ifdef __cplusplus
}
#endif

#endif