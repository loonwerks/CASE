#ifndef SIREUM_H_org_sireum_Some_CF7B75
#define SIREUM_H_org_sireum_Some_CF7B75

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]

#define Some_CF7B75_value_(this) ((HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &(this)->value)

B Some_CF7B75__eq(Some_CF7B75 this, Some_CF7B75 other);
inline B Some_CF7B75__ne(Some_CF7B75 this, Some_CF7B75 other) {
  return !Some_CF7B75__eq(this, other);
};
void Some_CF7B75_string_(STACK_FRAME String result, Some_CF7B75 this);
void Some_CF7B75_cprint(Some_CF7B75 this, B isOut);

inline B Some_CF7B75__is(STACK_FRAME void* this) {
  return ((Some_CF7B75) this)->type == TSome_CF7B75;
}

inline Some_CF7B75 Some_CF7B75__as(STACK_FRAME void *this) {
  if (Some_CF7B75__is(CALLER this)) return (Some_CF7B75) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api].");
  abort();
}

void Some_CF7B75_apply(STACK_FRAME Some_CF7B75 this, HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif