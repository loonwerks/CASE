#include <all.h>

// Some[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]

B Some_C9A1C9__eq(Some_C9A1C9 this, Some_C9A1C9 other) {
  if (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api__ne((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_C9A1C9__ne(Some_C9A1C9 this, Some_C9A1C9 other);

void Some_C9A1C9_string_(STACK_FRAME String result, Some_C9A1C9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_C9A1C9_cprint(Some_C9A1C9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C9A1C9__is(STACK_FRAME void* this);
Some_C9A1C9 Some_C9A1C9__as(STACK_FRAME void *this);

void Some_C9A1C9_apply(STACK_FRAME Some_C9A1C9 this, CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C9A1C9", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api));
}