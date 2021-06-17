#ifndef SIREUM_H_org_sireum_Some_CA0A4D
#define SIREUM_H_org_sireum_Some_CA0A4D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]

#define Some_CA0A4D_value_(this) ((hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &(this)->value)

B Some_CA0A4D__eq(Some_CA0A4D this, Some_CA0A4D other);
inline B Some_CA0A4D__ne(Some_CA0A4D this, Some_CA0A4D other) {
  return !Some_CA0A4D__eq(this, other);
};
void Some_CA0A4D_string_(STACK_FRAME String result, Some_CA0A4D this);
void Some_CA0A4D_cprint(Some_CA0A4D this, B isOut);

inline B Some_CA0A4D__is(STACK_FRAME void* this) {
  return ((Some_CA0A4D) this)->type == TSome_CA0A4D;
}

inline Some_CA0A4D Some_CA0A4D__as(STACK_FRAME void *this) {
  if (Some_CA0A4D__is(CALLER this)) return (Some_CA0A4D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api].");
  abort();
}

void Some_CA0A4D_apply(STACK_FRAME Some_CA0A4D this, hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif