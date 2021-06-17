#include <all.h>

// hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api

B hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->trusted_ids_Id, other->trusted_ids_Id)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  return T;
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api other);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("RadioDriver_Attestation_thr_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->send_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->trusted_ids_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Attestation_thr_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->trusted_ids_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, Z id, Z recv_data_Id, Z send_data_Id, Z trusted_ids_Id, Z AutomationRequest_Id, Z OperatingRegion_Id, Z LineSearchTask_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->recv_data_Id = recv_data_Id;
  this->send_data_Id = send_data_Id;
  this->trusted_ids_Id = trusted_ids_Id;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
}