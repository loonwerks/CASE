#ifndef SIREUM_H_org_sireum_None_3A9994
#define SIREUM_H_org_sireum_None_3A9994

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR.SW.AttestationTester_Impl_Operational_Api]


B None_3A9994__eq(None_3A9994 this, None_3A9994 other);
inline B None_3A9994__ne(None_3A9994 this, None_3A9994 other) {
  return !None_3A9994__eq(this, other);
};
void None_3A9994_string_(STACK_FRAME String result, None_3A9994 this);
void None_3A9994_cprint(None_3A9994 this, B isOut);

inline B None_3A9994__is(STACK_FRAME void* this) {
  return ((None_3A9994) this)->type == TNone_3A9994;
}

inline None_3A9994 None_3A9994__as(STACK_FRAME void *this) {
  if (None_3A9994__is(CALLER this)) return (None_3A9994) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR.SW.AttestationTester_Impl_Operational_Api].");
  abort();
}

void None_3A9994_apply(STACK_FRAME None_3A9994 this);

#ifdef __cplusplus
}
#endif

#endif