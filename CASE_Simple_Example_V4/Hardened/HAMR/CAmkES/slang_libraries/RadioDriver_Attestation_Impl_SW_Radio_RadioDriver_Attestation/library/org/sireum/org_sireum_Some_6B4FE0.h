#ifndef SIREUM_H_org_sireum_Some_6B4FE0
#define SIREUM_H_org_sireum_Some_6B4FE0

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]

#define Some_6B4FE0_value_(this) ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &(this)->value)

B Some_6B4FE0__eq(Some_6B4FE0 this, Some_6B4FE0 other);
inline B Some_6B4FE0__ne(Some_6B4FE0 this, Some_6B4FE0 other) {
  return !Some_6B4FE0__eq(this, other);
};
void Some_6B4FE0_string_(STACK_FRAME String result, Some_6B4FE0 this);
void Some_6B4FE0_cprint(Some_6B4FE0 this, B isOut);

inline B Some_6B4FE0__is(STACK_FRAME void* this) {
  return ((Some_6B4FE0) this)->type == TSome_6B4FE0;
}

inline Some_6B4FE0 Some_6B4FE0__as(STACK_FRAME void *this) {
  if (Some_6B4FE0__is(CALLER this)) return (Some_6B4FE0) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api].");
  abort();
}

void Some_6B4FE0_apply(STACK_FRAME Some_6B4FE0 this, HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif