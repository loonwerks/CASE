#include <all.h>

B HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_initialized_ = F;

union Option_96FA67 _HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api;
union Option_75F258 _HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api;

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init(STACK_FRAME_ONLY) {
  if (HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_initialized_) return;
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge", "<init>", 0);
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init_c_initialization_api(SF_LAST);
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init_c_operational_api(SF_LAST);
}

Option_96FA67 HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init(CALLER_LAST);
  return (Option_96FA67) &_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api;
}

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api_a(STACK_FRAME Option_96FA67 p_c_initialization_api) {
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_96FA67));
}

Option_75F258 HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init(CALLER_LAST);
  return (Option_75F258) &_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api;
}

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api_a(STACK_FRAME Option_75F258 p_c_operational_api) {
  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_75F258));
}

// HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge

B HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge__eq(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge this, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AttestationRequest, (art_Port_45E54D) &other->AttestationRequest)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AttestationResponse, (art_Port_45E54D) &other->AttestationResponse)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->TrustedIds, (art_Port_45E54D) &other->TrustedIds)) return F;
  return T;
}

B HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge__ne(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge this, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge other);

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_string_(STACK_FRAME String result, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge this) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge", "string", 0);
  String_string_(SF result, string("AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AttestationRequest);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AttestationResponse);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->TrustedIds);
  String_string_(SF result, string(")"));
}

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_cprint(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AttestationRequest, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AttestationResponse, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->TrustedIds, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge__is(STACK_FRAME void* this);
HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge__as(STACK_FRAME void *this);

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_apply(STACK_FRAME HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D AttestationRequest, art_Port_45E54D AttestationResponse, art_Port_45E54D TrustedIds) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->AttestationRequest, AttestationRequest, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AttestationResponse, AttestationResponse, sizeof(struct art_Port_45E54D));
  Type_assign(&this->TrustedIds, TrustedIds, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(23);
    STATIC_ASSERT(3 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 3;
    IS_820232_up(&t_1, 0, (art_UPort) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationRequest_(this));
    IS_820232_up(&t_1, 1, (art_UPort) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationResponse_(this));
    IS_820232_up(&t_1, 2, (art_UPort) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_TrustedIds_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationResponse_(this));
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 2;
    IS_820232_up(&t_5, 0, (art_UPort) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationRequest_(this));
    IS_820232_up(&t_5, 1, (art_UPort) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_TrustedIds_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(38);
    {

      sfUpdateLoc(39);
      HAMR_SW_AttestationManager_Impl_Initialization_Api api;
      DeclNewHAMR_SW_AttestationManager_Impl_Initialization_Api(t_6);
      HAMR_SW_AttestationManager_Impl_Initialization_Api_apply(SF &t_6, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_id_(this), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationRequest_(this)), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationResponse_(this)), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_TrustedIds_(this)));
      api = (HAMR_SW_AttestationManager_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(45);
      {
        DeclNewSome_88F02A(t_7);
        Some_88F02A_apply(SF &t_7, (HAMR_SW_AttestationManager_Impl_Initialization_Api) api);
        HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api_a(SF (Option_96FA67) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct HAMR_SW_AttestationManager_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(49);
    {

      sfUpdateLoc(50);
      HAMR_SW_AttestationManager_Impl_Operational_Api api;
      DeclNewHAMR_SW_AttestationManager_Impl_Operational_Api(t_8);
      HAMR_SW_AttestationManager_Impl_Operational_Api_apply(SF &t_8, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_id_(this), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationRequest_(this)), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationResponse_(this)), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_TrustedIds_(this)));
      api = (HAMR_SW_AttestationManager_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(56);
      {
        DeclNewSome_6D831B(t_9);
        Some_6D831B_apply(SF &t_9, (HAMR_SW_AttestationManager_Impl_Operational_Api) api);
        HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api_a(SF (Option_75F258) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct HAMR_SW_AttestationManager_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(61);
    DeclNewHAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints(t_10);
    HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_apply(SF &t_10, HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_id_(this), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationRequest_(this)), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_AttestationResponse_(this)), art_Port_45E54D_id_(HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_TrustedIds_(this)), (Option_9AF35E) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_dispatchTriggers_(this), (HAMR_SW_AttestationManager_Impl_Initialization_Api) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_initialization_api_(this), (HAMR_SW_AttestationManager_Impl_Operational_Api) HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints));
  }
}

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(76);
  DeclNewNone_E08F39(t_0);
  None_E08F39_apply(SF &t_0);
  Type_assign(&_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_initialization_api, (&t_0), sizeof(struct None_E08F39));
};

void HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(77);
  DeclNewNone_AAA378(t_1);
  None_AAA378_apply(SF &t_1);
  Type_assign(&_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_c_operational_api, (&t_1), sizeof(struct None_AAA378));
};