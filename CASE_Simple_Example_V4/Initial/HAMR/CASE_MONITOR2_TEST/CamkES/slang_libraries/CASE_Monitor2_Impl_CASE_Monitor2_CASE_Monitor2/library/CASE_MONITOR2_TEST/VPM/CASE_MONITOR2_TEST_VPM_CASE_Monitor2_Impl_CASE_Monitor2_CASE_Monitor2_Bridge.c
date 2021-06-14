#include <all.h>

B CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_initialized_ = F;

union Option_F9C054 _CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api;
union Option_6F33AF _CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api;

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init(STACK_FRAME_ONLY) {
  if (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_initialized_) return;
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.scala", "CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge", "<init>", 0);
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init_c_initialization_api(SF_LAST);
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init_c_operational_api(SF_LAST);
}

Option_F9C054 CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init(CALLER_LAST);
  return (Option_F9C054) &_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api;
}

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api_a(STACK_FRAME Option_F9C054 p_c_initialization_api) {
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_F9C054));
}

Option_6F33AF CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init(CALLER_LAST);
  return (Option_6F33AF) &_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api;
}

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api_a(STACK_FRAME Option_6F33AF p_c_operational_api) {
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_6F33AF));
}

// CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge

B CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge__eq(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge this, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->Observed, (art_Port_45E54D) &other->Observed)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->Suspect_Traffic_Out, (art_Port_45E54D) &other->Suspect_Traffic_Out)) return F;
  return T;
}

B CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge__ne(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge this, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge other);

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_string_(STACK_FRAME String result, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge this) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.scala", "CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge", "string", 0);
  String_string_(SF result, string("CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->Observed);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->Suspect_Traffic_Out);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_cprint(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->Observed, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->Suspect_Traffic_Out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge__is(STACK_FRAME void* this);
CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge__as(STACK_FRAME void *this);

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_apply(STACK_FRAME CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D Observed, art_Port_45E54D Suspect_Traffic_Out) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge.scala", "CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->Observed, Observed, sizeof(struct art_Port_45E54D));
  Type_assign(&this->Suspect_Traffic_Out, Suspect_Traffic_Out, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(22);
    STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 2;
    IS_820232_up(&t_1, 0, (art_UPort) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Observed_(this));
    IS_820232_up(&t_1, 1, (art_UPort) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Suspect_Traffic_Out_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Observed_(this));
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 1;
    IS_820232_up(&t_5, 0, (art_UPort) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Suspect_Traffic_Out_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(35);
    {

      sfUpdateLoc(36);
      CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api api;
      DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api(t_6);
      CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_apply(SF &t_6, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Observed_(this)), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Suspect_Traffic_Out_(this)));
      api = (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(41);
      {
        DeclNewSome_2D0976(t_7);
        Some_2D0976_apply(SF &t_7, (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) api);
        CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api_a(SF (Option_F9C054) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(45);
    {

      sfUpdateLoc(46);
      CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api api;
      DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api(t_8);
      CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api_apply(SF &t_8, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Observed_(this)), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Suspect_Traffic_Out_(this)));
      api = (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(51);
      {
        DeclNewSome_C4344F(t_9);
        Some_C4344F_apply(SF &t_9, (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) api);
        CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api_a(SF (Option_6F33AF) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(56);
    DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_EntryPoints(t_10);
    CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_EntryPoints_apply(SF &t_10, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Observed_(this)), art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_Suspect_Traffic_Out_(this)), (Option_9AF35E) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_dispatchTriggers_(this), (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_initialization_api_(this), (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_EntryPoints));
  }
}

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(70);
  DeclNewNone_EC3D0D(t_0);
  None_EC3D0D_apply(SF &t_0);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api, (&t_0), sizeof(struct None_EC3D0D));
};

void CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(71);
  DeclNewNone_3D0813(t_1);
  None_3D0813_apply(SF &t_1);
  Type_assign(&_CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api, (&t_1), sizeof(struct None_3D0813));
};