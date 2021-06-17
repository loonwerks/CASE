#include <all.h>

// Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api]

B Some_BAA603__eq(Some_BAA603 this, Some_BAA603 other) {
  if (hamr_Drivers_UARTDriver_Impl_Initialization_Api__ne((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &this->value, (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_BAA603__ne(Some_BAA603 this, Some_BAA603 other);

void Some_BAA603_string_(STACK_FRAME String result, Some_BAA603 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_Drivers_UARTDriver_Impl_Initialization_Api_string_(SF result, (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_BAA603_cprint(Some_BAA603 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_Drivers_UARTDriver_Impl_Initialization_Api_cprint((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_BAA603__is(STACK_FRAME void* this);
Some_BAA603 Some_BAA603__as(STACK_FRAME void *this);

void Some_BAA603_apply(STACK_FRAME Some_BAA603 this, hamr_Drivers_UARTDriver_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_BAA603", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_Drivers_UARTDriver_Impl_Initialization_Api));
}