#ifndef SIREUM_H_org_sireum_None_32B473
#define SIREUM_H_org_sireum_None_32B473

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]


B None_32B473__eq(None_32B473 this, None_32B473 other);
inline B None_32B473__ne(None_32B473 this, None_32B473 other) {
  return !None_32B473__eq(this, other);
};
void None_32B473_string_(STACK_FRAME String result, None_32B473 this);
void None_32B473_cprint(None_32B473 this, B isOut);

inline B None_32B473__is(STACK_FRAME void* this) {
  return ((None_32B473) this)->type == TNone_32B473;
}

inline None_32B473 None_32B473__as(STACK_FRAME void *this) {
  if (None_32B473__is(CALLER this)) return (None_32B473) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api].");
  abort();
}

void None_32B473_apply(STACK_FRAME None_32B473 this);

#ifdef __cplusplus
}
#endif

#endif