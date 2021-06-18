#ifndef SIREUM_H_org_sireum_None_5189C1
#define SIREUM_H_org_sireum_None_5189C1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.UxAS_thr_Impl_Operational_Api]


B None_5189C1__eq(None_5189C1 this, None_5189C1 other);
inline B None_5189C1__ne(None_5189C1 this, None_5189C1 other) {
  return !None_5189C1__eq(this, other);
};
void None_5189C1_string_(STACK_FRAME String result, None_5189C1 this);
void None_5189C1_cprint(None_5189C1 this, B isOut);

inline B None_5189C1__is(STACK_FRAME void* this) {
  return ((None_5189C1) this)->type == TNone_5189C1;
}

inline None_5189C1 None_5189C1__as(STACK_FRAME void *this) {
  if (None_5189C1__is(CALLER this)) return (None_5189C1) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.UxAS_thr_Impl_Operational_Api].");
  abort();
}

void None_5189C1_apply(STACK_FRAME None_5189C1 this);

#ifdef __cplusplus
}
#endif

#endif