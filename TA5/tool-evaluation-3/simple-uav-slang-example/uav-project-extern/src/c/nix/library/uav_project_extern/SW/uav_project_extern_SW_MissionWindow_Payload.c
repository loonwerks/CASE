#include <all.h>

// uav_project_extern.SW.MissionWindow_Payload

B uav_project_extern_SW_MissionWindow_Payload__eq(uav_project_extern_SW_MissionWindow_Payload this, uav_project_extern_SW_MissionWindow_Payload other) {
  if (uav_project_extern_SW_MissionWindow__ne((uav_project_extern_SW_MissionWindow) &this->value, (uav_project_extern_SW_MissionWindow) &other->value)) return F;
  return T;
}

B uav_project_extern_SW_MissionWindow_Payload__ne(uav_project_extern_SW_MissionWindow_Payload this, uav_project_extern_SW_MissionWindow_Payload other);

void uav_project_extern_SW_MissionWindow_Payload_string_(STACK_FRAME String result, uav_project_extern_SW_MissionWindow_Payload this) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "uav_project_extern.SW.MissionWindow_Payload", "string", 0);
  String_string_(SF result, string("MissionWindow_Payload("));
  uav_project_extern_SW_MissionWindow_string_(SF result, (uav_project_extern_SW_MissionWindow) &this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_MissionWindow_Payload_cprint(uav_project_extern_SW_MissionWindow_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MissionWindow_Payload("), isOut);
  uav_project_extern_SW_MissionWindow_cprint((uav_project_extern_SW_MissionWindow) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_MissionWindow_Payload__is(STACK_FRAME void* this);
uav_project_extern_SW_MissionWindow_Payload uav_project_extern_SW_MissionWindow_Payload__as(STACK_FRAME void *this);

void uav_project_extern_SW_MissionWindow_Payload_apply(STACK_FRAME uav_project_extern_SW_MissionWindow_Payload this, uav_project_extern_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "uav_project_extern.SW.MissionWindow_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct uav_project_extern_SW_MissionWindow));
}