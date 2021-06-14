#ifndef SIREUM_H_org_sireum_None_67F530
#define SIREUM_H_org_sireum_None_67F530

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]


B None_67F530__eq(None_67F530 this, None_67F530 other);
inline B None_67F530__ne(None_67F530 this, None_67F530 other) {
  return !None_67F530__eq(this, other);
};
void None_67F530_string_(STACK_FRAME String result, None_67F530 this);
void None_67F530_cprint(None_67F530 this, B isOut);

inline B None_67F530__is(STACK_FRAME void* this) {
  return ((None_67F530) this)->type == TNone_67F530;
}

inline None_67F530 None_67F530__as(STACK_FRAME void *this) {
  if (None_67F530__is(CALLER this)) return (None_67F530) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api].");
  abort();
}

void None_67F530_apply(STACK_FRAME None_67F530 this);

#ifdef __cplusplus
}
#endif

#endif