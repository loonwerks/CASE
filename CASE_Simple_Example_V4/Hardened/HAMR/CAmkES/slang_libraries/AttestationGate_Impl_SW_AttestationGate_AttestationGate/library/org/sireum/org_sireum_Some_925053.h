#ifndef SIREUM_H_org_sireum_Some_925053
#define SIREUM_H_org_sireum_Some_925053

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.AttestationGate_Impl_Initialization_Api]

#define Some_925053_value_(this) ((HAMR_SW_AttestationGate_Impl_Initialization_Api) &(this)->value)

B Some_925053__eq(Some_925053 this, Some_925053 other);
inline B Some_925053__ne(Some_925053 this, Some_925053 other) {
  return !Some_925053__eq(this, other);
};
void Some_925053_string_(STACK_FRAME String result, Some_925053 this);
void Some_925053_cprint(Some_925053 this, B isOut);

inline B Some_925053__is(STACK_FRAME void* this) {
  return ((Some_925053) this)->type == TSome_925053;
}

inline Some_925053 Some_925053__as(STACK_FRAME void *this) {
  if (Some_925053__is(CALLER this)) return (Some_925053) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.AttestationGate_Impl_Initialization_Api].");
  abort();
}

void Some_925053_apply(STACK_FRAME Some_925053 this, HAMR_SW_AttestationGate_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif