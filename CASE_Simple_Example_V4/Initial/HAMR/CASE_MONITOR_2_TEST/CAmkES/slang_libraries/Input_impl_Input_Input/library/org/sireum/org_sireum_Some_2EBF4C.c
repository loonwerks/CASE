#include <all.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]

B Some_2EBF4C__eq(Some_2EBF4C this, Some_2EBF4C other) {
  if (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api__ne((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_2EBF4C__ne(Some_2EBF4C this, Some_2EBF4C other);

void Some_2EBF4C_string_(STACK_FRAME String result, Some_2EBF4C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_2EBF4C_cprint(Some_2EBF4C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2EBF4C__is(STACK_FRAME void* this);
Some_2EBF4C Some_2EBF4C__as(STACK_FRAME void *this);

void Some_2EBF4C_apply(STACK_FRAME Some_2EBF4C this, CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2EBF4C", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api));
}