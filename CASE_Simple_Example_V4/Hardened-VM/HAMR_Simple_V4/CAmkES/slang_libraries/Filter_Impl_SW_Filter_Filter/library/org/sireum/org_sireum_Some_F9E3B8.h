#ifndef SIREUM_H_org_sireum_Some_F9E3B8
#define SIREUM_H_org_sireum_Some_F9E3B8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]

#define Some_F9E3B8_value_(this) ((HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) &(this)->value)

B Some_F9E3B8__eq(Some_F9E3B8 this, Some_F9E3B8 other);
inline B Some_F9E3B8__ne(Some_F9E3B8 this, Some_F9E3B8 other) {
  return !Some_F9E3B8__eq(this, other);
};
void Some_F9E3B8_string_(STACK_FRAME String result, Some_F9E3B8 this);
void Some_F9E3B8_cprint(Some_F9E3B8 this, B isOut);

inline B Some_F9E3B8__is(STACK_FRAME void* this) {
  return ((Some_F9E3B8) this)->type == TSome_F9E3B8;
}

inline Some_F9E3B8 Some_F9E3B8__as(STACK_FRAME void *this) {
  if (Some_F9E3B8__is(CALLER this)) return (Some_F9E3B8) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api].");
  abort();
}

void Some_F9E3B8_apply(STACK_FRAME Some_F9E3B8 this, HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif