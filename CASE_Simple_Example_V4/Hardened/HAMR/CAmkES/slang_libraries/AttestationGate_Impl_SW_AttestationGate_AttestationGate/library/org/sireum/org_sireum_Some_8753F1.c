#include <all.h>

// Some[HAMR.SW.AttestationGate_Impl_Operational_Api]

B Some_8753F1__eq(Some_8753F1 this, Some_8753F1 other) {
  if (HAMR_SW_AttestationGate_Impl_Operational_Api__ne((HAMR_SW_AttestationGate_Impl_Operational_Api) &this->value, (HAMR_SW_AttestationGate_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_8753F1__ne(Some_8753F1 this, Some_8753F1 other);

void Some_8753F1_string_(STACK_FRAME String result, Some_8753F1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_AttestationGate_Impl_Operational_Api_string_(SF result, (HAMR_SW_AttestationGate_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_8753F1_cprint(Some_8753F1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_AttestationGate_Impl_Operational_Api_cprint((HAMR_SW_AttestationGate_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_8753F1__is(STACK_FRAME void* this);
Some_8753F1 Some_8753F1__as(STACK_FRAME void *this);

void Some_8753F1_apply(STACK_FRAME Some_8753F1 this, HAMR_SW_AttestationGate_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_8753F1", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_AttestationGate_Impl_Operational_Api));
}