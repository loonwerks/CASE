#include <all.h>

// Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]

B Some_06F7FC__eq(Some_06F7FC this, Some_06F7FC other) {
  if (HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_06F7FC__ne(Some_06F7FC this, Some_06F7FC other);

void Some_06F7FC_string_(STACK_FRAME String result, Some_06F7FC this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_06F7FC_cprint(Some_06F7FC this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_06F7FC__is(STACK_FRAME void* this);
Some_06F7FC Some_06F7FC__as(STACK_FRAME void *this);

void Some_06F7FC_apply(STACK_FRAME Some_06F7FC this, HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_06F7FC", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api));
}