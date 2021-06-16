#include <all.h>

// HAMR.SW.AttestationGate_Impl_Initialization_Api

B HAMR_SW_AttestationGate_Impl_Initialization_Api__eq(HAMR_SW_AttestationGate_Impl_Initialization_Api this, HAMR_SW_AttestationGate_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->MissionCommand_in_Id, other->MissionCommand_in_Id)) return F;
  if (Z__ne(this->MissionCommand_out_Id, other->MissionCommand_out_Id)) return F;
  if (Z__ne(this->TrustedIds_Id, other->TrustedIds_Id)) return F;
  return T;
}

B HAMR_SW_AttestationGate_Impl_Initialization_Api__ne(HAMR_SW_AttestationGate_Impl_Initialization_Api this, HAMR_SW_AttestationGate_Impl_Initialization_Api other);

void HAMR_SW_AttestationGate_Impl_Initialization_Api_string_(STACK_FRAME String result, HAMR_SW_AttestationGate_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("AttestationGate_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_in_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_out_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->TrustedIds_Id);
  String_string_(SF result, string(")"));
}

void HAMR_SW_AttestationGate_Impl_Initialization_Api_cprint(HAMR_SW_AttestationGate_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("AttestationGate_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_in_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->TrustedIds_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_AttestationGate_Impl_Initialization_Api__is(STACK_FRAME void* this);
HAMR_SW_AttestationGate_Impl_Initialization_Api HAMR_SW_AttestationGate_Impl_Initialization_Api__as(STACK_FRAME void *this);

void HAMR_SW_AttestationGate_Impl_Initialization_Api_apply(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api this, Z id, Z MissionCommand_in_Id, Z MissionCommand_out_Id, Z TrustedIds_Id) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->MissionCommand_in_Id = MissionCommand_in_Id;
  this->MissionCommand_out_Id = MissionCommand_out_Id;
  this->TrustedIds_Id = TrustedIds_Id;
}