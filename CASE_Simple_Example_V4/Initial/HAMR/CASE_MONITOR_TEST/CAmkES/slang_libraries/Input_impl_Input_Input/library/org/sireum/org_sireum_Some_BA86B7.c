#include <all.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]

B Some_BA86B7__eq(Some_BA86B7 this, Some_BA86B7 other) {
  if (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api__ne((CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value, (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_BA86B7__ne(Some_BA86B7 this, Some_BA86B7 other);

void Some_BA86B7_string_(STACK_FRAME String result, Some_BA86B7 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_string_(SF result, (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_BA86B7_cprint(Some_BA86B7 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_cprint((CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_BA86B7__is(STACK_FRAME void* this);
Some_BA86B7 Some_BA86B7__as(STACK_FRAME void *this);

void Some_BA86B7_apply(STACK_FRAME Some_BA86B7 this, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_BA86B7", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api));
}