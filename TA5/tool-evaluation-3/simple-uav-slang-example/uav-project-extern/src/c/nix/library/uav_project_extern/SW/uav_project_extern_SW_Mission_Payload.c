#include <all.h>

// uav_project_extern.SW.Mission_Payload

B uav_project_extern_SW_Mission_Payload__eq(uav_project_extern_SW_Mission_Payload this, uav_project_extern_SW_Mission_Payload other) {
  if (uav_project_extern_SW_Mission__ne((uav_project_extern_SW_Mission) &this->value, (uav_project_extern_SW_Mission) &other->value)) return F;
  return T;
}

B uav_project_extern_SW_Mission_Payload__ne(uav_project_extern_SW_Mission_Payload this, uav_project_extern_SW_Mission_Payload other);

void uav_project_extern_SW_Mission_Payload_string_(STACK_FRAME String result, uav_project_extern_SW_Mission_Payload this) {
  DeclNewStackFrame(caller, "Mission.scala", "uav_project_extern.SW.Mission_Payload", "string", 0);
  String_string_(SF result, string("Mission_Payload("));
  uav_project_extern_SW_Mission_string_(SF result, (uav_project_extern_SW_Mission) &this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_Mission_Payload_cprint(uav_project_extern_SW_Mission_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Mission_Payload("), isOut);
  uav_project_extern_SW_Mission_cprint((uav_project_extern_SW_Mission) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_Mission_Payload__is(STACK_FRAME void* this);
uav_project_extern_SW_Mission_Payload uav_project_extern_SW_Mission_Payload__as(STACK_FRAME void *this);

void uav_project_extern_SW_Mission_Payload_apply(STACK_FRAME uav_project_extern_SW_Mission_Payload this, uav_project_extern_SW_Mission value) {
  DeclNewStackFrame(caller, "Mission.scala", "uav_project_extern.SW.Mission_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct uav_project_extern_SW_Mission));
}