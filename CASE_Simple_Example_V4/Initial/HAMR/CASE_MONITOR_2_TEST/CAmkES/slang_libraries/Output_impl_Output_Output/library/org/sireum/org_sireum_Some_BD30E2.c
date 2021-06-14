#include <all.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]

B Some_BD30E2__eq(Some_BD30E2 this, Some_BD30E2 other) {
  if (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api__ne((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value, (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_BD30E2__ne(Some_BD30E2 this, Some_BD30E2 other);

void Some_BD30E2_string_(STACK_FRAME String result, Some_BD30E2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_BD30E2_cprint(Some_BD30E2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_BD30E2__is(STACK_FRAME void* this);
Some_BD30E2 Some_BD30E2__as(STACK_FRAME void *this);

void Some_BD30E2_apply(STACK_FRAME Some_BD30E2 this, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_BD30E2", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api));
}