#include <all.h>

// uav_project_extern.SW.Command_Impl_Payload

B uav_project_extern_SW_Command_Impl_Payload__eq(uav_project_extern_SW_Command_Impl_Payload this, uav_project_extern_SW_Command_Impl_Payload other) {
  if (uav_project_extern_SW_Command_Impl__ne((uav_project_extern_SW_Command_Impl) &this->value, (uav_project_extern_SW_Command_Impl) &other->value)) return F;
  return T;
}

B uav_project_extern_SW_Command_Impl_Payload__ne(uav_project_extern_SW_Command_Impl_Payload this, uav_project_extern_SW_Command_Impl_Payload other);

void uav_project_extern_SW_Command_Impl_Payload_string_(STACK_FRAME String result, uav_project_extern_SW_Command_Impl_Payload this) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "uav_project_extern.SW.Command_Impl_Payload", "string", 0);
  String_string_(SF result, string("Command_Impl_Payload("));
  uav_project_extern_SW_Command_Impl_string_(SF result, (uav_project_extern_SW_Command_Impl) &this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_Command_Impl_Payload_cprint(uav_project_extern_SW_Command_Impl_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Command_Impl_Payload("), isOut);
  uav_project_extern_SW_Command_Impl_cprint((uav_project_extern_SW_Command_Impl) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_Command_Impl_Payload__is(STACK_FRAME void* this);
uav_project_extern_SW_Command_Impl_Payload uav_project_extern_SW_Command_Impl_Payload__as(STACK_FRAME void *this);

void uav_project_extern_SW_Command_Impl_Payload_apply(STACK_FRAME uav_project_extern_SW_Command_Impl_Payload this, uav_project_extern_SW_Command_Impl value) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "uav_project_extern.SW.Command_Impl_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct uav_project_extern_SW_Command_Impl));
}