#ifndef SIREUM_H_org_sireum_Some_30503C
#define SIREUM_H_org_sireum_Some_30503C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]

#define Some_30503C_value_(this) ((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &(this)->value)

B Some_30503C__eq(Some_30503C this, Some_30503C other);
inline B Some_30503C__ne(Some_30503C this, Some_30503C other) {
  return !Some_30503C__eq(this, other);
};
void Some_30503C_string_(STACK_FRAME String result, Some_30503C this);
void Some_30503C_cprint(Some_30503C this, B isOut);

inline B Some_30503C__is(STACK_FRAME void* this) {
  return ((Some_30503C) this)->type == TSome_30503C;
}

inline Some_30503C Some_30503C__as(STACK_FRAME void *this) {
  if (Some_30503C__is(CALLER this)) return (Some_30503C) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api].");
  abort();
}

void Some_30503C_apply(STACK_FRAME Some_30503C this, hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif