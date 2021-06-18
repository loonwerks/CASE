#include <all.h>

B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_initialized_ = F;

union Option_849849 _hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api;
union Option_80DF3B _hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api;

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init(STACK_FRAME_ONLY) {
  if (hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_initialized_) return;
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge", "<init>", 0);
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init_c_initialization_api(SF_LAST);
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init_c_operational_api(SF_LAST);
}

Option_849849 hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init(CALLER_LAST);
  return (Option_849849) &_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api_a(STACK_FRAME Option_849849 p_c_initialization_api) {
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init(CALLER_LAST);
  Type_assign(&_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_849849));
}

Option_80DF3B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init(CALLER_LAST);
  return (Option_80DF3B) &_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api;
}

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api_a(STACK_FRAME Option_80DF3B p_c_operational_api) {
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init(CALLER_LAST);
  Type_assign(&_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_80DF3B));
}

// hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge

B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge__eq(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge this, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->trusted_ids, (art_Port_45E54D) &other->trusted_ids)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest_in, (art_Port_45E54D) &other->AutomationRequest_in)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest_out_UXAS, (art_Port_45E54D) &other->AutomationRequest_out_UXAS)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest_out_MON_REQ, (art_Port_45E54D) &other->AutomationRequest_out_MON_REQ)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->OperatingRegion_in, (art_Port_45E54D) &other->OperatingRegion_in)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->OperatingRegion_out, (art_Port_45E54D) &other->OperatingRegion_out)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->LineSearchTask_in, (art_Port_45E54D) &other->LineSearchTask_in)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->LineSearchTask_out, (art_Port_45E54D) &other->LineSearchTask_out)) return F;
  return T;
}

B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge__ne(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge this, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge other);

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_string_(STACK_FRAME String result, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge this) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge", "string", 0);
  String_string_(SF result, string("CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->trusted_ids);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest_in);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest_out_UXAS);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest_out_MON_REQ);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->OperatingRegion_in);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->OperatingRegion_out);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->LineSearchTask_in);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->LineSearchTask_out);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_cprint(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->trusted_ids, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest_in, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest_out_UXAS, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest_out_MON_REQ, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->OperatingRegion_in, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->OperatingRegion_out, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->LineSearchTask_in, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->LineSearchTask_out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge__is(STACK_FRAME void* this);
hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge__as(STACK_FRAME void *this);

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_apply(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D trusted_ids, art_Port_45E54D AutomationRequest_in, art_Port_45E54D AutomationRequest_out_UXAS, art_Port_45E54D AutomationRequest_out_MON_REQ, art_Port_45E54D OperatingRegion_in, art_Port_45E54D OperatingRegion_out, art_Port_45E54D LineSearchTask_in, art_Port_45E54D LineSearchTask_out) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.scala", "hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->trusted_ids, trusted_ids, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationRequest_in, AutomationRequest_in, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationRequest_out_UXAS, AutomationRequest_out_UXAS, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationRequest_out_MON_REQ, AutomationRequest_out_MON_REQ, sizeof(struct art_Port_45E54D));
  Type_assign(&this->OperatingRegion_in, OperatingRegion_in, sizeof(struct art_Port_45E54D));
  Type_assign(&this->OperatingRegion_out, OperatingRegion_out, sizeof(struct art_Port_45E54D));
  Type_assign(&this->LineSearchTask_in, LineSearchTask_in, sizeof(struct art_Port_45E54D));
  Type_assign(&this->LineSearchTask_out, LineSearchTask_out, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(28);
    STATIC_ASSERT(8 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 8;
    IS_820232_up(&t_1, 0, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(this));
    IS_820232_up(&t_1, 1, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(this));
    IS_820232_up(&t_1, 2, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(this));
    IS_820232_up(&t_1, 3, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(this));
    IS_820232_up(&t_1, 4, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(this));
    IS_820232_up(&t_1, 5, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(this));
    IS_820232_up(&t_1, 6, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(this));
    IS_820232_up(&t_1, 7, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(4 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 4;
    IS_820232_up(&t_4, 0, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(this));
    IS_820232_up(&t_4, 1, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(this));
    IS_820232_up(&t_4, 2, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(this));
    IS_820232_up(&t_4, 3, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(this));
    STATIC_ASSERT(4 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 4;
    IS_820232_up(&t_5, 0, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(this));
    IS_820232_up(&t_5, 1, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(this));
    IS_820232_up(&t_5, 2, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(this));
    IS_820232_up(&t_5, 3, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(53);
    {

      sfUpdateLoc(54);
      hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api api;
      DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(t_6);
      hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api_apply(SF &t_6, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(this)));
      api = (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(65);
      {
        DeclNewSome_D48312(t_7);
        Some_D48312_apply(SF &t_7, (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) api);
        hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api_a(SF (Option_849849) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(69);
    {

      sfUpdateLoc(70);
      hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api api;
      DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api(t_8);
      hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api_apply(SF &t_8, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(this)));
      api = (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(81);
      {
        DeclNewSome_F82A4D(t_9);
        Some_F82A4D_apply(SF &t_9, (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) api);
        hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api_a(SF (Option_80DF3B) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(86);
    DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints(t_10);
    hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints_apply(SF &t_10, hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(this)), art_Port_45E54D_id_(hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(this)), (Option_9AF35E) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_dispatchTriggers_(this), (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_initialization_api_(this), (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints));
  }
}

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(106);
  DeclNewNone_78A1D4(t_0);
  None_78A1D4_apply(SF &t_0);
  Type_assign(&_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_initialization_api, (&t_0), sizeof(struct None_78A1D4));
};

void hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(107);
  DeclNewNone_579C8E(t_1);
  None_579C8E_apply(SF &t_1);
  Type_assign(&_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_c_operational_api, (&t_1), sizeof(struct None_579C8E));
};