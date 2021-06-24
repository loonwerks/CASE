#include <all.h>

// HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints

B HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints__eq(HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints other) {
  if (Z__ne(this->AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId, other->AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId)) return F;
  if (Z__ne(this->AttestationRequest_Id, other->AttestationRequest_Id)) return F;
  if (Z__ne(this->AttestationResponse_Id, other->AttestationResponse_Id)) return F;
  if (Z__ne(this->TrustedIds_Id, other->TrustedIds_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &this->initialization_api, (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &this->operational_api, (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints__ne(HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints other);

void HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationRequest_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AttestationResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->TrustedIds_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_cprint(HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationRequest_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AttestationResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->TrustedIds_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_apply(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this, Z AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId, Z AttestationRequest_Id, Z AttestationResponse_Id, Z TrustedIds_Id, Option_9AF35E dispatchTriggers, HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api initialization_api, HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints", "apply", 0);
  this->AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId = AttestationManager_Impl_SW_AttestationManager_AttestationManager_BridgeId;
  this->AttestationRequest_Id = AttestationRequest_Id;
  this->AttestationResponse_Id = AttestationResponse_Id;
  this->TrustedIds_Id = TrustedIds_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api));
  {
    sfUpdateLoc(91);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(93);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 1;
    IS_82ABD8_up(&t_1, 0, (Z) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_AttestationResponse_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(95);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(97);
    STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 2;
    IS_82ABD8_up(&t_3, 0, (Z) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_AttestationRequest_Id_(this));
    IS_82ABD8_up(&t_3, 1, (Z) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_TrustedIds_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_initialise_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(136);
  {
    HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_initialise(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(137);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_compute_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(101);
  {
    art_Art_receiveInput(SF (IS_82ABD8) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(104);
  {
    HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_timeTriggered(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(106);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_finalise_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.scala", "HAMR_Simple_V4.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(131);
  {
    HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_finalise(SF (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints_operational_api_(this));
  }
}