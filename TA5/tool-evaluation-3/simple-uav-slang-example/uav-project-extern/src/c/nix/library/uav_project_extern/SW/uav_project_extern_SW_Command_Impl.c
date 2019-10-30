#include <all.h>

// uav_project_extern.SW.Command_Impl

B uav_project_extern_SW_Command_Impl__eq(uav_project_extern_SW_Command_Impl this, uav_project_extern_SW_Command_Impl other) {
  if (uav_project_extern_SW_Map__ne((uav_project_extern_SW_Map) &this->Map, (uav_project_extern_SW_Map) &other->Map)) return F;
  if (uav_project_extern_SW_FlightPattern__ne(this->Pattern, other->Pattern)) return F;
  if (B__ne(this->HMAC, other->HMAC)) return F;
  return T;
}

B uav_project_extern_SW_Command_Impl__ne(uav_project_extern_SW_Command_Impl this, uav_project_extern_SW_Command_Impl other);

void uav_project_extern_SW_Command_Impl_string_(STACK_FRAME String result, uav_project_extern_SW_Command_Impl this) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "uav_project_extern.SW.Command_Impl", "string", 0);
  String_string_(SF result, string("Command_Impl("));
  String sep = string(", ");
  uav_project_extern_SW_Map_string_(SF result, (uav_project_extern_SW_Map) &this->Map);
  String_string_(SF result, sep);
  uav_project_extern_SW_FlightPattern_string_(SF result, this->Pattern);
  String_string_(SF result, sep);
  B_string_(SF result, this->HMAC);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_Command_Impl_cprint(uav_project_extern_SW_Command_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Command_Impl("), isOut);
  String sep = string(", ");
  uav_project_extern_SW_Map_cprint((uav_project_extern_SW_Map) &this->Map, isOut);
  String_cprint(sep, isOut);
  uav_project_extern_SW_FlightPattern_cprint(this->Pattern, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->HMAC, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_Command_Impl__is(STACK_FRAME void* this);
uav_project_extern_SW_Command_Impl uav_project_extern_SW_Command_Impl__as(STACK_FRAME void *this);

void uav_project_extern_SW_Command_Impl_apply(STACK_FRAME uav_project_extern_SW_Command_Impl this, uav_project_extern_SW_Map Map, uav_project_extern_SW_FlightPattern Pattern, B HMAC) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "uav_project_extern.SW.Command_Impl", "apply", 0);
  Type_assign(&this->Map, Map, sizeof(struct uav_project_extern_SW_Map));
  this->Pattern = Pattern;
  this->HMAC = HMAC;
}