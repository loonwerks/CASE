#include <all.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge.Api

B uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__eq(uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, uav_project_extern_SW_RadioDriver_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_map_out_Id, other->recv_map_out_Id)) return F;
  return T;
}

B uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__ne(uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, uav_project_extern_SW_RadioDriver_Impl_Bridge_Api other);

void uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_string_(STACK_FRAME String result, uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.Api", "string", 0);
  String_string_(SF result, string("Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_map_out_Id);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_cprint(uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__is(STACK_FRAME void* this);
uav_project_extern_SW_RadioDriver_Impl_Bridge_Api uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__as(STACK_FRAME void *this);

void uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_apply(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, Z id, Z recv_map_out_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->recv_map_out_Id = recv_map_out_Id;
}

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(59);
  art_Art_logInfo(SF uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_Api this, uav_project_extern_SW_Command_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.Api", "sendrecv_map_out", 0);

  sfUpdateLoc(54);
  DeclNewuav_project_extern_SW_Command_Impl_Payload(t_0);
  uav_project_extern_SW_Command_Impl_Payload_apply(SF &t_0, (uav_project_extern_SW_Command_Impl) value);
  art_Art_putValue(SF uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_recv_map_out_Id_(this), (art_DataContent) (&t_0));
}