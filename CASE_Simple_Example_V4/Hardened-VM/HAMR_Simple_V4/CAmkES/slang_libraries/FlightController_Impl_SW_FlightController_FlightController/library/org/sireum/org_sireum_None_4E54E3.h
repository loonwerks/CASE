#ifndef SIREUM_H_org_sireum_None_4E54E3
#define SIREUM_H_org_sireum_None_4E54E3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]


B None_4E54E3__eq(None_4E54E3 this, None_4E54E3 other);
inline B None_4E54E3__ne(None_4E54E3 this, None_4E54E3 other) {
  return !None_4E54E3__eq(this, other);
};
void None_4E54E3_string_(STACK_FRAME String result, None_4E54E3 this);
void None_4E54E3_cprint(None_4E54E3 this, B isOut);

inline B None_4E54E3__is(STACK_FRAME void* this) {
  return ((None_4E54E3) this)->type == TNone_4E54E3;
}

inline None_4E54E3 None_4E54E3__as(STACK_FRAME void *this) {
  if (None_4E54E3__is(CALLER this)) return (None_4E54E3) this;
  sfAbortImpl(CALLER "Invalid cast to None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api].");
  abort();
}

void None_4E54E3_apply(STACK_FRAME None_4E54E3 this);

#ifdef __cplusplus
}
#endif

#endif