#ifndef SIREUM_H_org_sireum_None_45110B
#define SIREUM_H_org_sireum_None_45110B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]


B None_45110B__eq(None_45110B this, None_45110B other);
inline B None_45110B__ne(None_45110B this, None_45110B other) {
  return !None_45110B__eq(this, other);
};
void None_45110B_string_(STACK_FRAME String result, None_45110B this);
void None_45110B_cprint(None_45110B this, B isOut);

inline B None_45110B__is(STACK_FRAME void* this) {
  return ((None_45110B) this)->type == TNone_45110B;
}

inline None_45110B None_45110B__as(STACK_FRAME void *this) {
  if (None_45110B__is(CALLER this)) return (None_45110B) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api].");
  abort();
}

void None_45110B_apply(STACK_FRAME None_45110B this);

#ifdef __cplusplus
}
#endif

#endif