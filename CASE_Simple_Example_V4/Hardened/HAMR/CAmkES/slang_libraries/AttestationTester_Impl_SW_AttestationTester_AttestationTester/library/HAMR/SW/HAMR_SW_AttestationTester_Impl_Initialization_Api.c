#include <all.h>

// HAMR.SW.AttestationTester_Impl_Initialization_Api

B HAMR_SW_AttestationTester_Impl_Initialization_Api__eq(HAMR_SW_AttestationTester_Impl_Initialization_Api this, HAMR_SW_AttestationTester_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AttestationRequest_Id, other->AttestationRequest_Id)) return F;
  if (Z__ne(this->AttestationResponse_Id, other->AttestationResponse_Id)) return F;
  return T;
}

B HAMR_SW_AttestationTester_Impl_Initialization_Api__ne(HAMR_SW_AttestationTester_Impl_Initialization_Api this, HAMR_SW_AttestationTester_Impl_Initialization_Api other);

void HAMR_SW_AttestationTester_Impl_Initialization_Api_string_(STACK_FRAME String result, HAMR_SW_AttestationTester_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_Api.scala", "HAMR.SW.AttestationTester_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("AttestationTester_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationResponse_Id);
  String_string_(SF result, string(")"));
}

void HAMR_SW_AttestationTester_Impl_Initialization_Api_cprint(HAMR_SW_AttestationTester_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("AttestationTester_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationResponse_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_AttestationTester_Impl_Initialization_Api__is(STACK_FRAME void* this);
HAMR_SW_AttestationTester_Impl_Initialization_Api HAMR_SW_AttestationTester_Impl_Initialization_Api__as(STACK_FRAME void *this);

void HAMR_SW_AttestationTester_Impl_Initialization_Api_apply(STACK_FRAME HAMR_SW_AttestationTester_Impl_Initialization_Api this, Z id, Z AttestationRequest_Id, Z AttestationResponse_Id) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_Api.scala", "HAMR.SW.AttestationTester_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->AttestationRequest_Id = AttestationRequest_Id;
  this->AttestationResponse_Id = AttestationResponse_Id;
}