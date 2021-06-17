#include <all.h>

// hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints__eq(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints other) {
  if (Z__ne(this->UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId, other->UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId)) return F;
  if (Z__ne(this->recv_data_Id, other->recv_data_Id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->send_data_Id, other->send_data_Id)) return F;
  if (Z__ne(this->AirVehicleState_WPM_Id, other->AirVehicleState_WPM_Id)) return F;
  if (Z__ne(this->AirVehicleState_UXAS_Id, other->AirVehicleState_UXAS_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (hamr_Drivers_UARTDriver_Impl_Initialization_Api__ne((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &this->initialization_api, (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (hamr_Drivers_UARTDriver_Impl_Operational_Api__ne((hamr_Drivers_UARTDriver_Impl_Operational_Api) &this->operational_api, (hamr_Drivers_UARTDriver_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints__ne(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints other);

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId);
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
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  hamr_Drivers_UARTDriver_Impl_Initialization_Api_string_(SF result, (hamr_Drivers_UARTDriver_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  hamr_Drivers_UARTDriver_Impl_Operational_Api_string_(SF result, (hamr_Drivers_UARTDriver_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_cprint(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId, isOut);
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
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  hamr_Drivers_UARTDriver_Impl_Initialization_Api_cprint((hamr_Drivers_UARTDriver_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  hamr_Drivers_UARTDriver_Impl_Operational_Api_cprint((hamr_Drivers_UARTDriver_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints__is(STACK_FRAME void* this);
hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints__as(STACK_FRAME void *this);

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this, Z UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId, Z recv_data_Id, Z MissionCommand_Id, Z send_data_Id, Z AirVehicleState_WPM_Id, Z AirVehicleState_UXAS_Id, Option_9AF35E dispatchTriggers, hamr_Drivers_UARTDriver_Impl_Initialization_Api initialization_api, hamr_Drivers_UARTDriver_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints", "apply", 0);
  this->UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId = UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_BridgeId;
  this->recv_data_Id = recv_data_Id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->send_data_Id = send_data_Id;
  this->AirVehicleState_WPM_Id = AirVehicleState_WPM_Id;
  this->AirVehicleState_UXAS_Id = AirVehicleState_UXAS_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct hamr_Drivers_UARTDriver_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct hamr_Drivers_UARTDriver_Impl_Operational_Api));
  {
    sfUpdateLoc(105);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(107);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 2;
    IS_82ABD8_up(&t_1, 0, (Z) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_recv_data_Id_(this));
    IS_82ABD8_up(&t_1, 1, (Z) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_MissionCommand_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(110);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(112);
    STATIC_ASSERT(3 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 3;
    IS_82ABD8_up(&t_3, 0, (Z) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_send_data_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_AirVehicleState_WPM_Id_(this));
    IS_82ABD8_up(&t_3, 2, (Z) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_AirVehicleState_UXAS_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(152);
  {
    hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_initialise(SF (hamr_Drivers_UARTDriver_Impl_Initialization_Api) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(153);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_compute_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(117);
  {
    art_Art_receiveInput(SF (IS_82ABD8) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(120);
  {
    hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_timeTriggered(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(122);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(147);
  {
    hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_finalise(SF (hamr_Drivers_UARTDriver_Impl_Operational_Api) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_operational_api_(this));
  }
}