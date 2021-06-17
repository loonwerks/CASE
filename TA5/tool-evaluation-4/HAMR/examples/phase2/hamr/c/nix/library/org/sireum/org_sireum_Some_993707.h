#ifndef SIREUM_H_org_sireum_Some_993707
#define SIREUM_H_org_sireum_Some_993707

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]

#define Some_993707_value_(this) ((hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &(this)->value)

B Some_993707__eq(Some_993707 this, Some_993707 other);
inline B Some_993707__ne(Some_993707 this, Some_993707 other) {
  return !Some_993707__eq(this, other);
};
void Some_993707_string_(STACK_FRAME String result, Some_993707 this);
void Some_993707_cprint(Some_993707 this, B isOut);

inline B Some_993707__is(STACK_FRAME void* this) {
  return ((Some_993707) this)->type == TSome_993707;
}

inline Some_993707 Some_993707__as(STACK_FRAME void *this) {
  if (Some_993707__is(CALLER this)) return (Some_993707) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api].");
  abort();
}

void Some_993707_apply(STACK_FRAME Some_993707 this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif