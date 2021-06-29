#ifndef SIREUM_H_org_sireum_Some_E0238A
#define SIREUM_H_org_sireum_Some_E0238A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]

#define Some_E0238A_value_(this) ((HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) &(this)->value)

B Some_E0238A__eq(Some_E0238A this, Some_E0238A other);
inline B Some_E0238A__ne(Some_E0238A this, Some_E0238A other) {
  return !Some_E0238A__eq(this, other);
};
void Some_E0238A_string_(STACK_FRAME String result, Some_E0238A this);
void Some_E0238A_cprint(Some_E0238A this, B isOut);

inline B Some_E0238A__is(STACK_FRAME void* this) {
  return ((Some_E0238A) this)->type == TSome_E0238A;
}

inline Some_E0238A Some_E0238A__as(STACK_FRAME void *this) {
  if (Some_E0238A__is(CALLER this)) return (Some_E0238A) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api].");
  abort();
}

void Some_E0238A_apply(STACK_FRAME Some_E0238A this, HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif