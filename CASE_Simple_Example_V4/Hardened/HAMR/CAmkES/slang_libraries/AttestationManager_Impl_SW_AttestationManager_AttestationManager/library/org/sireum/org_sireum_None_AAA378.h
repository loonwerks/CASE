#ifndef SIREUM_H_org_sireum_None_AAA378
#define SIREUM_H_org_sireum_None_AAA378

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.AttestationManager_Impl_Operational_Api]


B None_AAA378__eq(None_AAA378 this, None_AAA378 other);
inline B None_AAA378__ne(None_AAA378 this, None_AAA378 other) {
  return !None_AAA378__eq(this, other);
};
void None_AAA378_string_(STACK_FRAME String result, None_AAA378 this);
void None_AAA378_cprint(None_AAA378 this, B isOut);

inline B None_AAA378__is(STACK_FRAME void* this) {
  return ((None_AAA378) this)->type == TNone_AAA378;
}

inline None_AAA378 None_AAA378__as(STACK_FRAME void *this) {
  if (None_AAA378__is(CALLER this)) return (None_AAA378) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.AttestationManager_Impl_Operational_Api].");
  abort();
}

void None_AAA378_apply(STACK_FRAME None_AAA378 this);

#ifdef __cplusplus
}
#endif

#endif