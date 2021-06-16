#include <all.h>

// Some[HAMR.SW.Monitor_Impl_Initialization_Api]

B Some_6EC2CA__eq(Some_6EC2CA this, Some_6EC2CA other) {
  if (HAMR_SW_Monitor_Impl_Initialization_Api__ne((HAMR_SW_Monitor_Impl_Initialization_Api) &this->value, (HAMR_SW_Monitor_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_6EC2CA__ne(Some_6EC2CA this, Some_6EC2CA other);

void Some_6EC2CA_string_(STACK_FRAME String result, Some_6EC2CA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_Monitor_Impl_Initialization_Api_string_(SF result, (HAMR_SW_Monitor_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6EC2CA_cprint(Some_6EC2CA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_Monitor_Impl_Initialization_Api_cprint((HAMR_SW_Monitor_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6EC2CA__is(STACK_FRAME void* this);
Some_6EC2CA Some_6EC2CA__as(STACK_FRAME void *this);

void Some_6EC2CA_apply(STACK_FRAME Some_6EC2CA this, HAMR_SW_Monitor_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6EC2CA", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_Monitor_Impl_Initialization_Api));
}