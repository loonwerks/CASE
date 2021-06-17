#ifndef SIREUM_H_org_sireum_Some_74DA67
#define SIREUM_H_org_sireum_Some_74DA67

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.Drivers.UARTDriver_Impl_Operational_Api]

#define Some_74DA67_value_(this) ((hamr_Drivers_UARTDriver_Impl_Operational_Api) &(this)->value)

B Some_74DA67__eq(Some_74DA67 this, Some_74DA67 other);
inline B Some_74DA67__ne(Some_74DA67 this, Some_74DA67 other) {
  return !Some_74DA67__eq(this, other);
};
void Some_74DA67_string_(STACK_FRAME String result, Some_74DA67 this);
void Some_74DA67_cprint(Some_74DA67 this, B isOut);

inline B Some_74DA67__is(STACK_FRAME void* this) {
  return ((Some_74DA67) this)->type == TSome_74DA67;
}

inline Some_74DA67 Some_74DA67__as(STACK_FRAME void *this) {
  if (Some_74DA67__is(CALLER this)) return (Some_74DA67) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.Drivers.UARTDriver_Impl_Operational_Api].");
  abort();
}

void Some_74DA67_apply(STACK_FRAME Some_74DA67 this, hamr_Drivers_UARTDriver_Impl_Operational_Api value);

#ifdef __cplusplus
}
#endif

#endif