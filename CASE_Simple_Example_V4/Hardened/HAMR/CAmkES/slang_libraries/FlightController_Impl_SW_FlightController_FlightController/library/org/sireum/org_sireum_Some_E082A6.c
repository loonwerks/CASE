#include <all.h>

// Some[HAMR.SW.FlightController_Impl_Initialization_Api]

B Some_E082A6__eq(Some_E082A6 this, Some_E082A6 other) {
  if (HAMR_SW_FlightController_Impl_Initialization_Api__ne((HAMR_SW_FlightController_Impl_Initialization_Api) &this->value, (HAMR_SW_FlightController_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_E082A6__ne(Some_E082A6 this, Some_E082A6 other);

void Some_E082A6_string_(STACK_FRAME String result, Some_E082A6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_FlightController_Impl_Initialization_Api_string_(SF result, (HAMR_SW_FlightController_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E082A6_cprint(Some_E082A6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_FlightController_Impl_Initialization_Api_cprint((HAMR_SW_FlightController_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E082A6__is(STACK_FRAME void* this);
Some_E082A6 Some_E082A6__as(STACK_FRAME void *this);

void Some_E082A6_apply(STACK_FRAME Some_E082A6 this, HAMR_SW_FlightController_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E082A6", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_FlightController_Impl_Initialization_Api));
}