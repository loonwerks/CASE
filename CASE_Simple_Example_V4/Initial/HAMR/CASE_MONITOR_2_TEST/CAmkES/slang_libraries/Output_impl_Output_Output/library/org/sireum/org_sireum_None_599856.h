#ifndef SIREUM_H_org_sireum_None_599856
#define SIREUM_H_org_sireum_None_599856

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]


B None_599856__eq(None_599856 this, None_599856 other);
inline B None_599856__ne(None_599856 this, None_599856 other) {
  return !None_599856__eq(this, other);
};
void None_599856_string_(STACK_FRAME String result, None_599856 this);
void None_599856_cprint(None_599856 this, B isOut);

inline B None_599856__is(STACK_FRAME void* this) {
  return ((None_599856) this)->type == TNone_599856;
}

inline None_599856 None_599856__as(STACK_FRAME void *this) {
  if (None_599856__is(CALLER this)) return (None_599856) this;
  sfAbortImpl(CALLER "Invalid cast to None[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api].");
  abort();
}

void None_599856_apply(STACK_FRAME None_599856 this);

#ifdef __cplusplus
}
#endif

#endif