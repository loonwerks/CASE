#include <all.h>

// HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api

B HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api__eq(HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api this, HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->FlightPlan_in_Id, other->FlightPlan_in_Id)) return F;
  if (Z__ne(this->FlightPlan_out_Id, other->FlightPlan_out_Id)) return F;
  if (Z__ne(this->Alert_Id, other->Alert_Id)) return F;
  return T;
}

B HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api__ne(HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api this, HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api other);

void HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("Monitor_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->FlightPlan_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->FlightPlan_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Alert_Id);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_cprint(HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Monitor_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->FlightPlan_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->FlightPlan_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Alert_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_apply(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api this, Z id, Z FlightPlan_in_Id, Z FlightPlan_out_Id, Z Alert_Id) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->FlightPlan_in_Id = FlightPlan_in_Id;
  this->FlightPlan_out_Id = FlightPlan_out_Id;
  this->Alert_Id = Alert_Id;
}