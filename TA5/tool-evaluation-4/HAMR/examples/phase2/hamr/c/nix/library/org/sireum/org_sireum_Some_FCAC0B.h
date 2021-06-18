#ifndef SIREUM_H_org_sireum_Some_FCAC0B
#define SIREUM_H_org_sireum_Some_FCAC0B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]

#define Some_FCAC0B_value_(this) ((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &(this)->value)

B Some_FCAC0B__eq(Some_FCAC0B this, Some_FCAC0B other);
inline B Some_FCAC0B__ne(Some_FCAC0B this, Some_FCAC0B other) {
  return !Some_FCAC0B__eq(this, other);
};
void Some_FCAC0B_string_(STACK_FRAME String result, Some_FCAC0B this);
void Some_FCAC0B_cprint(Some_FCAC0B this, B isOut);

inline B Some_FCAC0B__is(STACK_FRAME void* this) {
  return ((Some_FCAC0B) this)->type == TSome_FCAC0B;
}

inline Some_FCAC0B Some_FCAC0B__as(STACK_FRAME void *this) {
  if (Some_FCAC0B__is(CALLER this)) return (Some_FCAC0B) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api].");
  abort();
}

void Some_FCAC0B_apply(STACK_FRAME Some_FCAC0B this, hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif