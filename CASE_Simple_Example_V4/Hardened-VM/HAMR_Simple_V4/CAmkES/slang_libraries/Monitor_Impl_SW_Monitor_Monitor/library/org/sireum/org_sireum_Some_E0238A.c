#include <all.h>

// Some[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]

B Some_E0238A__eq(Some_E0238A this, Some_E0238A other) {
  if (HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_E0238A__ne(Some_E0238A this, Some_E0238A other);

void Some_E0238A_string_(STACK_FRAME String result, Some_E0238A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E0238A_cprint(Some_E0238A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E0238A__is(STACK_FRAME void* this);
Some_E0238A Some_E0238A__as(STACK_FRAME void *this);

void Some_E0238A_apply(STACK_FRAME Some_E0238A this, HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E0238A", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api));
}