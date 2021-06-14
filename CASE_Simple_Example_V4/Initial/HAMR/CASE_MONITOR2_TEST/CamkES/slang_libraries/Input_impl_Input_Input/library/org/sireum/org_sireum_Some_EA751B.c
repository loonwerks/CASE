#include <all.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]

B Some_EA751B__eq(Some_EA751B this, Some_EA751B other) {
  if (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api__ne((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_EA751B__ne(Some_EA751B this, Some_EA751B other);

void Some_EA751B_string_(STACK_FRAME String result, Some_EA751B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_EA751B_cprint(Some_EA751B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_cprint((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_EA751B__is(STACK_FRAME void* this);
Some_EA751B Some_EA751B__as(STACK_FRAME void *this);

void Some_EA751B_apply(STACK_FRAME Some_EA751B this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_EA751B", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api));
}