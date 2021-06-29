#ifndef SIREUM_H_org_sireum_Some_E10DBF
#define SIREUM_H_org_sireum_Some_E10DBF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]

#define Some_E10DBF_value_(this) ((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &(this)->value)

B Some_E10DBF__eq(Some_E10DBF this, Some_E10DBF other);
inline B Some_E10DBF__ne(Some_E10DBF this, Some_E10DBF other) {
  return !Some_E10DBF__eq(this, other);
};
void Some_E10DBF_string_(STACK_FRAME String result, Some_E10DBF this);
void Some_E10DBF_cprint(Some_E10DBF this, B isOut);

inline B Some_E10DBF__is(STACK_FRAME void* this) {
  return ((Some_E10DBF) this)->type == TSome_E10DBF;
}

inline Some_E10DBF Some_E10DBF__as(STACK_FRAME void *this) {
  if (Some_E10DBF__is(CALLER this)) return (Some_E10DBF) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api].");
  abort();
}

void Some_E10DBF_apply(STACK_FRAME Some_E10DBF this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif