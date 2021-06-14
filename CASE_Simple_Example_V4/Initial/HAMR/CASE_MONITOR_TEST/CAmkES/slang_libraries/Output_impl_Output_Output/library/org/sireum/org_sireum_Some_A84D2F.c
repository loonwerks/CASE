#include <all.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]

B Some_A84D2F__eq(Some_A84D2F this, Some_A84D2F other) {
  if (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api__ne((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value, (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_A84D2F__ne(Some_A84D2F this, Some_A84D2F other);

void Some_A84D2F_string_(STACK_FRAME String result, Some_A84D2F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api_string_(SF result, (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_A84D2F_cprint(Some_A84D2F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api_cprint((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_A84D2F__is(STACK_FRAME void* this);
Some_A84D2F Some_A84D2F__as(STACK_FRAME void *this);

void Some_A84D2F_apply(STACK_FRAME Some_A84D2F this, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_A84D2F", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api));
}