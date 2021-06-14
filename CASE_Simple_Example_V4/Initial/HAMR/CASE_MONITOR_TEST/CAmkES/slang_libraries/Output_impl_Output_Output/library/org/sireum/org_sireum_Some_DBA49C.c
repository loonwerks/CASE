#include <all.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]

B Some_DBA49C__eq(Some_DBA49C this, Some_DBA49C other) {
  if (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api__ne((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value, (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_DBA49C__ne(Some_DBA49C this, Some_DBA49C other);

void Some_DBA49C_string_(STACK_FRAME String result, Some_DBA49C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api_string_(SF result, (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_DBA49C_cprint(Some_DBA49C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api_cprint((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_DBA49C__is(STACK_FRAME void* this);
Some_DBA49C Some_DBA49C__as(STACK_FRAME void *this);

void Some_DBA49C_apply(STACK_FRAME Some_DBA49C this, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_DBA49C", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api));
}