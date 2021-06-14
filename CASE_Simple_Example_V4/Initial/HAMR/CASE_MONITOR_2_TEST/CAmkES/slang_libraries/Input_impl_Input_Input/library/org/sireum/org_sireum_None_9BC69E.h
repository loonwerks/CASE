#ifndef SIREUM_H_org_sireum_None_9BC69E
#define SIREUM_H_org_sireum_None_9BC69E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]


B None_9BC69E__eq(None_9BC69E this, None_9BC69E other);
inline B None_9BC69E__ne(None_9BC69E this, None_9BC69E other) {
  return !None_9BC69E__eq(this, other);
};
void None_9BC69E_string_(STACK_FRAME String result, None_9BC69E this);
void None_9BC69E_cprint(None_9BC69E this, B isOut);

inline B None_9BC69E__is(STACK_FRAME void* this) {
  return ((None_9BC69E) this)->type == TNone_9BC69E;
}

inline None_9BC69E None_9BC69E__as(STACK_FRAME void *this) {
  if (None_9BC69E__is(CALLER this)) return (None_9BC69E) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api].");
  abort();
}

void None_9BC69E_apply(STACK_FRAME None_9BC69E this);

#ifdef __cplusplus
}
#endif

#endif