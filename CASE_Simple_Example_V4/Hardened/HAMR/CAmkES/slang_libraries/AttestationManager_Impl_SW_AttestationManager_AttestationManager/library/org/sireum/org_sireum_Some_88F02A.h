#ifndef SIREUM_H_org_sireum_Some_88F02A
#define SIREUM_H_org_sireum_Some_88F02A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.AttestationManager_Impl_Initialization_Api]

#define Some_88F02A_value_(this) ((HAMR_SW_AttestationManager_Impl_Initialization_Api) &(this)->value)

B Some_88F02A__eq(Some_88F02A this, Some_88F02A other);
inline B Some_88F02A__ne(Some_88F02A this, Some_88F02A other) {
  return !Some_88F02A__eq(this, other);
};
void Some_88F02A_string_(STACK_FRAME String result, Some_88F02A this);
void Some_88F02A_cprint(Some_88F02A this, B isOut);

inline B Some_88F02A__is(STACK_FRAME void* this) {
  return ((Some_88F02A) this)->type == TSome_88F02A;
}

inline Some_88F02A Some_88F02A__as(STACK_FRAME void *this) {
  if (Some_88F02A__is(CALLER this)) return (Some_88F02A) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.AttestationManager_Impl_Initialization_Api].");
  abort();
}

void Some_88F02A_apply(STACK_FRAME Some_88F02A this, HAMR_SW_AttestationManager_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif