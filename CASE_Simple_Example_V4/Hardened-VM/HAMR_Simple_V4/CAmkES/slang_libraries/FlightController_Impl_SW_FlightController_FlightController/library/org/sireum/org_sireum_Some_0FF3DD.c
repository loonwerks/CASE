#include <all.h>

// Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]

B Some_0FF3DD__eq(Some_0FF3DD this, Some_0FF3DD other) {
  if (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_0FF3DD__ne(Some_0FF3DD this, Some_0FF3DD other);

void Some_0FF3DD_string_(STACK_FRAME String result, Some_0FF3DD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_0FF3DD_cprint(Some_0FF3DD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_0FF3DD__is(STACK_FRAME void* this);
Some_0FF3DD Some_0FF3DD__as(STACK_FRAME void *this);

void Some_0FF3DD_apply(STACK_FRAME Some_0FF3DD this, HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_0FF3DD", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api));
}