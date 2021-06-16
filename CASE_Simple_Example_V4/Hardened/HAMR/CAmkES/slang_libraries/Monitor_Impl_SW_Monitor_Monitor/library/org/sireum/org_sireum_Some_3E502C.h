#ifndef SIREUM_H_org_sireum_Some_3E502C
#define SIREUM_H_org_sireum_Some_3E502C

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.Monitor_Impl_Operational_Api]

#define Some_3E502C_value_(this) ((HAMR_SW_Monitor_Impl_Operational_Api) &(this)->value)

B Some_3E502C__eq(Some_3E502C this, Some_3E502C other);
inline B Some_3E502C__ne(Some_3E502C this, Some_3E502C other) {
  return !Some_3E502C__eq(this, other);
};
void Some_3E502C_string_(STACK_FRAME String result, Some_3E502C this);
void Some_3E502C_cprint(Some_3E502C this, B isOut);

inline B Some_3E502C__is(STACK_FRAME void* this) {
  return ((Some_3E502C) this)->type == TSome_3E502C;
}

inline Some_3E502C Some_3E502C__as(STACK_FRAME void *this) {
  if (Some_3E502C__is(CALLER this)) return (Some_3E502C) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.Monitor_Impl_Operational_Api].");
  abort();
}

void Some_3E502C_apply(STACK_FRAME Some_3E502C this, HAMR_SW_Monitor_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif