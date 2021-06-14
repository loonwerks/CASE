#include <all.h>

// Some[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]

B Some_2C70A4__eq(Some_2C70A4 this, Some_2C70A4 other) {
  if (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api__ne((CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value, (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_2C70A4__ne(Some_2C70A4 this, Some_2C70A4 other);

void Some_2C70A4_string_(STACK_FRAME String result, Some_2C70A4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_2C70A4_cprint(Some_2C70A4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api_cprint((CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2C70A4__is(STACK_FRAME void* this);
Some_2C70A4 Some_2C70A4__as(STACK_FRAME void *this);

void Some_2C70A4_apply(STACK_FRAME Some_2C70A4 this, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2C70A4", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api));
}