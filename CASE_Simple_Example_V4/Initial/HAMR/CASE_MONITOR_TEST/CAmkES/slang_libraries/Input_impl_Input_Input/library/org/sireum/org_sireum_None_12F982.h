#ifndef SIREUM_H_org_sireum_None_12F982
#define SIREUM_H_org_sireum_None_12F982

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]


B None_12F982__eq(None_12F982 this, None_12F982 other);
inline B None_12F982__ne(None_12F982 this, None_12F982 other) {
  return !None_12F982__eq(this, other);
};
void None_12F982_string_(STACK_FRAME String result, None_12F982 this);
void None_12F982_cprint(None_12F982 this, B isOut);

inline B None_12F982__is(STACK_FRAME void* this) {
  return ((None_12F982) this)->type == TNone_12F982;
}

inline None_12F982 None_12F982__as(STACK_FRAME void *this) {
  if (None_12F982__is(CALLER this)) return (None_12F982) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api].");
  abort();
}

void None_12F982_apply(STACK_FRAME None_12F982 this);

#ifdef __cplusplus
}
#endif

#endif