#include <all.h>

// Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]

B Some_9DE0EF__eq(Some_9DE0EF this, Some_9DE0EF other) {
  if (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_9DE0EF__ne(Some_9DE0EF this, Some_9DE0EF other);

void Some_9DE0EF_string_(STACK_FRAME String result, Some_9DE0EF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_9DE0EF_cprint(Some_9DE0EF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_9DE0EF__is(STACK_FRAME void* this);
Some_9DE0EF Some_9DE0EF__as(STACK_FRAME void *this);

void Some_9DE0EF_apply(STACK_FRAME Some_9DE0EF this, HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_9DE0EF", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api));
}