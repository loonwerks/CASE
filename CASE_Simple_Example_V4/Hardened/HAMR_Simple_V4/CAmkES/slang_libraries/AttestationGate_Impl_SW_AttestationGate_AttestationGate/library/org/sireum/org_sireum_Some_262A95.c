#include <all.h>

// Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]

B Some_262A95__eq(Some_262A95 this, Some_262A95 other) {
  if (HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_262A95__ne(Some_262A95 this, Some_262A95 other);

void Some_262A95_string_(STACK_FRAME String result, Some_262A95 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_262A95_cprint(Some_262A95 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_262A95__is(STACK_FRAME void* this);
Some_262A95 Some_262A95__as(STACK_FRAME void *this);

void Some_262A95_apply(STACK_FRAME Some_262A95 this, HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_262A95", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api));
}