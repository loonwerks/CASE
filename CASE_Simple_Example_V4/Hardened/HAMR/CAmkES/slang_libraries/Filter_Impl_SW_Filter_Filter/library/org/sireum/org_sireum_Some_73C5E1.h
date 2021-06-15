#ifndef SIREUM_H_org_sireum_Some_73C5E1
#define SIREUM_H_org_sireum_Some_73C5E1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.Filter_Impl_Operational_Api]

#define Some_73C5E1_value_(this) ((HAMR_SW_Filter_Impl_Operational_Api) &(this)->value)

B Some_73C5E1__eq(Some_73C5E1 this, Some_73C5E1 other);
inline B Some_73C5E1__ne(Some_73C5E1 this, Some_73C5E1 other) {
  return !Some_73C5E1__eq(this, other);
};
void Some_73C5E1_string_(STACK_FRAME String result, Some_73C5E1 this);
void Some_73C5E1_cprint(Some_73C5E1 this, B isOut);

inline B Some_73C5E1__is(STACK_FRAME void* this) {
  return ((Some_73C5E1) this)->type == TSome_73C5E1;
}

inline Some_73C5E1 Some_73C5E1__as(STACK_FRAME void *this) {
  if (Some_73C5E1__is(CALLER this)) return (Some_73C5E1) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.Filter_Impl_Operational_Api].");
  abort();
}

void Some_73C5E1_apply(STACK_FRAME Some_73C5E1 this, HAMR_SW_Filter_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif