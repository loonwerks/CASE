#ifndef SIREUM_H_org_sireum_None_C84E72
#define SIREUM_H_org_sireum_None_C84E72

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]


B None_C84E72__eq(None_C84E72 this, None_C84E72 other);
inline B None_C84E72__ne(None_C84E72 this, None_C84E72 other) {
  return !None_C84E72__eq(this, other);
};
void None_C84E72_string_(STACK_FRAME String result, None_C84E72 this);
void None_C84E72_cprint(None_C84E72 this, B isOut);

inline B None_C84E72__is(STACK_FRAME void* this) {
  return ((None_C84E72) this)->type == TNone_C84E72;
}

inline None_C84E72 None_C84E72__as(STACK_FRAME void *this) {
  if (None_C84E72__is(CALLER this)) return (None_C84E72) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api].");
  abort();
}

void None_C84E72_apply(STACK_FRAME None_C84E72 this);

#ifdef __cplusplus
}
#endif

#endif