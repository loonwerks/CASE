#ifndef SIREUM_H_org_sireum_Some_BAA603
#define SIREUM_H_org_sireum_Some_BAA603

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api]

#define Some_BAA603_value_(this) ((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &(this)->value)

B Some_BAA603__eq(Some_BAA603 this, Some_BAA603 other);
inline B Some_BAA603__ne(Some_BAA603 this, Some_BAA603 other) {
  return !Some_BAA603__eq(this, other);
};
void Some_BAA603_string_(STACK_FRAME String result, Some_BAA603 this);
void Some_BAA603_cprint(Some_BAA603 this, B isOut);

inline B Some_BAA603__is(STACK_FRAME void* this) {
  return ((Some_BAA603) this)->type == TSome_BAA603;
}

inline Some_BAA603 Some_BAA603__as(STACK_FRAME void *this) {
  if (Some_BAA603__is(CALLER this)) return (Some_BAA603) this;
  sfAbortImpl(CALLER "Invalid cast to Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api].");
  abort();
}

void Some_BAA603_apply(STACK_FRAME Some_BAA603 this, hamr_Drivers_UARTDriver_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif