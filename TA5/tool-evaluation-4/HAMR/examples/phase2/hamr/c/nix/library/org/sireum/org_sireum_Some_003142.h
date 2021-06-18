#ifndef SIREUM_H_org_sireum_Some_003142
#define SIREUM_H_org_sireum_Some_003142

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]

#define Some_003142_value_(this) ((hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) &(this)->value)

B Some_003142__eq(Some_003142 this, Some_003142 other);
inline B Some_003142__ne(Some_003142 this, Some_003142 other) {
  return !Some_003142__eq(this, other);
};
void Some_003142_string_(STACK_FRAME String result, Some_003142 this);
void Some_003142_cprint(Some_003142 this, B isOut);

inline B Some_003142__is(STACK_FRAME void* this) {
  return ((Some_003142) this)->type == TSome_003142;
}

inline Some_003142 Some_003142__as(STACK_FRAME void *this) {
  if (Some_003142__is(CALLER this)) return (Some_003142) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api].");
  abort();
}

void Some_003142_apply(STACK_FRAME Some_003142 this, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif