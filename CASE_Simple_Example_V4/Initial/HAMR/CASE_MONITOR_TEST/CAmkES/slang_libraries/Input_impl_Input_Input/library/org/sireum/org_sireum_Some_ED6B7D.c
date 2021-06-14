#include <all.h>

// Some[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]

B Some_ED6B7D__eq(Some_ED6B7D this, Some_ED6B7D other) {
  if (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api__ne((CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value, (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_ED6B7D__ne(Some_ED6B7D this, Some_ED6B7D other);

void Some_ED6B7D_string_(STACK_FRAME String result, Some_ED6B7D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_string_(SF result, (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_ED6B7D_cprint(Some_ED6B7D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_cprint((CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_ED6B7D__is(STACK_FRAME void* this);
Some_ED6B7D Some_ED6B7D__as(STACK_FRAME void *this);

void Some_ED6B7D_apply(STACK_FRAME Some_ED6B7D this, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_ED6B7D", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api));
}