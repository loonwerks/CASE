#include <all.h>

// CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api

B CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api__eq(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->Observed_Id, other->Observed_Id)) return F;
  return T;
}

B CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api__ne(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api other);

void CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_string_(STACK_FRAME String result, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api this) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api", "string", 0);
  String_string_(SF result, string("Input_impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Observed_Id);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_cprint(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Input_impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Observed_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api__is(STACK_FRAME void* this);
CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api__as(STACK_FRAME void *this);

void CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_apply(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api this, Z id, Z Observed_Id) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api", "apply", 0);
  this->id = id;
  this->Observed_Id = Observed_Id;
}