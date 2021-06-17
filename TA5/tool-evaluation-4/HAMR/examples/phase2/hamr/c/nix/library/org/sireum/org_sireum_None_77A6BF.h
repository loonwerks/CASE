#ifndef SIREUM_H_org_sireum_None_77A6BF
#define SIREUM_H_org_sireum_None_77A6BF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]


B None_77A6BF__eq(None_77A6BF this, None_77A6BF other);
inline B None_77A6BF__ne(None_77A6BF this, None_77A6BF other) {
  return !None_77A6BF__eq(this, other);
};
void None_77A6BF_string_(STACK_FRAME String result, None_77A6BF this);
void None_77A6BF_cprint(None_77A6BF this, B isOut);

inline B None_77A6BF__is(STACK_FRAME void* this) {
  return ((None_77A6BF) this)->type == TNone_77A6BF;
}

inline None_77A6BF None_77A6BF__as(STACK_FRAME void *this) {
  if (None_77A6BF__is(CALLER this)) return (None_77A6BF) this;
  sfAbortImpl(CALLER "Invalid cast to None[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api].");
  abort();
}

void None_77A6BF_apply(STACK_FRAME None_77A6BF this);

#ifdef __cplusplus
}
#endif

#endif