#ifndef SIREUM_H_org_sireum_None_1E51A3
#define SIREUM_H_org_sireum_None_1E51A3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]


B None_1E51A3__eq(None_1E51A3 this, None_1E51A3 other);
inline B None_1E51A3__ne(None_1E51A3 this, None_1E51A3 other) {
  return !None_1E51A3__eq(this, other);
};
void None_1E51A3_string_(STACK_FRAME String result, None_1E51A3 this);
void None_1E51A3_cprint(None_1E51A3 this, B isOut);

inline B None_1E51A3__is(STACK_FRAME void* this) {
  return ((None_1E51A3) this)->type == TNone_1E51A3;
}

inline None_1E51A3 None_1E51A3__as(STACK_FRAME void *this) {
  if (None_1E51A3__is(CALLER this)) return (None_1E51A3) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api].");
  abort();
}

void None_1E51A3_apply(STACK_FRAME None_1E51A3 this);

#ifdef __cplusplus
}
#endif

#endif