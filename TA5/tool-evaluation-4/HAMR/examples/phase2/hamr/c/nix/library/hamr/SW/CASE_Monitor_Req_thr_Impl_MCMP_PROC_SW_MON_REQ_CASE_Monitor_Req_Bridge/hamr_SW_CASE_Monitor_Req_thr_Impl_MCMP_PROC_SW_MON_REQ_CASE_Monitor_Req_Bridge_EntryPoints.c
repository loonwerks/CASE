#include <all.h>

// hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints

B hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints__eq(hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this, hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints other) {
  if (Z__ne(this->CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId, other->CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId)) return F;
  if (Z__ne(this->observed_Id, other->observed_Id)) return F;
  if (Z__ne(this->reference_1_Id, other->reference_1_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api__ne((hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &this->initialization_api, (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__ne((hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &this->operational_api, (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints__ne(hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this, hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints other);

void hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->reference_1_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_cprint(hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->reference_1_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_cprint((hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_cprint((hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints__is(STACK_FRAME void* this);
hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints__as(STACK_FRAME void *this);

void hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this, Z CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId, Z observed_Id, Z reference_1_Id, Option_9AF35E dispatchTriggers, hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api initialization_api, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints", "apply", 0);
  this->CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId = CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_BridgeId;
  this->observed_Id = observed_Id;
  this->reference_1_Id = reference_1_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api));
  {
    sfUpdateLoc(85);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(87);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 2;
    IS_82ABD8_up(&t_1, 0, (Z) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_observed_Id_(this));
    IS_82ABD8_up(&t_1, 1, (Z) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_reference_1_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(90);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(92);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 0;
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(130);
  {
    hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_initialise(SF (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(131);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(95);
  {
    art_Art_receiveInput(SF (IS_82ABD8) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(98);
  {
    hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered(SF (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(100);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.scala", "hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(125);
  {
    hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise(SF (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints_operational_api_(this));
  }
}