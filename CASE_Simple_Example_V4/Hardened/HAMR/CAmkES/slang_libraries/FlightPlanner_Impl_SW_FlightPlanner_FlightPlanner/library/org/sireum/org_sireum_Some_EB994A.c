#include <all.h>

// Some[HAMR.SW.FlightPlanner_Impl_Operational_Api]

B Some_EB994A__eq(Some_EB994A this, Some_EB994A other) {
  if (HAMR_SW_FlightPlanner_Impl_Operational_Api__ne((HAMR_SW_FlightPlanner_Impl_Operational_Api) &this->value, (HAMR_SW_FlightPlanner_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_EB994A__ne(Some_EB994A this, Some_EB994A other);

void Some_EB994A_string_(STACK_FRAME String result, Some_EB994A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_FlightPlanner_Impl_Operational_Api_string_(SF result, (HAMR_SW_FlightPlanner_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_EB994A_cprint(Some_EB994A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_FlightPlanner_Impl_Operational_Api_cprint((HAMR_SW_FlightPlanner_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_EB994A__is(STACK_FRAME void* this);
Some_EB994A Some_EB994A__as(STACK_FRAME void *this);

void Some_EB994A_apply(STACK_FRAME Some_EB994A this, HAMR_SW_FlightPlanner_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_EB994A", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_FlightPlanner_Impl_Operational_Api));
}