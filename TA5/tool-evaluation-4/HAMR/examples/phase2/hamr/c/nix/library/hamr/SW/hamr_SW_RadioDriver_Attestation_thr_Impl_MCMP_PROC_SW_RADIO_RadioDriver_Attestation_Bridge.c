#include <all.h>

B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_initialized_ = F;

union Option_9CA19A _hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api;
union Option_B4EF66 _hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api;

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init(STACK_FRAME_ONLY) {
  if (hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_initialized_) return;
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge", "<init>", 0);
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init_c_initialization_api(SF_LAST);
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init_c_operational_api(SF_LAST);
}

Option_9CA19A hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api(STACK_FRAME_ONLY) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init(CALLER_LAST);
  return (Option_9CA19A) &_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api;
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api_a(STACK_FRAME Option_9CA19A p_c_initialization_api) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init(CALLER_LAST);
  Type_assign(&_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api, p_c_initialization_api, sizeof(union Option_9CA19A));
}

Option_B4EF66 hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api(STACK_FRAME_ONLY) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init(CALLER_LAST);
  return (Option_B4EF66) &_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api;
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api_a(STACK_FRAME Option_B4EF66 p_c_operational_api) {
  hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init(CALLER_LAST);
  Type_assign(&_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api, p_c_operational_api, sizeof(union Option_B4EF66));
}

// hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge

B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__eq(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->recv_data, (art_Port_45E54D) &other->recv_data)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->send_data, (art_Port_45E54D) &other->send_data)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->trusted_ids, (art_Port_45E54D) &other->trusted_ids)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->AutomationRequest, (art_Port_45E54D) &other->AutomationRequest)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->OperatingRegion, (art_Port_45E54D) &other->OperatingRegion)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->LineSearchTask, (art_Port_45E54D) &other->LineSearchTask)) return F;
  return T;
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__ne(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge other);

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_string_(STACK_FRAME String result, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge", "string", 0);
  String_string_(SF result, string("RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge("));
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
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->send_data);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->trusted_ids);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->AutomationRequest);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->OperatingRegion);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->LineSearchTask);
  String_string_(SF result, string(")"));
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_cprint(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge("), isOut);
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
  art_Port_45E54D_cprint((art_Port_45E54D) &this->send_data, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->trusted_ids, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->AutomationRequest, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->OperatingRegion, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->LineSearchTask, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__is(STACK_FRAME void* this);
hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge__as(STACK_FRAME void *this);

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_apply(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D recv_data, art_Port_45E54D send_data, art_Port_45E54D trusted_ids, art_Port_45E54D AutomationRequest, art_Port_45E54D OperatingRegion, art_Port_45E54D LineSearchTask) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->recv_data, recv_data, sizeof(struct art_Port_45E54D));
  Type_assign(&this->send_data, send_data, sizeof(struct art_Port_45E54D));
  Type_assign(&this->trusted_ids, trusted_ids, sizeof(struct art_Port_45E54D));
  Type_assign(&this->AutomationRequest, AutomationRequest, sizeof(struct art_Port_45E54D));
  Type_assign(&this->OperatingRegion, OperatingRegion, sizeof(struct art_Port_45E54D));
  Type_assign(&this->LineSearchTask, LineSearchTask, sizeof(struct art_Port_45E54D));
  {
    sfUpdateLoc(26);
    STATIC_ASSERT(6 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_1);
    t_1.size = (int8_t) 6;
    IS_820232_up(&t_1, 0, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(this));
    IS_820232_up(&t_1, 1, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_send_data_(this));
    IS_820232_up(&t_1, 2, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(this));
    IS_820232_up(&t_1, 3, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(this));
    IS_820232_up(&t_1, 4, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(this));
    IS_820232_up(&t_1, 5, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(this));
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_2);
    t_2.size = (int8_t) 0;
    STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_3);
    t_3.size = (int8_t) 0;
    STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_4);
    t_4.size = (int8_t) 1;
    IS_820232_up(&t_4, 0, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(this));
    STATIC_ASSERT(5 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
    DeclNewIS_820232(t_5);
    t_5.size = (int8_t) 5;
    IS_820232_up(&t_5, 0, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_send_data_(this));
    IS_820232_up(&t_5, 1, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(this));
    IS_820232_up(&t_5, 2, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(this));
    IS_820232_up(&t_5, 3, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(this));
    IS_820232_up(&t_5, 4, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(this));
    DeclNewart_Bridge_Ports(t_0);
    art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
    Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  }
  {
    sfUpdateLoc(47);
    {

      sfUpdateLoc(48);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api api;
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(t_6);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_apply(SF &t_6, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_send_data_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(this)));
      api = (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) (&t_6);

      sfUpdateLoc(57);
      {
        DeclNewSome_FCAC0B(t_7);
        Some_FCAC0B_apply(SF &t_7, (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) api);
        hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api_a(SF (Option_9CA19A) (&t_7));
      }
      Type_assign(&this->initialization_api, api, sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api));
    }
  }
  {
    sfUpdateLoc(61);
    {

      sfUpdateLoc(62);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api api;
      DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api(t_8);
      hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_apply(SF &t_8, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_send_data_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(this)));
      api = (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) (&t_8);

      sfUpdateLoc(71);
      {
        DeclNewSome_181FDB(t_9);
        Some_181FDB_apply(SF &t_9, (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) api);
        hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api_a(SF (Option_B4EF66) (&t_9));
      }
      Type_assign(&this->operational_api, api, sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api));
    }
  }
  {
    sfUpdateLoc(76);
    DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints(t_10);
    hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints_apply(SF &t_10, hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_recv_data_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_send_data_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(this)), art_Port_45E54D_id_(hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(this)), (Option_9AF35E) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_dispatchTriggers_(this), (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_initialization_api_(this), (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_operational_api_(this));
    Type_assign(&this->entryPoints, (&t_10), sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints));
  }
}

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init_c_initialization_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(94);
  DeclNewNone_3A40F5(t_0);
  None_3A40F5_apply(SF &t_0);
  Type_assign(&_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_initialization_api, (&t_0), sizeof(struct None_3A40F5));
};

void hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_init_c_operational_api(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(95);
  DeclNewNone_69DE14(t_1);
  None_69DE14_apply(SF &t_1);
  Type_assign(&_hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_c_operational_api, (&t_1), sizeof(struct None_69DE14));
};