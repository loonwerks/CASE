#include <all.h>

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_initialized_ = F;

union Option_F157C7 _HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api;
union Option_8A9C20 _HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api;

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_initialized_) return;
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge", "<init>", 0);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init_c_initialization_api(SF_LAST);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init_c_operational_api(SF_LAST);
}

Option_F157C7 HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init(CALLER_LAST);
  return (Option_F157C7) &_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api;
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api_a(STACK_FRAME Option_F157C7 p_c_initialization_api) {
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_F157C7));
}

Option_8A9C20 HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init(CALLER_LAST);
  return (Option_8A9C20) &_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api;
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api_a(STACK_FRAME Option_8A9C20 p_c_operational_api) {
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_8A9C20));
}

// HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge__eq(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->MissionCommand, (art_Port_45E54D) &other->MissionCommand)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AttestationRequest, (art_Port_45E54D) &other->AttestationRequest)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AttestationResponse, (art_Port_45E54D) &other->AttestationResponse)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AttestationTesterResponse, (art_Port_45E54D) &other->AttestationTesterResponse)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AttestationTesterRequest, (art_Port_45E54D) &other->AttestationTesterRequest)) return F;
  return T;
}

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge__ne(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge other);

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge", "string", 0);
  String_string_(SF result, string("RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->MissionCommand);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AttestationRequest);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AttestationResponse);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AttestationTesterResponse);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AttestationTesterRequest);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_cprint(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->MissionCommand, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AttestationRequest, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AttestationResponse, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AttestationTesterResponse, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AttestationTesterRequest, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_apply(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D MissionCommand, art_Port_45E54D AttestationRequest, art_Port_45E54D AttestationResponse, art_Port_45E54D AttestationTesterResponse, art_Port_45E54D AttestationTesterRequest) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->MissionCommand, MissionCommand, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AttestationRequest, AttestationRequest, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AttestationResponse, AttestationResponse, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AttestationTesterResponse, AttestationTesterResponse, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AttestationTesterRequest, AttestationTesterRequest, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(25);
    STATIC_ASSERT(5 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 5;
    IS_820232_up(&t_1, 0, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_MissionCommand_(this));
    IS_820232_up(&t_1, 1, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationRequest_(this));
    IS_820232_up(&t_1, 2, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationResponse_(this));
    IS_820232_up(&t_1, 3, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterResponse_(this));
    IS_820232_up(&t_1, 4, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterRequest_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 2;
    IS_820232_up(&t_4, 0, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationRequest_(this));
    IS_820232_up(&t_4, 1, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterResponse_(this));
    STATIC_ASSERT(3 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 3;
    IS_820232_up(&t_5, 0, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_MissionCommand_(this));
    IS_820232_up(&t_5, 1, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationResponse_(this));
    IS_820232_up(&t_5, 2, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterRequest_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(44);
    {

      sfUpdateLoc(45);
      HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api api;
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_6);
      HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api_apply(SF &t_6, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationRequest_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationResponse_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterResponse_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterRequest_(this)));
      api = (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(53);
      {
        DeclNewSome_3030EA(t_7);
        Some_3030EA_apply(SF &t_7, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) api);
        HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api_a(SF (Option_F157C7) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(57);
    {

      sfUpdateLoc(58);
      HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api api;
      DeclNewHAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api(t_8);
      HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_apply(SF &t_8, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationRequest_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationResponse_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterResponse_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterRequest_(this)));
      api = (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(66);
      {
        DeclNewSome_E10DBF(t_9);
        Some_E10DBF_apply(SF &t_9, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) api);
        HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api_a(SF (Option_8A9C20) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(71);
    DeclNewHAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints(t_10);
    HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_apply(SF &t_10, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationRequest_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationResponse_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterResponse_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_AttestationTesterRequest_(this)), (Option_9AF35E) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_dispatchTriggers_(this), (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_initialization_api_(this), (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints));
  }
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(88);
  DeclNewNone_830D4E(t_0);
  None_830D4E_apply(SF &t_0);
  Type_assign(&_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_initialization_api, (&t_0), sizeof(struct None_830D4E));
};

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(89);
  DeclNewNone_29B833(t_1);
  None_29B833_apply(SF &t_1);
  Type_assign(&_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_c_operational_api, (&t_1), sizeof(struct None_29B833));
};