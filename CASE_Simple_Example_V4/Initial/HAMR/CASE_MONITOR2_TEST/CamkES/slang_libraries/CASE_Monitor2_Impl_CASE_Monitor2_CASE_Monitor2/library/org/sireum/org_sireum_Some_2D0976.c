#include <all.h>

// Some[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]

B Some_2D0976__eq(Some_2D0976 this, Some_2D0976 other) {
  if (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api__ne((CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &this->value, (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_2D0976__ne(Some_2D0976 this, Some_2D0976 other);

void Some_2D0976_string_(STACK_FRAME String result, Some_2D0976 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_2D0976_cprint(Some_2D0976 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_cprint((CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2D0976__is(STACK_FRAME void* this);
Some_2D0976 Some_2D0976__as(STACK_FRAME void *this);

void Some_2D0976_apply(STACK_FRAME Some_2D0976 this, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2D0976", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api));
}