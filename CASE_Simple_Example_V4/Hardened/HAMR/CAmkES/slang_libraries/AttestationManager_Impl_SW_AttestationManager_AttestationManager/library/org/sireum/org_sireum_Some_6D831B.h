#ifndef SIREUM_H_org_sireum_Some_6D831B
#define SIREUM_H_org_sireum_Some_6D831B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.AttestationManager_Impl_Operational_Api]

#define Some_6D831B_value_(this) ((HAMR_SW_AttestationManager_Impl_Operational_Api) &(this)->value)

B Some_6D831B__eq(Some_6D831B this, Some_6D831B other);
inline B Some_6D831B__ne(Some_6D831B this, Some_6D831B other) {
  return !Some_6D831B__eq(this, other);
};
void Some_6D831B_string_(STACK_FRAME String result, Some_6D831B this);
void Some_6D831B_cprint(Some_6D831B this, B isOut);

inline B Some_6D831B__is(STACK_FRAME void* this) {
  return ((Some_6D831B) this)->type == TSome_6D831B;
}

inline Some_6D831B Some_6D831B__as(STACK_FRAME void *this) {
  if (Some_6D831B__is(CALLER this)) return (Some_6D831B) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.AttestationManager_Impl_Operational_Api].");
  abort();
}

void Some_6D831B_apply(STACK_FRAME Some_6D831B this, HAMR_SW_AttestationManager_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif