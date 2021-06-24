#ifndef SIREUM_H_org_sireum_Some_FDA5C5
#define SIREUM_H_org_sireum_Some_FDA5C5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]

#define Some_FDA5C5_value_(this) ((HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) &(this)->value)

B Some_FDA5C5__eq(Some_FDA5C5 this, Some_FDA5C5 other);
inline B Some_FDA5C5__ne(Some_FDA5C5 this, Some_FDA5C5 other) {
  return !Some_FDA5C5__eq(this, other);
};
void Some_FDA5C5_string_(STACK_FRAME String result, Some_FDA5C5 this);
void Some_FDA5C5_cprint(Some_FDA5C5 this, B isOut);

inline B Some_FDA5C5__is(STACK_FRAME void* this) {
  return ((Some_FDA5C5) this)->type == TSome_FDA5C5;
}

inline Some_FDA5C5 Some_FDA5C5__as(STACK_FRAME void *this) {
  if (Some_FDA5C5__is(CALLER this)) return (Some_FDA5C5) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api].");
  abort();
}

void Some_FDA5C5_apply(STACK_FRAME Some_FDA5C5 this, HAMR_Simple_V4_SW_Filter_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif