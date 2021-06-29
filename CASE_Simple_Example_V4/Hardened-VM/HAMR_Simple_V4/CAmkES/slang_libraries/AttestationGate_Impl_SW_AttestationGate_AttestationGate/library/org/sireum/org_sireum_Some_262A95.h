#ifndef SIREUM_H_org_sireum_Some_262A95
#define SIREUM_H_org_sireum_Some_262A95

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]

#define Some_262A95_value_(this) ((HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) &(this)->value)

B Some_262A95__eq(Some_262A95 this, Some_262A95 other);
inline B Some_262A95__ne(Some_262A95 this, Some_262A95 other) {
  return !Some_262A95__eq(this, other);
};
void Some_262A95_string_(STACK_FRAME String result, Some_262A95 this);
void Some_262A95_cprint(Some_262A95 this, B isOut);

inline B Some_262A95__is(STACK_FRAME void* this) {
  return ((Some_262A95) this)->type == TSome_262A95;
}

inline Some_262A95 Some_262A95__as(STACK_FRAME void *this) {
  if (Some_262A95__is(CALLER this)) return (Some_262A95) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api].");
  abort();
}

void Some_262A95_apply(STACK_FRAME Some_262A95 this, HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif