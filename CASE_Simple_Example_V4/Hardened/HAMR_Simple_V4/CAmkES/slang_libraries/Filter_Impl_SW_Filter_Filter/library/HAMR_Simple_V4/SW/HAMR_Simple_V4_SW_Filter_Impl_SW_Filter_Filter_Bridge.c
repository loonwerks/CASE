#include <all.h>

B HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_initialized_ = F;

union Option_CEC5BB _HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api;
union Option_55CC5B _HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api;

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_initialized_) return;
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_Bridge.scala", "HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge", "<init>", 0);
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init_c_initialization_api(SF_LAST);
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init_c_operational_api(SF_LAST);
}

Option_CEC5BB HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init(CALLER_LAST);
  return (Option_CEC5BB) &_HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api;
}

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api_a(STACK_FRAME Option_CEC5BB p_c_initialization_api) {
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_CEC5BB));
}

Option_55CC5B HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init(CALLER_LAST);
  return (Option_55CC5B) &_HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api;
}

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api_a(STACK_FRAME Option_55CC5B p_c_operational_api) {
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init(CALLER_LAST);
  Type_assign(&_HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_55CC5B));
}

// HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge

B HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge__eq(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge this, HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->Input, (art_Port_45E54D) &other->Input)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->Output, (art_Port_45E54D) &other->Output)) return F;
  return T;
}

B HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge__ne(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge this, HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge other);

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge this) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_Bridge.scala", "HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge", "string", 0);
  String_string_(SF result, string("Filter_Impl_SW_Filter_Filter_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->Input);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->Output);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_cprint(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Filter_Impl_SW_Filter_Filter_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->Input, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->Output, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_apply(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D Input, art_Port_45E54D Output) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_Bridge.scala", "HAMR_Simple_V4.SW.Filter_Impl_SW_Filter_Filter_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->Input, Input, sizeof(struct art_Port_45E54D));
  Type_assign(&this->Output, Output, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(22);
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 2;
    IS_820232_up(&t_1, 0, (art_UPort) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Input_(this));
    IS_820232_up(&t_1, 1, (art_UPort) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Output_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Input_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 1;
    IS_820232_up(&t_5, 0, (art_UPort) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Output_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(35);
    {

      sfUpdateLoc(36);
      HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api api;
      DeclNewHAMR_Simple_V4_SW_Filter_Impl_Initialization_Api(t_6);
      HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_apply(SF &t_6, HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Input_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Output_(this)));
      api = (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(41);
      {
        DeclNewSome_F9E3B8(t_7);
        Some_F9E3B8_apply(SF &t_7, (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) api);
        HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api_a(SF (Option_CEC5BB) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(45);
    {

      sfUpdateLoc(46);
      HAMR_Simple_V4_SW_Filter_Impl_Operational_Api api;
      DeclNewHAMR_Simple_V4_SW_Filter_Impl_Operational_Api(t_8);
      HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_apply(SF &t_8, HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Input_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Output_(this)));
      api = (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(51);
      {
        DeclNewSome_FDA5C5(t_9);
        Some_FDA5C5_apply(SF &t_9, (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) api);
        HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api_a(SF (Option_55CC5B) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct HAMR_Simple_V4_SW_Filter_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(56);
    DeclNewHAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_EntryPoints(t_10);
    HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_EntryPoints_apply(SF &t_10, HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_id_(this), art_Port_45E54D_id_(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Input_(this)), art_Port_45E54D_id_(HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_Output_(this)), (Option_9AF35E) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_dispatchTriggers_(this), (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_initialization_api_(this), (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_EntryPoints));
  }
}

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(70);
  DeclNewNone_39F351(t_0);
  None_39F351_apply(SF &t_0);
  Type_assign(&_HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api, (&t_0), sizeof(struct None_39F351));
};

void HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(71);
  DeclNewNone_968C19(t_1);
  None_968C19_apply(SF &t_1);
  Type_assign(&_HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api, (&t_1), sizeof(struct None_968C19));
};