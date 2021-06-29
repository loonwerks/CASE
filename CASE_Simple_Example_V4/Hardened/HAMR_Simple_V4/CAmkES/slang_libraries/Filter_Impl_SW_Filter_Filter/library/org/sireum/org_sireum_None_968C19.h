#ifndef SIREUM_H_org_sireum_None_968C19
#define SIREUM_H_org_sireum_None_968C19

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]


B None_968C19__eq(None_968C19 this, None_968C19 other);
inline B None_968C19__ne(None_968C19 this, None_968C19 other) {
  return !None_968C19__eq(this, other);
};
void None_968C19_string_(STACK_FRAME String result, None_968C19 this);
void None_968C19_cprint(None_968C19 this, B isOut);

inline B None_968C19__is(STACK_FRAME void* this) {
  return ((None_968C19) this)->type == TNone_968C19;
}

inline None_968C19 None_968C19__as(STACK_FRAME void *this) {
  if (None_968C19__is(CALLER this)) return (None_968C19) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api].");
  abort();
}

void None_968C19_apply(STACK_FRAME None_968C19 this);

#ifdef __cplusplus
}
#endif

#endif