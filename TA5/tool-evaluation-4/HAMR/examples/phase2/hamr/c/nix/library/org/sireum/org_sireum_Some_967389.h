#ifndef SIREUM_H_org_sireum_Some_967389
#define SIREUM_H_org_sireum_Some_967389

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]

#define Some_967389_value_(this) ((hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &(this)->value)

B Some_967389__eq(Some_967389 this, Some_967389 other);
inline B Some_967389__ne(Some_967389 this, Some_967389 other) {
  return !Some_967389__eq(this, other);
};
void Some_967389_string_(STACK_FRAME String result, Some_967389 this);
void Some_967389_cprint(Some_967389 this, B isOut);

inline B Some_967389__is(STACK_FRAME void* this) {
  return ((Some_967389) this)->type == TSome_967389;
}

inline Some_967389 Some_967389__as(STACK_FRAME void *this) {
  if (Some_967389__is(CALLER this)) return (Some_967389) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api].");
  abort();
}

void Some_967389_apply(STACK_FRAME Some_967389 this, hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif