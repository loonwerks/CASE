#ifndef SIREUM_H_org_sireum_Some_F82A4D
#define SIREUM_H_org_sireum_Some_F82A4D

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]

#define Some_F82A4D_value_(this) ((hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) &(this)->value)

B Some_F82A4D__eq(Some_F82A4D this, Some_F82A4D other);
inline B Some_F82A4D__ne(Some_F82A4D this, Some_F82A4D other) {
  return !Some_F82A4D__eq(this, other);
};
void Some_F82A4D_string_(STACK_FRAME String result, Some_F82A4D this);
void Some_F82A4D_cprint(Some_F82A4D this, B isOut);

inline B Some_F82A4D__is(STACK_FRAME void* this) {
  return ((Some_F82A4D) this)->type == TSome_F82A4D;
}

inline Some_F82A4D Some_F82A4D__as(STACK_FRAME void *this) {
  if (Some_F82A4D__is(CALLER this)) return (Some_F82A4D) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api].");
  abort();
}

void Some_F82A4D_apply(STACK_FRAME Some_F82A4D this, hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif