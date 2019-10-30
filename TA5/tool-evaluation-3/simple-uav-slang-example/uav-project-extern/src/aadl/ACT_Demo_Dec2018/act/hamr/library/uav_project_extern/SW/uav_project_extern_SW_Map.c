#include <all.h>

// uav_project_extern.SW.Map

B uav_project_extern_SW_Map__eq(uav_project_extern_SW_Map this, uav_project_extern_SW_Map other) {
  if (IS_83A978__ne((IS_83A978) &this->value, (IS_83A978) &other->value)) return F;
  return T;
}

B uav_project_extern_SW_Map__ne(uav_project_extern_SW_Map this, uav_project_extern_SW_Map other);

void uav_project_extern_SW_Map_string_(STACK_FRAME String result, uav_project_extern_SW_Map this) {
  DeclNewStackFrame(caller, "Map.scala", "uav_project_extern.SW.Map", "string", 0);
  String_string_(SF result, string("Map("));
  IS_83A978_string_(SF result, (IS_83A978) &this->value);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_Map_cprint(uav_project_extern_SW_Map this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Map("), isOut);
  IS_83A978_cprint((IS_83A978) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_Map__is(STACK_FRAME void* this);
uav_project_extern_SW_Map uav_project_extern_SW_Map__as(STACK_FRAME void *this);

void uav_project_extern_SW_Map_apply(STACK_FRAME uav_project_extern_SW_Map this, IS_83A978 value) {
  DeclNewStackFrame(caller, "Map.scala", "uav_project_extern.SW.Map", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_83A978));
}