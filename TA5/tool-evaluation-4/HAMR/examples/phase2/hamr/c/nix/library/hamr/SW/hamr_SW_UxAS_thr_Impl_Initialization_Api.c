#include <all.h>

// hamr.SW.UxAS_thr_Impl_Initialization_Api

B hamr_SW_UxAS_thr_Impl_Initialization_Api__eq(hamr_SW_UxAS_thr_Impl_Initialization_Api this, hamr_SW_UxAS_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_GEO_Id, other->AutomationResponse_MON_GEO_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_REQ_Id, other->AutomationResponse_MON_REQ_Id)) return F;
  return T;
}

B hamr_SW_UxAS_thr_Impl_Initialization_Api__ne(hamr_SW_UxAS_thr_Impl_Initialization_Api this, hamr_SW_UxAS_thr_Impl_Initialization_Api other);

void hamr_SW_UxAS_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("UxAS_thr_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_GEO_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_REQ_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_UxAS_thr_Impl_Initialization_Api_cprint(hamr_SW_UxAS_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UxAS_thr_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_GEO_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_REQ_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_UxAS_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_UxAS_thr_Impl_Initialization_Api hamr_SW_UxAS_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_UxAS_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api this, Z id, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_MON_GEO_Id, Z AutomationResponse_MON_REQ_Id) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  this->AutomationResponse_MON_GEO_Id = AutomationResponse_MON_GEO_Id;
  this->AutomationResponse_MON_REQ_Id = AutomationResponse_MON_REQ_Id;
}