#ifndef SIREUM_H_org_sireum_Some_9DE0EF
#define SIREUM_H_org_sireum_Some_9DE0EF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]

#define Some_9DE0EF_value_(this) ((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &(this)->value)

B Some_9DE0EF__eq(Some_9DE0EF this, Some_9DE0EF other);
inline B Some_9DE0EF__ne(Some_9DE0EF this, Some_9DE0EF other) {
  return !Some_9DE0EF__eq(this, other);
};
void Some_9DE0EF_string_(STACK_FRAME String result, Some_9DE0EF this);
void Some_9DE0EF_cprint(Some_9DE0EF this, B isOut);

inline B Some_9DE0EF__is(STACK_FRAME void* this) {
  return ((Some_9DE0EF) this)->type == TSome_9DE0EF;
}

inline Some_9DE0EF Some_9DE0EF__as(STACK_FRAME void *this) {
  if (Some_9DE0EF__is(CALLER this)) return (Some_9DE0EF) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api].");
  abort();
}

void Some_9DE0EF_apply(STACK_FRAME Some_9DE0EF this, HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif