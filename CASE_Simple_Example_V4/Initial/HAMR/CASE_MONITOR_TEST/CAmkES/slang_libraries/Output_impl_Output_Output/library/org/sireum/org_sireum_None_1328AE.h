#ifndef SIREUM_H_org_sireum_None_1328AE
#define SIREUM_H_org_sireum_None_1328AE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]


B None_1328AE__eq(None_1328AE this, None_1328AE other);
inline B None_1328AE__ne(None_1328AE this, None_1328AE other) {
  return !None_1328AE__eq(this, other);
};
void None_1328AE_string_(STACK_FRAME String result, None_1328AE this);
void None_1328AE_cprint(None_1328AE this, B isOut);

inline B None_1328AE__is(STACK_FRAME void* this) {
  return ((None_1328AE) this)->type == TNone_1328AE;
}

inline None_1328AE None_1328AE__as(STACK_FRAME void *this) {
  if (None_1328AE__is(CALLER this)) return (None_1328AE) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api].");
  abort();
}

void None_1328AE_apply(STACK_FRAME None_1328AE this);

#ifdef __cplusplus
}
#endif

#endif