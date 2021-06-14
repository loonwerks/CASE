#include <all.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]

B Some_9E368A__eq(Some_9E368A this, Some_9E368A other) {
  if (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_9E368A__ne(Some_9E368A this, Some_9E368A other);

void Some_9E368A_string_(STACK_FRAME String result, Some_9E368A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_9E368A_cprint(Some_9E368A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_9E368A__is(STACK_FRAME void* this);
Some_9E368A Some_9E368A__as(STACK_FRAME void *this);

void Some_9E368A_apply(STACK_FRAME Some_9E368A this, HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_9E368A", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api));
}