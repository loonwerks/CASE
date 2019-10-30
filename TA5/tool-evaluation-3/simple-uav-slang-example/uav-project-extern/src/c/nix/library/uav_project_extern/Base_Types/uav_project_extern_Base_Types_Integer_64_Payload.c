#include <all.h>

// uav_project_extern.Base_Types.Integer_64_Payload

B uav_project_extern_Base_Types_Integer_64_Payload__eq(uav_project_extern_Base_Types_Integer_64_Payload this, uav_project_extern_Base_Types_Integer_64_Payload other) {
  if (S64__ne(this->value, other->value)) return F;
  return T;
}

B uav_project_extern_Base_Types_Integer_64_Payload__ne(uav_project_extern_Base_Types_Integer_64_Payload this, uav_project_extern_Base_Types_Integer_64_Payload other);

void uav_project_extern_Base_Types_Integer_64_Payload_string_(STACK_FRAME String result, uav_project_extern_Base_Types_Integer_64_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "uav_project_extern.Base_Types.Integer_64_Payload", "string", 0);
  String_string_(SF result, string("Integer_64_Payload("));
  S64_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_Base_Types_Integer_64_Payload_cprint(uav_project_extern_Base_Types_Integer_64_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_64_Payload("), isOut);
  S64_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_Base_Types_Integer_64_Payload__is(STACK_FRAME void* this);
uav_project_extern_Base_Types_Integer_64_Payload uav_project_extern_Base_Types_Integer_64_Payload__as(STACK_FRAME void *this);

void uav_project_extern_Base_Types_Integer_64_Payload_apply(STACK_FRAME uav_project_extern_Base_Types_Integer_64_Payload this, S64 value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "uav_project_extern.Base_Types.Integer_64_Payload", "apply", 0);
  this->value = value;
}