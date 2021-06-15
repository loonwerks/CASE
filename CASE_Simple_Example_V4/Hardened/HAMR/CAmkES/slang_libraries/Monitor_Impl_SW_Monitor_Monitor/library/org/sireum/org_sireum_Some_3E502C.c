#include <all.h>

// Some[HAMR.SW.Monitor_Impl_Operational_Api]

B Some_3E502C__eq(Some_3E502C this, Some_3E502C other) {
  if (HAMR_SW_Monitor_Impl_Operational_Api__ne((HAMR_SW_Monitor_Impl_Operational_Api) &this->value, (HAMR_SW_Monitor_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_3E502C__ne(Some_3E502C this, Some_3E502C other);

void Some_3E502C_string_(STACK_FRAME String result, Some_3E502C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_Monitor_Impl_Operational_Api_string_(SF result, (HAMR_SW_Monitor_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_3E502C_cprint(Some_3E502C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_Monitor_Impl_Operational_Api_cprint((HAMR_SW_Monitor_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_3E502C__is(STACK_FRAME void* this);
Some_3E502C Some_3E502C__as(STACK_FRAME void *this);

void Some_3E502C_apply(STACK_FRAME Some_3E502C this, HAMR_SW_Monitor_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_3E502C", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_Monitor_Impl_Operational_Api));
}