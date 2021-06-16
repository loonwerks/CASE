#ifndef SIREUM_H_org_sireum_Some_51939A
#define SIREUM_H_org_sireum_Some_51939A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]

#define Some_51939A_value_(this) ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &(this)->value)

B Some_51939A__eq(Some_51939A this, Some_51939A other);
inline B Some_51939A__ne(Some_51939A this, Some_51939A other) {
  return !Some_51939A__eq(this, other);
};
void Some_51939A_string_(STACK_FRAME String result, Some_51939A this);
void Some_51939A_cprint(Some_51939A this, B isOut);

inline B Some_51939A__is(STACK_FRAME void* this) {
  return ((Some_51939A) this)->type == TSome_51939A;
}

inline Some_51939A Some_51939A__as(STACK_FRAME void *this) {
  if (Some_51939A__is(CALLER this)) return (Some_51939A) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api].");
  abort();
}

void Some_51939A_apply(STACK_FRAME Some_51939A this, HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif