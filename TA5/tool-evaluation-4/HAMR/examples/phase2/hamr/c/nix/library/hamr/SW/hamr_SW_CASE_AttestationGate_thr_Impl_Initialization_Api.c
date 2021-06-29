#include <all.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api

B hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api__eq(hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_in_Id, other->AutomationRequest_in_Id)) return F;
  if (Z__ne(this->AutomationRequest_out_UXAS_Id, other->AutomationRequest_out_UXAS_Id)) return F;
  if (Z__ne(this->AutomationRequest_out_MON_REQ_Id, other->AutomationRequest_out_MON_REQ_Id)) return F;
  if (Z__ne(this->OperatingRegion_in_Id, other->OperatingRegion_in_Id)) return F;
  if (Z__ne(this->OperatingRegion_out_Id, other->OperatingRegion_out_Id)) return F;
  if (Z__ne(this->LineSearchTask_in_Id, other->LineSearchTask_in_Id)) return F;
  if (Z__ne(this->LineSearchTask_out_Id, other->LineSearchTask_out_Id)) return F;
  return T;
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api__ne(hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api this, hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api other);

void hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("CASE_AttestationGate_thr_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_out_UXAS_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_out_MON_REQ_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_out_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_AttestationGate_thr_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_out_UXAS_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_out_MON_REQ_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api this, Z id, Z trusted_ids_Id, Z AutomationRequest_in_Id, Z AutomationRequest_out_UXAS_Id, Z AutomationRequest_out_MON_REQ_Id, Z OperatingRegion_in_Id, Z OperatingRegion_out_Id, Z LineSearchTask_in_Id, Z LineSearchTask_out_Id) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_Api.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_in_Id = AutomationRequest_in_Id;
  this->AutomationRequest_out_UXAS_Id = AutomationRequest_out_UXAS_Id;
  this->AutomationRequest_out_MON_REQ_Id = AutomationRequest_out_MON_REQ_Id;
  this->OperatingRegion_in_Id = OperatingRegion_in_Id;
  this->OperatingRegion_out_Id = OperatingRegion_out_Id;
  this->LineSearchTask_in_Id = LineSearchTask_in_Id;
  this->LineSearchTask_out_Id = LineSearchTask_out_Id;
}