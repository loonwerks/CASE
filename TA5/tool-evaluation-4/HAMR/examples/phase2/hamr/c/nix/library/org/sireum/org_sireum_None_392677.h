#ifndef SIREUM_H_org_sireum_None_392677
#define SIREUM_H_org_sireum_None_392677

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]


B None_392677__eq(None_392677 this, None_392677 other);
inline B None_392677__ne(None_392677 this, None_392677 other) {
  return !None_392677__eq(this, other);
};
void None_392677_string_(STACK_FRAME String result, None_392677 this);
void None_392677_cprint(None_392677 this, B isOut);

inline B None_392677__is(STACK_FRAME void* this) {
  return ((None_392677) this)->type == TNone_392677;
}

inline None_392677 None_392677__as(STACK_FRAME void *this) {
  if (None_392677__is(CALLER this)) return (None_392677) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api].");
  abort();
}

void None_392677_apply(STACK_FRAME None_392677 this);

#ifdef __cplusplus
}
#endif

#endif