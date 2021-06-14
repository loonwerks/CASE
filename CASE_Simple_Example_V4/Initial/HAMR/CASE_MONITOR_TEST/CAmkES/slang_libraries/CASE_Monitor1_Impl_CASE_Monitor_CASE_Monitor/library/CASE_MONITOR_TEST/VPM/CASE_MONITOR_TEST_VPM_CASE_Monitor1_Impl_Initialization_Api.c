#include <all.h>

// CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api

B CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__eq(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->Observed_Id, other->Observed_Id)) return F;
  if (Z__ne(this->Suspect_Traffic_Out_Id, other->Suspect_Traffic_Out_Id)) return F;
  return T;
}

B CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__ne(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api other);

void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_string_(STACK_FRAME String result, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("CASE_Monitor1_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Suspect_Traffic_Out_Id);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_cprint(CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Monitor1_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Suspect_Traffic_Out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__is(STACK_FRAME void* this);
CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__as(STACK_FRAME void *this);

void CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_apply(STACK_FRAME CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, Z id, Z Observed_Id, Z Suspect_Traffic_Out_Id) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->Observed_Id = Observed_Id;
  this->Suspect_Traffic_Out_Id = Suspect_Traffic_Out_Id;
}