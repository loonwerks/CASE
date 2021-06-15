#include <all.h>

// Some[HAMR.SW.AttestationGate_Impl_Initialization_Api]

B Some_925053__eq(Some_925053 this, Some_925053 other) {
  if (HAMR_SW_AttestationGate_Impl_Initialization_Api__ne((HAMR_SW_AttestationGate_Impl_Initialization_Api) &this->value, (HAMR_SW_AttestationGate_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_925053__ne(Some_925053 this, Some_925053 other);

void Some_925053_string_(STACK_FRAME String result, Some_925053 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_AttestationGate_Impl_Initialization_Api_string_(SF result, (HAMR_SW_AttestationGate_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_925053_cprint(Some_925053 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_AttestationGate_Impl_Initialization_Api_cprint((HAMR_SW_AttestationGate_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_925053__is(STACK_FRAME void* this);
Some_925053 Some_925053__as(STACK_FRAME void *this);

void Some_925053_apply(STACK_FRAME Some_925053 this, HAMR_SW_AttestationGate_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_925053", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_AttestationGate_Impl_Initialization_Api));
}