#include <all.h>

B HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_initialized_ = F;

union Option_6F9BAD _HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api;
union Option_3A1F68 _HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api;

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_initialized_) return;
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_Bridge.scala", "HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge", "<init>", 0);
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init_c_initialization_api(SF_LAST);
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init_c_operational_api(SF_LAST);
}

Option_6F9BAD HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init(CALLER_LAST);
  return (Option_6F9BAD) &_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api;
}

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api_a(STACK_FRAME Option_6F9BAD p_c_initialization_api) {
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_6F9BAD));
}

Option_3A1F68 HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init(CALLER_LAST);
  return (Option_3A1F68) &_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api;
}

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api_a(STACK_FRAME Option_3A1F68 p_c_operational_api) {
  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_3A1F68));
}

// HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge

B HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge__eq(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge this, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->FlightPlan, (art_Port_45E54D) &other->FlightPlan)) return F;
  return T;
}

B HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge__ne(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge this, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge other);

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge this) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_Bridge.scala", "HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge", "string", 0);
  String_string_(SF result, string("FlightController_Impl_SW_FlightController_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->FlightPlan);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_cprint(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlightController_Impl_SW_FlightController_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->FlightPlan, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_apply(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D FlightPlan) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_Bridge.scala", "HAMR_Simple_V4.SW.FlightController_Impl_SW_FlightController_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->FlightPlan, FlightPlan, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(21);
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 1;
    IS_820232_up(&t_1, 0, (art_UPort) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 0;
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(33);
    {

      sfUpdateLoc(34);
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api api;
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(t_6);
      HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_apply(SF &t_6, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(this)));
      api = (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(38);
      {
        DeclNewSome_0FF3DD(t_7);
        Some_0FF3DD_apply(SF &t_7, (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) api);
        HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api_a(SF (Option_6F9BAD) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(42);
    {

      sfUpdateLoc(43);
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api;
      DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(t_8);
      HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_apply(SF &t_8, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(this)));
      api = (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(47);
      {
        DeclNewSome_FCFE69(t_9);
        Some_FCFE69_apply(SF &t_9, (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) api);
        HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api_a(SF (Option_3A1F68) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(52);
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints(t_10);
    HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints_apply(SF &t_10, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(this)), (Option_9AF35E) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_dispatchTriggers_(this), (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_initialization_api_(this), (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_EntryPoints));
  }
}

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(65);
  DeclNewNone_4E54E3(t_0);
  None_4E54E3_apply(SF &t_0);
  Type_assign(&_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_initialization_api, (&t_0), sizeof(struct None_4E54E3));
};

void HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(66);
  DeclNewNone_2849BF(t_1);
  None_2849BF_apply(SF &t_1);
  Type_assign(&_HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_c_operational_api, (&t_1), sizeof(struct None_2849BF));
};