#include <all.h>

// Some[hamr.Drivers.UARTDriver_Impl_Operational_Api]

B Some_74DA67__eq(Some_74DA67 this, Some_74DA67 other) {
  if (hamr_Drivers_UARTDriver_Impl_Operational_Api__ne((hamr_Drivers_UARTDriver_Impl_Operational_Api) &this->value, (hamr_Drivers_UARTDriver_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_74DA67__ne(Some_74DA67 this, Some_74DA67 other);

void Some_74DA67_string_(STACK_FRAME String result, Some_74DA67 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_Drivers_UARTDriver_Impl_Operational_Api_string_(SF result, (hamr_Drivers_UARTDriver_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_74DA67_cprint(Some_74DA67 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_Drivers_UARTDriver_Impl_Operational_Api_cprint((hamr_Drivers_UARTDriver_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_74DA67__is(STACK_FRAME void* this);
Some_74DA67 Some_74DA67__as(STACK_FRAME void *this);

void Some_74DA67_apply(STACK_FRAME Some_74DA67 this, hamr_Drivers_UARTDriver_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_74DA67", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_Drivers_UARTDriver_Impl_Operational_Api));
}