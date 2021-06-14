#ifndef SIREUM_H_org_sireum_None_EC3D0D
#define SIREUM_H_org_sireum_None_EC3D0D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]


B None_EC3D0D__eq(None_EC3D0D this, None_EC3D0D other);
inline B None_EC3D0D__ne(None_EC3D0D this, None_EC3D0D other) {
  return !None_EC3D0D__eq(this, other);
};
void None_EC3D0D_string_(STACK_FRAME String result, None_EC3D0D this);
void None_EC3D0D_cprint(None_EC3D0D this, B isOut);

inline B None_EC3D0D__is(STACK_FRAME void* this) {
  return ((None_EC3D0D) this)->type == TNone_EC3D0D;
}

inline None_EC3D0D None_EC3D0D__as(STACK_FRAME void *this) {
  if (None_EC3D0D__is(CALLER this)) return (None_EC3D0D) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api].");
  abort();
}

void None_EC3D0D_apply(STACK_FRAME None_EC3D0D this);

#ifdef __cplusplus
}
#endif

#endif