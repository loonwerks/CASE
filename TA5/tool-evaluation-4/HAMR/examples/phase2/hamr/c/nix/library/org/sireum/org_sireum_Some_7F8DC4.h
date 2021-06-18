#ifndef SIREUM_H_org_sireum_Some_7F8DC4
#define SIREUM_H_org_sireum_Some_7F8DC4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.UxAS_thr_Impl_Operational_Api]

#define Some_7F8DC4_value_(this) ((hamr_SW_UxAS_thr_Impl_Operational_Api) &(this)->value)

B Some_7F8DC4__eq(Some_7F8DC4 this, Some_7F8DC4 other);
inline B Some_7F8DC4__ne(Some_7F8DC4 this, Some_7F8DC4 other) {
  return !Some_7F8DC4__eq(this, other);
};
void Some_7F8DC4_string_(STACK_FRAME String result, Some_7F8DC4 this);
void Some_7F8DC4_cprint(Some_7F8DC4 this, B isOut);

inline B Some_7F8DC4__is(STACK_FRAME void* this) {
  return ((Some_7F8DC4) this)->type == TSome_7F8DC4;
}

inline Some_7F8DC4 Some_7F8DC4__as(STACK_FRAME void *this) {
  if (Some_7F8DC4__is(CALLER this)) return (Some_7F8DC4) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.UxAS_thr_Impl_Operational_Api].");
  abort();
}

void Some_7F8DC4_apply(STACK_FRAME Some_7F8DC4 this, hamr_SW_UxAS_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif