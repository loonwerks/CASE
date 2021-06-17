#ifndef SIREUM_H_org_sireum_None_844F3C
#define SIREUM_H_org_sireum_None_844F3C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]


B None_844F3C__eq(None_844F3C this, None_844F3C other);
inline B None_844F3C__ne(None_844F3C this, None_844F3C other) {
  return !None_844F3C__eq(this, other);
};
void None_844F3C_string_(STACK_FRAME String result, None_844F3C this);
void None_844F3C_cprint(None_844F3C this, B isOut);

inline B None_844F3C__is(STACK_FRAME void* this) {
  return ((None_844F3C) this)->type == TNone_844F3C;
}

inline None_844F3C None_844F3C__as(STACK_FRAME void *this) {
  if (None_844F3C__is(CALLER this)) return (None_844F3C) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api].");
  abort();
}

void None_844F3C_apply(STACK_FRAME None_844F3C this);

#ifdef __cplusplus
}
#endif

#endif