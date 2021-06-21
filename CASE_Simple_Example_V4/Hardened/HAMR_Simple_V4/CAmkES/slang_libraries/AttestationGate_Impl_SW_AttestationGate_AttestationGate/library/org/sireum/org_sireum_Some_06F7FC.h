#ifndef SIREUM_H_org_sireum_Some_06F7FC
#define SIREUM_H_org_sireum_Some_06F7FC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]

#define Some_06F7FC_value_(this) ((HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) &(this)->value)

B Some_06F7FC__eq(Some_06F7FC this, Some_06F7FC other);
inline B Some_06F7FC__ne(Some_06F7FC this, Some_06F7FC other) {
  return !Some_06F7FC__eq(this, other);
};
void Some_06F7FC_string_(STACK_FRAME String result, Some_06F7FC this);
void Some_06F7FC_cprint(Some_06F7FC this, B isOut);

inline B Some_06F7FC__is(STACK_FRAME void* this) {
  return ((Some_06F7FC) this)->type == TSome_06F7FC;
}

inline Some_06F7FC Some_06F7FC__as(STACK_FRAME void *this) {
  if (Some_06F7FC__is(CALLER this)) return (Some_06F7FC) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api].");
  abort();
}

void Some_06F7FC_apply(STACK_FRAME Some_06F7FC this, HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif