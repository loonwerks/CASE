#ifndef SIREUM_H_org_sireum_Some_3030EA
#define SIREUM_H_org_sireum_Some_3030EA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]

#define Some_3030EA_value_(this) ((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &(this)->value)

B Some_3030EA__eq(Some_3030EA this, Some_3030EA other);
inline B Some_3030EA__ne(Some_3030EA this, Some_3030EA other) {
  return !Some_3030EA__eq(this, other);
};
void Some_3030EA_string_(STACK_FRAME String result, Some_3030EA this);
void Some_3030EA_cprint(Some_3030EA this, B isOut);

inline B Some_3030EA__is(STACK_FRAME void* this) {
  return ((Some_3030EA) this)->type == TSome_3030EA;
}

inline Some_3030EA Some_3030EA__as(STACK_FRAME void *this) {
  if (Some_3030EA__is(CALLER this)) return (Some_3030EA) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api].");
  abort();
}

void Some_3030EA_apply(STACK_FRAME Some_3030EA this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif