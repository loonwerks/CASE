#include <all.h>

B CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_initialized_ = F;

union Option_7570D9 _CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api;
union Option_4B18FC _CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api;

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init(STACK_FRAME_ONLY) {
  if (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_initialized_) return;
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Input_Input_Bridge", "<init>", 0);
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init_c_initialization_api(SF_LAST);
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init_c_operational_api(SF_LAST);
}

Option_7570D9 CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init(CALLER_LAST);
  return (Option_7570D9) &_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api;
}

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api_a(STACK_FRAME Option_7570D9 p_c_initialization_api) {
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_7570D9));
}

Option_4B18FC CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init(CALLER_LAST);
  return (Option_4B18FC) &_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api;
}

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api_a(STACK_FRAME Option_4B18FC p_c_operational_api) {
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_4B18FC));
}

// CASE_MONITOR_TEST.VPM_TEST.Input_impl_Input_Input_Bridge

B CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge__eq(CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge this, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->Observed, (art_Port_45E54D) &other->Observed)) return F;
  return T;
}

B CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge__ne(CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge this, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge other);

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_string_(STACK_FRAME String result, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge this) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Input_Input_Bridge", "string", 0);
  String_string_(SF result, string("Input_impl_Input_Input_Bridge("));
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
  String_string_(SF result, string(")"));
}

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_cprint(CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Input_impl_Input_Input_Bridge("), isOut);
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
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge__is(STACK_FRAME void* this);
CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge__as(STACK_FRAME void *this);

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_apply(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D Observed) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Input_Input_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->Observed, Observed, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(21);
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 1;
    IS_820232_up(&t_1, 0, (art_UPort) CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_Observed_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 1;
    IS_820232_up(&t_5, 0, (art_UPort) CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_Observed_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(33);
    {

      sfUpdateLoc(34);
      CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api api;
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api(t_6);
      CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_apply(SF &t_6, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_Observed_(this)));
      api = (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) (&t_6);

      sfUpdateLoc(38);
      {
        DeclNewSome_ED6B7D(t_7);
        Some_ED6B7D_apply(SF &t_7, (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) api);
        CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api_a(SF (Option_7570D9) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(42);
    {

      sfUpdateLoc(43);
      CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api api;
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api(t_8);
      CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_apply(SF &t_8, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_Observed_(this)));
      api = (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) (&t_8);

      sfUpdateLoc(47);
      {
        DeclNewSome_BA86B7(t_9);
        Some_BA86B7_apply(SF &t_9, (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) api);
        CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api_a(SF (Option_4B18FC) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(52);
    DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints(t_10);
    CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_apply(SF &t_10, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_id_(this), art_Port_45E54D_id_(CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_Observed_(this)), (Option_9AF35E) CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_dispatchTriggers_(this), (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_initialization_api_(this), (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints));
  }
}

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(65);
  DeclNewNone_04B2B5(t_0);
  None_04B2B5_apply(SF &t_0);
  Type_assign(&_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api, (&t_0), sizeof(struct None_04B2B5));
};

void CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(66);
  DeclNewNone_12F982(t_1);
  None_12F982_apply(SF &t_1);
  Type_assign(&_CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api, (&t_1), sizeof(struct None_12F982));
};