#ifndef SIREUM_H_org_sireum_None_579C8E
#define SIREUM_H_org_sireum_None_579C8E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]


B None_579C8E__eq(None_579C8E this, None_579C8E other);
inline B None_579C8E__ne(None_579C8E this, None_579C8E other) {
  return !None_579C8E__eq(this, other);
};
void None_579C8E_string_(STACK_FRAME String result, None_579C8E this);
void None_579C8E_cprint(None_579C8E this, B isOut);

inline B None_579C8E__is(STACK_FRAME void* this) {
  return ((None_579C8E) this)->type == TNone_579C8E;
}

inline None_579C8E None_579C8E__as(STACK_FRAME void *this) {
  if (None_579C8E__is(CALLER this)) return (None_579C8E) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api].");
  abort();
}

void None_579C8E_apply(STACK_FRAME None_579C8E this);

#ifdef __cplusplus
}
#endif

#endif