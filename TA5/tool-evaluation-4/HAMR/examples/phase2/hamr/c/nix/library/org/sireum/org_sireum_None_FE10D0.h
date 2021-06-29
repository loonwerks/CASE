#ifndef SIREUM_H_org_sireum_None_FE10D0
#define SIREUM_H_org_sireum_None_FE10D0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]


B None_FE10D0__eq(None_FE10D0 this, None_FE10D0 other);
inline B None_FE10D0__ne(None_FE10D0 this, None_FE10D0 other) {
  return !None_FE10D0__eq(this, other);
};
void None_FE10D0_string_(STACK_FRAME String result, None_FE10D0 this);
void None_FE10D0_cprint(None_FE10D0 this, B isOut);

inline B None_FE10D0__is(STACK_FRAME void* this) {
  return ((None_FE10D0) this)->type == TNone_FE10D0;
}

inline None_FE10D0 None_FE10D0__as(STACK_FRAME void *this) {
  if (None_FE10D0__is(CALLER this)) return (None_FE10D0) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api].");
  abort();
}

void None_FE10D0_apply(STACK_FRAME None_FE10D0 this);

#ifdef __cplusplus
}
#endif

#endif