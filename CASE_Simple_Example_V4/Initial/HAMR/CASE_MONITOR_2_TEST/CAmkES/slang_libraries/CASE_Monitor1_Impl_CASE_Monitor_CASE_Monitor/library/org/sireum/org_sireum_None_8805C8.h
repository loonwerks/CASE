#ifndef SIREUM_H_org_sireum_None_8805C8
#define SIREUM_H_org_sireum_None_8805C8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]


B None_8805C8__eq(None_8805C8 this, None_8805C8 other);
inline B None_8805C8__ne(None_8805C8 this, None_8805C8 other) {
  return !None_8805C8__eq(this, other);
};
void None_8805C8_string_(STACK_FRAME String result, None_8805C8 this);
void None_8805C8_cprint(None_8805C8 this, B isOut);

inline B None_8805C8__is(STACK_FRAME void* this) {
  return ((None_8805C8) this)->type == TNone_8805C8;
}

inline None_8805C8 None_8805C8__as(STACK_FRAME void *this) {
  if (None_8805C8__is(CALLER this)) return (None_8805C8) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api].");
  abort();
}

void None_8805C8_apply(STACK_FRAME None_8805C8 this);

#ifdef __cplusplus
}
#endif

#endif