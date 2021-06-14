#include <all.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]

B Some_CBF40F__eq(Some_CBF40F this, Some_CBF40F other) {
  if (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api__ne((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_CBF40F__ne(Some_CBF40F this, Some_CBF40F other);

void Some_CBF40F_string_(STACK_FRAME String result, Some_CBF40F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_CBF40F_cprint(Some_CBF40F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_cprint((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_CBF40F__is(STACK_FRAME void* this);
Some_CBF40F Some_CBF40F__as(STACK_FRAME void *this);

void Some_CBF40F_apply(STACK_FRAME Some_CBF40F this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_CBF40F", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api));
}