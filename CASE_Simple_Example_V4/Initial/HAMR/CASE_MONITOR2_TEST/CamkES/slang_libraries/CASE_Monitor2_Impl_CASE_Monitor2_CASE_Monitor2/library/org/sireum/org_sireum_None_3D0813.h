#ifndef SIREUM_H_org_sireum_None_3D0813
#define SIREUM_H_org_sireum_None_3D0813

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]


B None_3D0813__eq(None_3D0813 this, None_3D0813 other);
inline B None_3D0813__ne(None_3D0813 this, None_3D0813 other) {
  return !None_3D0813__eq(this, other);
};
void None_3D0813_string_(STACK_FRAME String result, None_3D0813 this);
void None_3D0813_cprint(None_3D0813 this, B isOut);

inline B None_3D0813__is(STACK_FRAME void* this) {
  return ((None_3D0813) this)->type == TNone_3D0813;
}

inline None_3D0813 None_3D0813__as(STACK_FRAME void *this) {
  if (None_3D0813__is(CALLER this)) return (None_3D0813) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api].");
  abort();
}

void None_3D0813_apply(STACK_FRAME None_3D0813 this);

#ifdef __cplusplus
}
#endif

#endif