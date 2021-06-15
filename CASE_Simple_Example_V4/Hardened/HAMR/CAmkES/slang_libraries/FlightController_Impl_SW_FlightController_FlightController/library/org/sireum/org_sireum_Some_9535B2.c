#include <all.h>

// Some[HAMR.SW.FlightController_Impl_Operational_Api]

B Some_9535B2__eq(Some_9535B2 this, Some_9535B2 other) {
  if (HAMR_SW_FlightController_Impl_Operational_Api__ne((HAMR_SW_FlightController_Impl_Operational_Api) &this->value, (HAMR_SW_FlightController_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_9535B2__ne(Some_9535B2 this, Some_9535B2 other);

void Some_9535B2_string_(STACK_FRAME String result, Some_9535B2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_FlightController_Impl_Operational_Api_string_(SF result, (HAMR_SW_FlightController_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_9535B2_cprint(Some_9535B2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_FlightController_Impl_Operational_Api_cprint((HAMR_SW_FlightController_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_9535B2__is(STACK_FRAME void* this);
Some_9535B2 Some_9535B2__as(STACK_FRAME void *this);

void Some_9535B2_apply(STACK_FRAME Some_9535B2 this, HAMR_SW_FlightController_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_9535B2", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_FlightController_Impl_Operational_Api));
}