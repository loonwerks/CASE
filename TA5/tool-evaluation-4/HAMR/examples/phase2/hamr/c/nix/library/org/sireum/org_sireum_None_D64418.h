#ifndef SIREUM_H_org_sireum_None_D64418
#define SIREUM_H_org_sireum_None_D64418

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]


B None_D64418__eq(None_D64418 this, None_D64418 other);
inline B None_D64418__ne(None_D64418 this, None_D64418 other) {
  return !None_D64418__eq(this, other);
};
void None_D64418_string_(STACK_FRAME String result, None_D64418 this);
void None_D64418_cprint(None_D64418 this, B isOut);

inline B None_D64418__is(STACK_FRAME void* this) {
  return ((None_D64418) this)->type == TNone_D64418;
}

inline None_D64418 None_D64418__as(STACK_FRAME void *this) {
  if (None_D64418__is(CALLER this)) return (None_D64418) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api].");
  abort();
}

void None_D64418_apply(STACK_FRAME None_D64418 this);

#ifdef __cplusplus
}
#endif

#endif