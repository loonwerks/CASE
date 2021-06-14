#include <all.h>

// Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

B Some_A8BCDF__eq(Some_A8BCDF this, Some_A8BCDF other) {
  if (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__ne((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->value, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_A8BCDF__ne(Some_A8BCDF this, Some_A8BCDF other);

void Some_A8BCDF_string_(STACK_FRAME String result, Some_A8BCDF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_A8BCDF_cprint(Some_A8BCDF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_cprint((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_A8BCDF__is(STACK_FRAME void* this);
Some_A8BCDF Some_A8BCDF__as(STACK_FRAME void *this);

void Some_A8BCDF_apply(STACK_FRAME Some_A8BCDF this, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_A8BCDF", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api));
}