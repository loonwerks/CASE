#include <all.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]

B Some_9A9753__eq(Some_9A9753 this, Some_9A9753 other) {
  if (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api__ne((CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value, (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_9A9753__ne(Some_9A9753 this, Some_9A9753 other);

void Some_9A9753_string_(STACK_FRAME String result, Some_9A9753 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_9A9753_cprint(Some_9A9753 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api_cprint((CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_9A9753__is(STACK_FRAME void* this);
Some_9A9753 Some_9A9753__as(STACK_FRAME void *this);

void Some_9A9753_apply(STACK_FRAME Some_9A9753 this, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_9A9753", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api));
}