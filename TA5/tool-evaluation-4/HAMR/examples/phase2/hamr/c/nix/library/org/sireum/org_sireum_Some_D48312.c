#include <all.h>

// Some[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]

B Some_D48312__eq(Some_D48312 this, Some_D48312 other) {
  if (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api__ne((hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &this->value, (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_D48312__ne(Some_D48312 this, Some_D48312 other);

void Some_D48312_string_(STACK_FRAME String result, Some_D48312 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_D48312_cprint(Some_D48312 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_cprint((hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_D48312__is(STACK_FRAME void* this);
Some_D48312 Some_D48312__as(STACK_FRAME void *this);

void Some_D48312_apply(STACK_FRAME Some_D48312 this, hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_D48312", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api));
}