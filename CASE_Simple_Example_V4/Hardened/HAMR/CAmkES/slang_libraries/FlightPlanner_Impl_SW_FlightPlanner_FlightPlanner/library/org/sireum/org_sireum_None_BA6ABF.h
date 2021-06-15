#ifndef SIREUM_H_org_sireum_None_BA6ABF
#define SIREUM_H_org_sireum_None_BA6ABF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.FlightPlanner_Impl_Initialization_Api]


B None_BA6ABF__eq(None_BA6ABF this, None_BA6ABF other);
inline B None_BA6ABF__ne(None_BA6ABF this, None_BA6ABF other) {
  return !None_BA6ABF__eq(this, other);
};
void None_BA6ABF_string_(STACK_FRAME String result, None_BA6ABF this);
void None_BA6ABF_cprint(None_BA6ABF this, B isOut);

inline B None_BA6ABF__is(STACK_FRAME void* this) {
  return ((None_BA6ABF) this)->type == TNone_BA6ABF;
}

inline None_BA6ABF None_BA6ABF__as(STACK_FRAME void *this) {
  if (None_BA6ABF__is(CALLER this)) return (None_BA6ABF) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.FlightPlanner_Impl_Initialization_Api].");
  abort();
}

void None_BA6ABF_apply(STACK_FRAME None_BA6ABF this);

#ifdef __cplusplus
}
#endif

#endif