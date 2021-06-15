#include <all.h>

// Some[HAMR.SW.AttestationManager_Impl_Initialization_Api]

B Some_88F02A__eq(Some_88F02A this, Some_88F02A other) {
  if (HAMR_SW_AttestationManager_Impl_Initialization_Api__ne((HAMR_SW_AttestationManager_Impl_Initialization_Api) &this->value, (HAMR_SW_AttestationManager_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_88F02A__ne(Some_88F02A this, Some_88F02A other);

void Some_88F02A_string_(STACK_FRAME String result, Some_88F02A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_AttestationManager_Impl_Initialization_Api_string_(SF result, (HAMR_SW_AttestationManager_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_88F02A_cprint(Some_88F02A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_AttestationManager_Impl_Initialization_Api_cprint((HAMR_SW_AttestationManager_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_88F02A__is(STACK_FRAME void* this);
Some_88F02A Some_88F02A__as(STACK_FRAME void *this);

void Some_88F02A_apply(STACK_FRAME Some_88F02A this, HAMR_SW_AttestationManager_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_88F02A", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_AttestationManager_Impl_Initialization_Api));
}