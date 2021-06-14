#ifndef SIREUM_H_org_sireum_Some_DDE9FD
#define SIREUM_H_org_sireum_Some_DDE9FD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]

#define Some_DDE9FD_value_(this) ((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &(this)->value)

B Some_DDE9FD__eq(Some_DDE9FD this, Some_DDE9FD other);
inline B Some_DDE9FD__ne(Some_DDE9FD this, Some_DDE9FD other) {
  return !Some_DDE9FD__eq(this, other);
};
void Some_DDE9FD_string_(STACK_FRAME String result, Some_DDE9FD this);
void Some_DDE9FD_cprint(Some_DDE9FD this, B isOut);

inline B Some_DDE9FD__is(STACK_FRAME void* this) {
  return ((Some_DDE9FD) this)->type == TSome_DDE9FD;
}

inline Some_DDE9FD Some_DDE9FD__as(STACK_FRAME void *this) {
  if (Some_DDE9FD__is(CALLER this)) return (Some_DDE9FD) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api].");
  abort();
}

void Some_DDE9FD_apply(STACK_FRAME Some_DDE9FD this, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif