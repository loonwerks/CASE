#ifndef SIREUM_H_org_sireum_Some_5BDE4D
#define SIREUM_H_org_sireum_Some_5BDE4D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.UxAS_thr_Impl_Initialization_Api]

#define Some_5BDE4D_value_(this) ((hamr_SW_UxAS_thr_Impl_Initialization_Api) &(this)->value)

B Some_5BDE4D__eq(Some_5BDE4D this, Some_5BDE4D other);
inline B Some_5BDE4D__ne(Some_5BDE4D this, Some_5BDE4D other) {
  return !Some_5BDE4D__eq(this, other);
};
void Some_5BDE4D_string_(STACK_FRAME String result, Some_5BDE4D this);
void Some_5BDE4D_cprint(Some_5BDE4D this, B isOut);

inline B Some_5BDE4D__is(STACK_FRAME void* this) {
  return ((Some_5BDE4D) this)->type == TSome_5BDE4D;
}

inline Some_5BDE4D Some_5BDE4D__as(STACK_FRAME void *this) {
  if (Some_5BDE4D__is(CALLER this)) return (Some_5BDE4D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.UxAS_thr_Impl_Initialization_Api].");
  abort();
}

void Some_5BDE4D_apply(STACK_FRAME Some_5BDE4D this, hamr_SW_UxAS_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif