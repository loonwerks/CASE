#ifndef SIREUM_H_org_sireum_Some_481DA5
#define SIREUM_H_org_sireum_Some_481DA5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]

#define Some_481DA5_value_(this) ((hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &(this)->value)

B Some_481DA5__eq(Some_481DA5 this, Some_481DA5 other);
inline B Some_481DA5__ne(Some_481DA5 this, Some_481DA5 other) {
  return !Some_481DA5__eq(this, other);
};
void Some_481DA5_string_(STACK_FRAME String result, Some_481DA5 this);
void Some_481DA5_cprint(Some_481DA5 this, B isOut);

inline B Some_481DA5__is(STACK_FRAME void* this) {
  return ((Some_481DA5) this)->type == TSome_481DA5;
}

inline Some_481DA5 Some_481DA5__as(STACK_FRAME void *this) {
  if (Some_481DA5__is(CALLER this)) return (Some_481DA5) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api].");
  abort();
}

void Some_481DA5_apply(STACK_FRAME Some_481DA5 this, hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif