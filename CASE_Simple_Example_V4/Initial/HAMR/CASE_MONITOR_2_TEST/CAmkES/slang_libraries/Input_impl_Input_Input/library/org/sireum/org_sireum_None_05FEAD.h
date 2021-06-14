#ifndef SIREUM_H_org_sireum_None_05FEAD
#define SIREUM_H_org_sireum_None_05FEAD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]


B None_05FEAD__eq(None_05FEAD this, None_05FEAD other);
inline B None_05FEAD__ne(None_05FEAD this, None_05FEAD other) {
  return !None_05FEAD__eq(this, other);
};
void None_05FEAD_string_(STACK_FRAME String result, None_05FEAD this);
void None_05FEAD_cprint(None_05FEAD this, B isOut);

inline B None_05FEAD__is(STACK_FRAME void* this) {
  return ((None_05FEAD) this)->type == TNone_05FEAD;
}

inline None_05FEAD None_05FEAD__as(STACK_FRAME void *this) {
  if (None_05FEAD__is(CALLER this)) return (None_05FEAD) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api].");
  abort();
}

void None_05FEAD_apply(STACK_FRAME None_05FEAD this);

#ifdef __cplusplus
}
#endif

#endif