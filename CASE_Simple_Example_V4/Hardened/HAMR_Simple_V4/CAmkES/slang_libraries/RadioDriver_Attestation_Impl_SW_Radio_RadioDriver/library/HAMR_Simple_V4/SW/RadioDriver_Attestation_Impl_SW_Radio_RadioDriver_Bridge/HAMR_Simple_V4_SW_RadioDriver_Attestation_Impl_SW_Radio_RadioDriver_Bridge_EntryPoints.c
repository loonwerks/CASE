#include <all.h>

// HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints__eq(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints other) {
  if (Z__ne(this->RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId, other->RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->AttestationRequest_Id, other->AttestationRequest_Id)) return F;
  if (Z__ne(this->AttestationResponse_Id, other->AttestationResponse_Id)) return F;
  if (Z__ne(this->AttestationTesterResponse_Id, other->AttestationTesterResponse_Id)) return F;
  if (Z__ne(this->AttestationTesterRequest_Id, other->AttestationTesterRequest_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &this->initialization_api, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->operational_api, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints__ne(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints other);

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationTesterResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationTesterRequest_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_cprint(HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationTesterResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationTesterRequest_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_apply(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this, Z RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId, Z MissionCommand_Id, Z AttestationRequest_Id, Z AttestationResponse_Id, Z AttestationTesterResponse_Id, Z AttestationTesterRequest_Id, Option_9AF35E dispatchTriggers, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api initialization_api, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints", "apply", 0);
  this->RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId = RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId;
  this->MissionCommand_Id = MissionCommand_Id;
  this->AttestationRequest_Id = AttestationRequest_Id;
  this->AttestationResponse_Id = AttestationResponse_Id;
  this->AttestationTesterResponse_Id = AttestationTesterResponse_Id;
  this->AttestationTesterRequest_Id = AttestationTesterRequest_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api));
  {
    sfUpdateLoc(105);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(107);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 2;
    IS_82ABD8_up(&t_1, 0, (Z) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_AttestationRequest_Id_(this));
    IS_82ABD8_up(&t_1, 1, (Z) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_AttestationTesterResponse_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(110);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(112);
    STATIC_ASSERT(3 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 3;
    IS_82ABD8_up(&t_3, 0, (Z) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_MissionCommand_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_AttestationResponse_Id_(this));
    IS_82ABD8_up(&t_3, 2, (Z) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_AttestationTesterRequest_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_initialise_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(152);
  {
    HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_initialise(SF (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(153);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_compute_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(117);
  {
    art_Art_receiveInput(SF (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(120);
  {
    HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_timeTriggered(SF (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(122);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_finalise_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(147);
  {
    HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_finalise(SF (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints_operational_api_(this));
  }
}