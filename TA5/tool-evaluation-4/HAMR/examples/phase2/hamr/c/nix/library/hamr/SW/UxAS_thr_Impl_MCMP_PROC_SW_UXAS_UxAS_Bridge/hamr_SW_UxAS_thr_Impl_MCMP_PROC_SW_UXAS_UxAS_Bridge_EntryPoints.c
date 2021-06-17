#include <all.h>

// hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints

B hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints__eq(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints other) {
  if (Z__ne(this->UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId, other->UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId)) return F;
  if (Z__ne(this->AutomationRequest_Id, other->AutomationRequest_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->OperatingRegion_Id, other->OperatingRegion_Id)) return F;
  if (Z__ne(this->LineSearchTask_Id, other->LineSearchTask_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_GEO_Id, other->AutomationResponse_MON_GEO_Id)) return F;
  if (Z__ne(this->AutomationResponse_MON_REQ_Id, other->AutomationResponse_MON_REQ_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (hamr_SW_UxAS_thr_Impl_Initialization_Api__ne((hamr_SW_UxAS_thr_Impl_Initialization_Api) &this->initialization_api, (hamr_SW_UxAS_thr_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (hamr_SW_UxAS_thr_Impl_Operational_Api__ne((hamr_SW_UxAS_thr_Impl_Operational_Api) &this->operational_api, (hamr_SW_UxAS_thr_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints__ne(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints other);

void hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_string_(STACK_FRAME String result, hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.scala", "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->OperatingRegion_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->LineSearchTask_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_GEO_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_MON_REQ_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  hamr_SW_UxAS_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_UxAS_thr_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  hamr_SW_UxAS_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_UxAS_thr_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_cprint(hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->OperatingRegion_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->LineSearchTask_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_GEO_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_MON_REQ_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  hamr_SW_UxAS_thr_Impl_Initialization_Api_cprint((hamr_SW_UxAS_thr_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  hamr_SW_UxAS_thr_Impl_Operational_Api_cprint((hamr_SW_UxAS_thr_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints__is(STACK_FRAME void* this);
hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints__as(STACK_FRAME void *this);

void hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_apply(STACK_FRAME hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this, Z UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId, Z AutomationRequest_Id, Z AirVehicleState_Id, Z OperatingRegion_Id, Z LineSearchTask_Id, Z AutomationResponse_MON_GEO_Id, Z AutomationResponse_MON_REQ_Id, Option_9AF35E dispatchTriggers, hamr_SW_UxAS_thr_Impl_Initialization_Api initialization_api, hamr_SW_UxAS_thr_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.scala", "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints", "apply", 0);
  this->UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId = UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_BridgeId;
  this->AutomationRequest_Id = AutomationRequest_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->OperatingRegion_Id = OperatingRegion_Id;
  this->LineSearchTask_Id = LineSearchTask_Id;
  this->AutomationResponse_MON_GEO_Id = AutomationResponse_MON_GEO_Id;
  this->AutomationResponse_MON_REQ_Id = AutomationResponse_MON_REQ_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct hamr_SW_UxAS_thr_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct hamr_SW_UxAS_thr_Impl_Operational_Api));
  {
    sfUpdateLoc(112);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(114);
    STATIC_ASSERT(4 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 4;
    IS_82ABD8_up(&t_1, 0, (Z) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_AutomationRequest_Id_(this));
    IS_82ABD8_up(&t_1, 1, (Z) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_AirVehicleState_Id_(this));
    IS_82ABD8_up(&t_1, 2, (Z) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_OperatingRegion_Id_(this));
    IS_82ABD8_up(&t_1, 3, (Z) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_LineSearchTask_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(119);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(121);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 2;
    IS_82ABD8_up(&t_3, 0, (Z) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_AutomationResponse_MON_GEO_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_AutomationResponse_MON_REQ_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_initialise_(STACK_FRAME hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.scala", "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(160);
  {
    hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_initialise(SF (hamr_SW_UxAS_thr_Impl_Initialization_Api) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(161);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_compute_(STACK_FRAME hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.scala", "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(125);
  {
    art_Art_receiveInput(SF (IS_82ABD8) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(128);
  {
    hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_timeTriggered(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(130);
  {
    art_Art_sendOutput(SF (IS_82ABD8) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_finalise_(STACK_FRAME hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.scala", "hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(155);
  {
    hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_finalise(SF (hamr_SW_UxAS_thr_Impl_Operational_Api) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints_operational_api_(this));
  }
}