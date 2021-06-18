#ifndef SIREUM_H_org_sireum_Some_018CE9
#define SIREUM_H_org_sireum_Some_018CE9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]

#define Some_018CE9_value_(this) ((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &(this)->value)

B Some_018CE9__eq(Some_018CE9 this, Some_018CE9 other);
inline B Some_018CE9__ne(Some_018CE9 this, Some_018CE9 other) {
  return !Some_018CE9__eq(this, other);
};
void Some_018CE9_string_(STACK_FRAME String result, Some_018CE9 this);
void Some_018CE9_cprint(Some_018CE9 this, B isOut);

inline B Some_018CE9__is(STACK_FRAME void* this) {
  return ((Some_018CE9) this)->type == TSome_018CE9;
}

inline Some_018CE9 Some_018CE9__as(STACK_FRAME void *this) {
  if (Some_018CE9__is(CALLER this)) return (Some_018CE9) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api].");
  abort();
}

void Some_018CE9_apply(STACK_FRAME Some_018CE9 this, hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif