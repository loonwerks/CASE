#ifndef SIREUM_H_org_sireum_Some_6322F0
#define SIREUM_H_org_sireum_Some_6322F0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]

#define Some_6322F0_value_(this) ((hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &(this)->value)

B Some_6322F0__eq(Some_6322F0 this, Some_6322F0 other);
inline B Some_6322F0__ne(Some_6322F0 this, Some_6322F0 other) {
  return !Some_6322F0__eq(this, other);
};
void Some_6322F0_string_(STACK_FRAME String result, Some_6322F0 this);
void Some_6322F0_cprint(Some_6322F0 this, B isOut);

inline B Some_6322F0__is(STACK_FRAME void* this) {
  return ((Some_6322F0) this)->type == TSome_6322F0;
}

inline Some_6322F0 Some_6322F0__as(STACK_FRAME void *this) {
  if (Some_6322F0__is(CALLER this)) return (Some_6322F0) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api].");
  abort();
}

void Some_6322F0_apply(STACK_FRAME Some_6322F0 this, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif