#ifndef SIREUM_H_org_sireum_Some_65C258
#define SIREUM_H_org_sireum_Some_65C258

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]

#define Some_65C258_value_(this) ((hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) &(this)->value)

B Some_65C258__eq(Some_65C258 this, Some_65C258 other);
inline B Some_65C258__ne(Some_65C258 this, Some_65C258 other) {
  return !Some_65C258__eq(this, other);
};
void Some_65C258_string_(STACK_FRAME String result, Some_65C258 this);
void Some_65C258_cprint(Some_65C258 this, B isOut);

inline B Some_65C258__is(STACK_FRAME void* this) {
  return ((Some_65C258) this)->type == TSome_65C258;
}

inline Some_65C258 Some_65C258__as(STACK_FRAME void *this) {
  if (Some_65C258__is(CALLER this)) return (Some_65C258) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api].");
  abort();
}

void Some_65C258_apply(STACK_FRAME Some_65C258 this, hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif