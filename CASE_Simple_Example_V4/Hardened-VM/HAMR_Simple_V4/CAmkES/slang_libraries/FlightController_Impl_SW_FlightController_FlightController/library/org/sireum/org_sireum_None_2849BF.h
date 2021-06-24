#ifndef SIREUM_H_org_sireum_None_2849BF
#define SIREUM_H_org_sireum_None_2849BF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]


B None_2849BF__eq(None_2849BF this, None_2849BF other);
inline B None_2849BF__ne(None_2849BF this, None_2849BF other) {
  return !None_2849BF__eq(this, other);
};
void None_2849BF_string_(STACK_FRAME String result, None_2849BF this);
void None_2849BF_cprint(None_2849BF this, B isOut);

inline B None_2849BF__is(STACK_FRAME void* this) {
  return ((None_2849BF) this)->type == TNone_2849BF;
}

inline None_2849BF None_2849BF__as(STACK_FRAME void *this) {
  if (None_2849BF__is(CALLER this)) return (None_2849BF) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api].");
  abort();
}

void None_2849BF_apply(STACK_FRAME None_2849BF this);

#ifdef __cplusplus
}
#endif

#endif