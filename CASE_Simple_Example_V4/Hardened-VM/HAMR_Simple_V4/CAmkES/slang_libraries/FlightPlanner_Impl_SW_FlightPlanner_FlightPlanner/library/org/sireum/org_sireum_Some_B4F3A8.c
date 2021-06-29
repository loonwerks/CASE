#include <all.h>

// Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]

B Some_B4F3A8__eq(Some_B4F3A8 this, Some_B4F3A8 other) {
  if (HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_B4F3A8__ne(Some_B4F3A8 this, Some_B4F3A8 other);

void Some_B4F3A8_string_(STACK_FRAME String result, Some_B4F3A8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B4F3A8_cprint(Some_B4F3A8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B4F3A8__is(STACK_FRAME void* this);
Some_B4F3A8 Some_B4F3A8__as(STACK_FRAME void *this);

void Some_B4F3A8_apply(STACK_FRAME Some_B4F3A8 this, HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B4F3A8", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api));
}