#ifndef SIREUM_H_org_sireum_Some_B273EC
#define SIREUM_H_org_sireum_Some_B273EC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]

#define Some_B273EC_value_(this) ((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &(this)->value)

B Some_B273EC__eq(Some_B273EC this, Some_B273EC other);
inline B Some_B273EC__ne(Some_B273EC this, Some_B273EC other) {
  return !Some_B273EC__eq(this, other);
};
void Some_B273EC_string_(STACK_FRAME String result, Some_B273EC this);
void Some_B273EC_cprint(Some_B273EC this, B isOut);

inline B Some_B273EC__is(STACK_FRAME void* this) {
  return ((Some_B273EC) this)->type == TSome_B273EC;
}

inline Some_B273EC Some_B273EC__as(STACK_FRAME void *this) {
  if (Some_B273EC__is(CALLER this)) return (Some_B273EC) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api].");
  abort();
}

void Some_B273EC_apply(STACK_FRAME Some_B273EC this, HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif