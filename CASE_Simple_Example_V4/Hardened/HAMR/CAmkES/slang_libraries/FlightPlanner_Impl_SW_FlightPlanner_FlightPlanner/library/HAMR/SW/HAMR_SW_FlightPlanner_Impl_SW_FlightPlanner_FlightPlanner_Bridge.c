#include <all.h>

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_initialized_ = F;

union Option_A0CA6B _HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api;
union Option_6475FA _HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api;

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init(STACK_FRAME_ONLY) {
  if (HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_initialized_) return;
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge", "<init>", 0);
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init_c_initialization_api(SF_LAST);
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init_c_operational_api(SF_LAST);
}

Option_A0CA6B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init(CALLER_LAST);
  return (Option_A0CA6B) &_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api;
}

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api_a(STACK_FRAME Option_A0CA6B p_c_initialization_api) {
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_A0CA6B));
}

Option_6475FA HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init(CALLER_LAST);
  return (Option_6475FA) &_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api;
}

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api_a(STACK_FRAME Option_6475FA p_c_operational_api) {
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_6475FA));
}

// HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__eq(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->MissionCommand, (art_Port_45E54D) &other->MissionCommand)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->FlightPlan, (art_Port_45E54D) &other->FlightPlan)) return F;
  return T;
}

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__ne(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge other);

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_string_(STACK_FRAME String result, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge", "string", 0);
  String_string_(SF result, string("FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge("));
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
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->FlightPlan);
  String_string_(SF result, string(")"));
}

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_cprint(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge("), isOut);
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
  art_Port_45E54D_cprint((art_Port_45E54D) &this->FlightPlan, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__is(STACK_FRAME void* this);
HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__as(STACK_FRAME void *this);

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_apply(STACK_FRAME HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D MissionCommand, art_Port_45E54D FlightPlan) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->MissionCommand, MissionCommand, sizeof(struct art_Port_45E54D));
  Type_assign(&this->FlightPlan, FlightPlan, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(22);
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 2;
    IS_820232_up(&t_1, 0, (art_UPort) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(this));
    IS_820232_up(&t_1, 1, (art_UPort) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 1;
    IS_820232_up(&t_5, 0, (art_UPort) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(35);
    {

      sfUpdateLoc(36);
      HAMR_SW_FlightPlanner_Impl_Initialization_Api api;
      DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(t_6);
      HAMR_SW_FlightPlanner_Impl_Initialization_Api_apply(SF &t_6, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_id_(this), art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(this)));
      api = (HAMR_SW_FlightPlanner_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(41);
      {
        DeclNewSome_9C7E56(t_7);
        Some_9C7E56_apply(SF &t_7, (HAMR_SW_FlightPlanner_Impl_Initialization_Api) api);
        HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api_a(SF (Option_A0CA6B) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct HAMR_SW_FlightPlanner_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(45);
    {

      sfUpdateLoc(46);
      HAMR_SW_FlightPlanner_Impl_Operational_Api api;
      DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(t_8);
      HAMR_SW_FlightPlanner_Impl_Operational_Api_apply(SF &t_8, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_id_(this), art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(this)));
      api = (HAMR_SW_FlightPlanner_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(51);
      {
        DeclNewSome_EB994A(t_9);
        Some_EB994A_apply(SF &t_9, (HAMR_SW_FlightPlanner_Impl_Operational_Api) api);
        HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api_a(SF (Option_6475FA) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct HAMR_SW_FlightPlanner_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(56);
    DeclNewHAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints(t_10);
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_apply(SF &t_10, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_id_(this), art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(this)), art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(this)), (Option_9AF35E) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_dispatchTriggers_(this), (HAMR_SW_FlightPlanner_Impl_Initialization_Api) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_initialization_api_(this), (HAMR_SW_FlightPlanner_Impl_Operational_Api) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints));
  }
}

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(70);
  DeclNewNone_BA6ABF(t_0);
  None_BA6ABF_apply(SF &t_0);
  Type_assign(&_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api, (&t_0), sizeof(struct None_BA6ABF));
};

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(71);
  DeclNewNone_3EE2E0(t_1);
  None_3EE2E0_apply(SF &t_1);
  Type_assign(&_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api, (&t_1), sizeof(struct None_3EE2E0));
};