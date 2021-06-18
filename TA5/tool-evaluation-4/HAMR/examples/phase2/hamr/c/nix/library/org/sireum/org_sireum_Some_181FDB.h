#ifndef SIREUM_H_org_sireum_Some_181FDB
#define SIREUM_H_org_sireum_Some_181FDB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]

#define Some_181FDB_value_(this) ((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &(this)->value)

B Some_181FDB__eq(Some_181FDB this, Some_181FDB other);
inline B Some_181FDB__ne(Some_181FDB this, Some_181FDB other) {
  return !Some_181FDB__eq(this, other);
};
void Some_181FDB_string_(STACK_FRAME String result, Some_181FDB this);
void Some_181FDB_cprint(Some_181FDB this, B isOut);

inline B Some_181FDB__is(STACK_FRAME void* this) {
  return ((Some_181FDB) this)->type == TSome_181FDB;
}

inline Some_181FDB Some_181FDB__as(STACK_FRAME void *this) {
  if (Some_181FDB__is(CALLER this)) return (Some_181FDB) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api].");
  abort();
}

void Some_181FDB_apply(STACK_FRAME Some_181FDB this, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif