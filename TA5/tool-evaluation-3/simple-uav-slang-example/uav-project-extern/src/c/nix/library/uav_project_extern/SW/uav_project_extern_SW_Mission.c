#include <all.h>

// uav_project_extern.SW.Mission

B uav_project_extern_SW_Mission__eq(uav_project_extern_SW_Mission this, uav_project_extern_SW_Mission other) {
  if (IS_83A978__ne((IS_83A978) &this->value, (IS_83A978) &other->value)) return F;
  return T;
}

B uav_project_extern_SW_Mission__ne(uav_project_extern_SW_Mission this, uav_project_extern_SW_Mission other);

void uav_project_extern_SW_Mission_string_(STACK_FRAME String result, uav_project_extern_SW_Mission this) {
  DeclNewStackFrame(caller, "Mission.scala", "uav_project_extern.SW.Mission", "string", 0);
  String_string_(SF result, string("Mission("));
  IS_83A978_string_(SF result, (IS_83A978) &this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_Mission_cprint(uav_project_extern_SW_Mission this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Mission("), isOut);
  IS_83A978_cprint((IS_83A978) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_Mission__is(STACK_FRAME void* this);
uav_project_extern_SW_Mission uav_project_extern_SW_Mission__as(STACK_FRAME void *this);

void uav_project_extern_SW_Mission_apply(STACK_FRAME uav_project_extern_SW_Mission this, IS_83A978 value) {
  DeclNewStackFrame(caller, "Mission.scala", "uav_project_extern.SW.Mission", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_83A978));
}