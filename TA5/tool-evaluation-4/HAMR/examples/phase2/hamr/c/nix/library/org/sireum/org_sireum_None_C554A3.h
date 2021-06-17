#ifndef SIREUM_H_org_sireum_None_C554A3
#define SIREUM_H_org_sireum_None_C554A3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]


B None_C554A3__eq(None_C554A3 this, None_C554A3 other);
inline B None_C554A3__ne(None_C554A3 this, None_C554A3 other) {
  return !None_C554A3__eq(this, other);
};
void None_C554A3_string_(STACK_FRAME String result, None_C554A3 this);
void None_C554A3_cprint(None_C554A3 this, B isOut);

inline B None_C554A3__is(STACK_FRAME void* this) {
  return ((None_C554A3) this)->type == TNone_C554A3;
}

inline None_C554A3 None_C554A3__as(STACK_FRAME void *this) {
  if (None_C554A3__is(CALLER this)) return (None_C554A3) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api].");
  abort();
}

void None_C554A3_apply(STACK_FRAME None_C554A3 this);

#ifdef __cplusplus
}
#endif

#endif