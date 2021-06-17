#ifndef SIREUM_H_org_sireum_Some_08A5F4
#define SIREUM_H_org_sireum_Some_08A5F4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]

#define Some_08A5F4_value_(this) ((hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &(this)->value)

B Some_08A5F4__eq(Some_08A5F4 this, Some_08A5F4 other);
inline B Some_08A5F4__ne(Some_08A5F4 this, Some_08A5F4 other) {
  return !Some_08A5F4__eq(this, other);
};
void Some_08A5F4_string_(STACK_FRAME String result, Some_08A5F4 this);
void Some_08A5F4_cprint(Some_08A5F4 this, B isOut);

inline B Some_08A5F4__is(STACK_FRAME void* this) {
  return ((Some_08A5F4) this)->type == TSome_08A5F4;
}

inline Some_08A5F4 Some_08A5F4__as(STACK_FRAME void *this) {
  if (Some_08A5F4__is(CALLER this)) return (Some_08A5F4) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api].");
  abort();
}

void Some_08A5F4_apply(STACK_FRAME Some_08A5F4 this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif