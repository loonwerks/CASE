#include <all.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]

B Some_459F82__eq(Some_459F82 this, Some_459F82 other) {
  if (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api__ne((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value, (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_459F82__ne(Some_459F82 this, Some_459F82 other);

void Some_459F82_string_(STACK_FRAME String result, Some_459F82 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_459F82_cprint(Some_459F82 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_459F82__is(STACK_FRAME void* this);
Some_459F82 Some_459F82__as(STACK_FRAME void *this);

void Some_459F82_apply(STACK_FRAME Some_459F82 this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_459F82", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api));
}