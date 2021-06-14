#ifndef SIREUM_H_org_sireum_Some_9E368A
#define SIREUM_H_org_sireum_Some_9E368A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]

#define Some_9E368A_value_(this) ((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &(this)->value)

B Some_9E368A__eq(Some_9E368A this, Some_9E368A other);
inline B Some_9E368A__ne(Some_9E368A this, Some_9E368A other) {
  return !Some_9E368A__eq(this, other);
};
void Some_9E368A_string_(STACK_FRAME String result, Some_9E368A this);
void Some_9E368A_cprint(Some_9E368A this, B isOut);

inline B Some_9E368A__is(STACK_FRAME void* this) {
  return ((Some_9E368A) this)->type == TSome_9E368A;
}

inline Some_9E368A Some_9E368A__as(STACK_FRAME void *this) {
  if (Some_9E368A__is(CALLER this)) return (Some_9E368A) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api].");
  abort();
}

void Some_9E368A_apply(STACK_FRAME Some_9E368A this, HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif