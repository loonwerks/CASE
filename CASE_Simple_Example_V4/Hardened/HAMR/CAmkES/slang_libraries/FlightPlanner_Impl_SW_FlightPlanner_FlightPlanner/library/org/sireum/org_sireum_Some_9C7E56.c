#include <all.h>

// Some[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

B Some_9C7E56__eq(Some_9C7E56 this, Some_9C7E56 other) {
  if (HAMR_SW_FlightPlanner_Impl_Initialization_Api__ne((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &this->value, (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_9C7E56__ne(Some_9C7E56 this, Some_9C7E56 other);

void Some_9C7E56_string_(STACK_FRAME String result, Some_9C7E56 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_FlightPlanner_Impl_Initialization_Api_string_(SF result, (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_9C7E56_cprint(Some_9C7E56 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_FlightPlanner_Impl_Initialization_Api_cprint((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_9C7E56__is(STACK_FRAME void* this);
Some_9C7E56 Some_9C7E56__as(STACK_FRAME void *this);

void Some_9C7E56_apply(STACK_FRAME Some_9C7E56 this, HAMR_SW_FlightPlanner_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_9C7E56", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_FlightPlanner_Impl_Initialization_Api));
}