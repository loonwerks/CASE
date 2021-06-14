#include <all.h>

B CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_initialized_ = F;

union Option_11C677 _CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api;
union Option_EA4AEC _CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api;

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init(STACK_FRAME_ONLY) {
  if (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_initialized_) return;
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "Output_impl_Output_Output_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Output_Output_Bridge", "<init>", 0);
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init_c_initialization_api(SF_LAST);
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init_c_operational_api(SF_LAST);
}

Option_11C677 CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init(CALLER_LAST);
  return (Option_11C677) &_CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api;
}

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api_a(STACK_FRAME Option_11C677 p_c_initialization_api) {
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_11C677));
}

Option_EA4AEC CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init(CALLER_LAST);
  return (Option_EA4AEC) &_CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api;
}

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api_a(STACK_FRAME Option_EA4AEC p_c_operational_api) {
  CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_EA4AEC));
}

// CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Output_Output_Bridge

B CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge__eq(CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge this, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->Suspect_Traffic_Out, (art_Port_45E54D) &other->Suspect_Traffic_Out)) return F;
  return T;
}

B CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge__ne(CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge this, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge other);

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_string_(STACK_FRAME String result, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge this) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Output_Output_Bridge", "string", 0);
  String_string_(SF result, string("Output_impl_Output_Output_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->Suspect_Traffic_Out);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_cprint(CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Output_impl_Output_Output_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->Suspect_Traffic_Out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge__is(STACK_FRAME void* this);
CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge__as(STACK_FRAME void *this);

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_apply(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D Suspect_Traffic_Out) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Output_Output_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->Suspect_Traffic_Out, Suspect_Traffic_Out, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(21);
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 1;
    IS_820232_up(&t_1, 0, (art_UPort) CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_Suspect_Traffic_Out_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_Suspect_Traffic_Out_(this));
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
      CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api api;
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api(t_6);
      CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api_apply(SF &t_6, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_Suspect_Traffic_Out_(this)));
      api = (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) (&t_6);

      sfUpdateLoc(38);
      {
        DeclNewSome_2C70A4(t_7);
        Some_2C70A4_apply(SF &t_7, (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) api);
        CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api_a(SF (Option_11C677) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(42);
    {

      sfUpdateLoc(43);
      CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api api;
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api(t_8);
      CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api_apply(SF &t_8, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_Suspect_Traffic_Out_(this)));
      api = (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) (&t_8);

      sfUpdateLoc(47);
      {
        DeclNewSome_9A9753(t_9);
        Some_9A9753_apply(SF &t_9, (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) api);
        CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api_a(SF (Option_EA4AEC) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(52);
    DeclNewCASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints(t_10);
    CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints_apply(SF &t_10, CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_Suspect_Traffic_Out_(this)), (Option_9AF35E) CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_dispatchTriggers_(this), (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_initialization_api_(this), (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_EntryPoints));
  }
}

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(65);
  DeclNewNone_3790E6(t_0);
  None_3790E6_apply(SF &t_0);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api, (&t_0), sizeof(struct None_3790E6));
};

void CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(66);
  DeclNewNone_A19CD9(t_1);
  None_A19CD9_apply(SF &t_1);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api, (&t_1), sizeof(struct None_A19CD9));
};