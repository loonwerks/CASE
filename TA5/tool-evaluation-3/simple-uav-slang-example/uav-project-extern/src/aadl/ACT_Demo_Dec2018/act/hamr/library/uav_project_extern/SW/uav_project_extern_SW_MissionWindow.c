#include <all.h>

// uav_project_extern.SW.MissionWindow

B uav_project_extern_SW_MissionWindow__eq(uav_project_extern_SW_MissionWindow this, uav_project_extern_SW_MissionWindow other) {
  if (IS_83A978__ne((IS_83A978) &this->value, (IS_83A978) &other->value)) return F;
  return T;
}

B uav_project_extern_SW_MissionWindow__ne(uav_project_extern_SW_MissionWindow this, uav_project_extern_SW_MissionWindow other);

void uav_project_extern_SW_MissionWindow_string_(STACK_FRAME String result, uav_project_extern_SW_MissionWindow this) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "uav_project_extern.SW.MissionWindow", "string", 0);
  String_string_(SF result, string("MissionWindow("));
  IS_83A978_string_(SF result, (IS_83A978) &this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_MissionWindow_cprint(uav_project_extern_SW_MissionWindow this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MissionWindow("), isOut);
  IS_83A978_cprint((IS_83A978) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_MissionWindow__is(STACK_FRAME void* this);
uav_project_extern_SW_MissionWindow uav_project_extern_SW_MissionWindow__as(STACK_FRAME void *this);

void uav_project_extern_SW_MissionWindow_apply(STACK_FRAME uav_project_extern_SW_MissionWindow this, IS_83A978 value) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "uav_project_extern.SW.MissionWindow", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_83A978));
}