#ifndef SIREUM_H_org_sireum_None_4BF8A4
#define SIREUM_H_org_sireum_None_4BF8A4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]


B None_4BF8A4__eq(None_4BF8A4 this, None_4BF8A4 other);
inline B None_4BF8A4__ne(None_4BF8A4 this, None_4BF8A4 other) {
  return !None_4BF8A4__eq(this, other);
};
void None_4BF8A4_string_(STACK_FRAME String result, None_4BF8A4 this);
void None_4BF8A4_cprint(None_4BF8A4 this, B isOut);

inline B None_4BF8A4__is(STACK_FRAME void* this) {
  return ((None_4BF8A4) this)->type == TNone_4BF8A4;
}

inline None_4BF8A4 None_4BF8A4__as(STACK_FRAME void *this) {
  if (None_4BF8A4__is(CALLER this)) return (None_4BF8A4) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api].");
  abort();
}

void None_4BF8A4_apply(STACK_FRAME None_4BF8A4 this);

#ifdef __cplusplus
}
#endif

#endif