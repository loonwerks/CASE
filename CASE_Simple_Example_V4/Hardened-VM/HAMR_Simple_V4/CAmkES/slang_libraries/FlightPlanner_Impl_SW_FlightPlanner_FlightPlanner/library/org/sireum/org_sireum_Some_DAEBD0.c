#include <all.h>

// Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]

B Some_DAEBD0__eq(Some_DAEBD0 this, Some_DAEBD0 other) {
  if (HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_DAEBD0__ne(Some_DAEBD0 this, Some_DAEBD0 other);

void Some_DAEBD0_string_(STACK_FRAME String result, Some_DAEBD0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_DAEBD0_cprint(Some_DAEBD0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_DAEBD0__is(STACK_FRAME void* this);
Some_DAEBD0 Some_DAEBD0__as(STACK_FRAME void *this);

void Some_DAEBD0_apply(STACK_FRAME Some_DAEBD0 this, HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_DAEBD0", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api));
}