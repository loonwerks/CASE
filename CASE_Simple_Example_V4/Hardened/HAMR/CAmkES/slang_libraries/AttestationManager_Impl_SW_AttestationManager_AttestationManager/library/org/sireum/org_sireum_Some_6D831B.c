#include <all.h>

// Some[HAMR.SW.AttestationManager_Impl_Operational_Api]

B Some_6D831B__eq(Some_6D831B this, Some_6D831B other) {
  if (HAMR_SW_AttestationManager_Impl_Operational_Api__ne((HAMR_SW_AttestationManager_Impl_Operational_Api) &this->value, (HAMR_SW_AttestationManager_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_6D831B__ne(Some_6D831B this, Some_6D831B other);

void Some_6D831B_string_(STACK_FRAME String result, Some_6D831B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_AttestationManager_Impl_Operational_Api_string_(SF result, (HAMR_SW_AttestationManager_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6D831B_cprint(Some_6D831B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_AttestationManager_Impl_Operational_Api_cprint((HAMR_SW_AttestationManager_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6D831B__is(STACK_FRAME void* this);
Some_6D831B Some_6D831B__as(STACK_FRAME void *this);

void Some_6D831B_apply(STACK_FRAME Some_6D831B this, HAMR_SW_AttestationManager_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6D831B", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_AttestationManager_Impl_Operational_Api));
}