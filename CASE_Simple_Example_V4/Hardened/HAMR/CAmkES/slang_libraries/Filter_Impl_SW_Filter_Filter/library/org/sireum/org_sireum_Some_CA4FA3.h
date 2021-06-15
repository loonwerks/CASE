#ifndef SIREUM_H_org_sireum_Some_CA4FA3
#define SIREUM_H_org_sireum_Some_CA4FA3

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.Filter_Impl_Initialization_Api]

#define Some_CA4FA3_value_(this) ((HAMR_SW_Filter_Impl_Initialization_Api) &(this)->value)

B Some_CA4FA3__eq(Some_CA4FA3 this, Some_CA4FA3 other);
inline B Some_CA4FA3__ne(Some_CA4FA3 this, Some_CA4FA3 other) {
  return !Some_CA4FA3__eq(this, other);
};
void Some_CA4FA3_string_(STACK_FRAME String result, Some_CA4FA3 this);
void Some_CA4FA3_cprint(Some_CA4FA3 this, B isOut);

inline B Some_CA4FA3__is(STACK_FRAME void* this) {
  return ((Some_CA4FA3) this)->type == TSome_CA4FA3;
}

inline Some_CA4FA3 Some_CA4FA3__as(STACK_FRAME void *this) {
  if (Some_CA4FA3__is(CALLER this)) return (Some_CA4FA3) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.Filter_Impl_Initialization_Api].");
  abort();
}

void Some_CA4FA3_apply(STACK_FRAME Some_CA4FA3 this, HAMR_SW_Filter_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif