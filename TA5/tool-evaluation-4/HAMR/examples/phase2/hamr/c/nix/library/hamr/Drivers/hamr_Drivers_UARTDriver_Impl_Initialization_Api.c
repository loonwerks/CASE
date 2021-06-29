#include <all.h>

// hamr.Drivers.UARTDriver_Impl_Initialization_Api

B hamr_Drivers_UARTDriver_Impl_Initialization_Api__eq(hamr_Drivers_UARTDriver_Impl_Initialization_Api this, hamr_Drivers_UARTDriver_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->AirVehicleState_WPM_Id, other->AirVehicleState_WPM_Id)) return F;
  if (Z__ne(this->AirVehicleState_UXAS_Id, other->AirVehicleState_UXAS_Id)) return F;
  return T;
}

B hamr_Drivers_UARTDriver_Impl_Initialization_Api__ne(hamr_Drivers_UARTDriver_Impl_Initialization_Api this, hamr_Drivers_UARTDriver_Impl_Initialization_Api other);

void hamr_Drivers_UARTDriver_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("UARTDriver_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->send_data_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_WPM_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_UXAS_Id);
  String_string_(SF result, string(")"));
}

void hamr_Drivers_UARTDriver_Impl_Initialization_Api_cprint(hamr_Drivers_UARTDriver_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UARTDriver_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_data_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_WPM_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_UXAS_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_Drivers_UARTDriver_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_Drivers_UARTDriver_Impl_Initialization_Api hamr_Drivers_UARTDriver_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_Drivers_UARTDriver_Impl_Initialization_Api_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api this, Z id, Z recv_data_Id, Z MissionCommand_Id, Z send_data_Id, Z AirVehicleState_WPM_Id, Z AirVehicleState_UXAS_Id) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Api.scala", "hamr.Drivers.UARTDriver_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->recv_data_Id = recv_data_Id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->send_data_Id = send_data_Id;
  this->AirVehicleState_WPM_Id = AirVehicleState_WPM_Id;
  this->AirVehicleState_UXAS_Id = AirVehicleState_UXAS_Id;
}