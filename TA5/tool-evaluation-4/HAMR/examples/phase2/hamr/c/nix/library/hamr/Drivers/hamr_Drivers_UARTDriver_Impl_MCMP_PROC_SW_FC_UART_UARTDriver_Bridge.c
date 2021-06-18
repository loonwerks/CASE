#include <all.h>

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_initialized_ = F;

union Option_21F455 _hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api;
union Option_AE3831 _hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api;

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init(STACK_FRAME_ONLY) {
  if (hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_initialized_) return;
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge", "<init>", 0);
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init_c_initialization_api(SF_LAST);
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init_c_operational_api(SF_LAST);
}

Option_21F455 hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init(CALLER_LAST);
  return (Option_21F455) &_hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api;
}

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api_a(STACK_FRAME Option_21F455 p_c_initialization_api) {
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init(CALLER_LAST);
  Type_assign(&_hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_21F455));
}

Option_AE3831 hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init(CALLER_LAST);
  return (Option_AE3831) &_hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api;
}

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api_a(STACK_FRAME Option_AE3831 p_c_operational_api) {
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init(CALLER_LAST);
  Type_assign(&_hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_AE3831));
}

// hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge__eq(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge this, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->recv_data, (art_Port_45E54D) &other->recv_data)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->MissionCommand, (art_Port_45E54D) &other->MissionCommand)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->send_data, (art_Port_45E54D) &other->send_data)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AirVehicleState_WPM, (art_Port_45E54D) &other->AirVehicleState_WPM)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AirVehicleState_UXAS, (art_Port_45E54D) &other->AirVehicleState_UXAS)) return F;
  return T;
}

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge__ne(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge this, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge other);

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_string_(STACK_FRAME String result, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge", "string", 0);
  String_string_(SF result, string("UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->recv_data);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->MissionCommand);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->send_data);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AirVehicleState_WPM);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AirVehicleState_UXAS);
  String_string_(SF result, string(")"));
}

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_cprint(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->recv_data, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->MissionCommand, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->send_data, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AirVehicleState_WPM, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AirVehicleState_UXAS, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge__is(STACK_FRAME void* this);
hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge__as(STACK_FRAME void *this);

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_apply(STACK_FRAME hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D recv_data, art_Port_45E54D MissionCommand, art_Port_45E54D send_data, art_Port_45E54D AirVehicleState_WPM, art_Port_45E54D AirVehicleState_UXAS) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.scala", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->recv_data, recv_data, sizeof(struct art_Port_45E54D));
  Type_assign(&this->MissionCommand, MissionCommand, sizeof(struct art_Port_45E54D));
  Type_assign(&this->send_data, send_data, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AirVehicleState_WPM, AirVehicleState_WPM, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AirVehicleState_UXAS, AirVehicleState_UXAS, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(25);
    STATIC_ASSERT(5 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 5;
    IS_820232_up(&t_1, 0, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_recv_data_(this));
    IS_820232_up(&t_1, 1, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(this));
    IS_820232_up(&t_1, 2, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_send_data_(this));
    IS_820232_up(&t_1, 3, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(this));
    IS_820232_up(&t_1, 4, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 2;
    IS_820232_up(&t_4, 0, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_recv_data_(this));
    IS_820232_up(&t_4, 1, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(this));
    STATIC_ASSERT(3 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 3;
    IS_820232_up(&t_5, 0, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_send_data_(this));
    IS_820232_up(&t_5, 1, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(this));
    IS_820232_up(&t_5, 2, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(44);
    {

      sfUpdateLoc(45);
      hamr_Drivers_UARTDriver_Impl_Initialization_Api api;
      DeclNewhamr_Drivers_UARTDriver_Impl_Initialization_Api(t_6);
      hamr_Drivers_UARTDriver_Impl_Initialization_Api_apply(SF &t_6, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_id_(this), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_recv_data_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_send_data_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(this)));
      api = (hamr_Drivers_UARTDriver_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(53);
      {
        DeclNewSome_BAA603(t_7);
        Some_BAA603_apply(SF &t_7, (hamr_Drivers_UARTDriver_Impl_Initialization_Api) api);
        hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api_a(SF (Option_21F455) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct hamr_Drivers_UARTDriver_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(57);
    {

      sfUpdateLoc(58);
      hamr_Drivers_UARTDriver_Impl_Operational_Api api;
      DeclNewhamr_Drivers_UARTDriver_Impl_Operational_Api(t_8);
      hamr_Drivers_UARTDriver_Impl_Operational_Api_apply(SF &t_8, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_id_(this), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_recv_data_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_send_data_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(this)));
      api = (hamr_Drivers_UARTDriver_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(66);
      {
        DeclNewSome_74DA67(t_9);
        Some_74DA67_apply(SF &t_9, (hamr_Drivers_UARTDriver_Impl_Operational_Api) api);
        hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api_a(SF (Option_AE3831) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct hamr_Drivers_UARTDriver_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(71);
    DeclNewhamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints(t_10);
    hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints_apply(SF &t_10, hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_id_(this), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_recv_data_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_send_data_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(this)), art_Port_45E54D_id_(hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(this)), (Option_9AF35E) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_dispatchTriggers_(this), (hamr_Drivers_UARTDriver_Impl_Initialization_Api) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_initialization_api_(this), (hamr_Drivers_UARTDriver_Impl_Operational_Api) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints));
  }
}

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(88);
  DeclNewNone_E7D454(t_0);
  None_E7D454_apply(SF &t_0);
  Type_assign(&_hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_initialization_api, (&t_0), sizeof(struct None_E7D454));
};

void hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(89);
  DeclNewNone_A929A3(t_1);
  None_A929A3_apply(SF &t_1);
  Type_assign(&_hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_c_operational_api, (&t_1), sizeof(struct None_A929A3));
};