#include <all.h>

// Some[uav_project_extern.SW.Mission]

B Some_C19C7E__eq(Some_C19C7E this, Some_C19C7E other) {
  if (uav_project_extern_SW_Mission__ne((uav_project_extern_SW_Mission) &this->value, (uav_project_extern_SW_Mission) &other->value)) return F;
  return T;
}

B Some_C19C7E__ne(Some_C19C7E this, Some_C19C7E other);

void Some_C19C7E_string_(STACK_FRAME String result, Some_C19C7E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  uav_project_extern_SW_Mission_string_(SF result, (uav_project_extern_SW_Mission) &this->value);
  String_string_(SF result, string(")"));
}

void Some_C19C7E_cprint(Some_C19C7E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  uav_project_extern_SW_Mission_cprint((uav_project_extern_SW_Mission) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C19C7E__is(STACK_FRAME void* this);
Some_C19C7E Some_C19C7E__as(STACK_FRAME void *this);

void Some_C19C7E_apply(STACK_FRAME Some_C19C7E this, uav_project_extern_SW_Mission value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C19C7E", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct uav_project_extern_SW_Mission));
}