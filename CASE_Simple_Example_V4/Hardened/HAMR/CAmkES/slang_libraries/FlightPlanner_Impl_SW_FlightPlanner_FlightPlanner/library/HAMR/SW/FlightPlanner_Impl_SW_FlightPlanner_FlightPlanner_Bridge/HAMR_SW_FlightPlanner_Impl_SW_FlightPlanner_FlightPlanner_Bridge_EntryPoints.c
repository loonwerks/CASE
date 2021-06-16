#include <all.h>

// HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints__eq(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints other) {
  if (Z__ne(this->FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId, other->FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->FlightPlan_Id, other->FlightPlan_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (HAMR_SW_FlightPlanner_Impl_Initialization_Api__ne((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &this->initialization_api, (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (HAMR_SW_FlightPlanner_Impl_Operational_Api__ne((HAMR_SW_FlightPlanner_Impl_Operational_Api) &this->operational_api, (HAMR_SW_FlightPlanner_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints__ne(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints other);

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_string_(STACK_FRAME String result, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->FlightPlan_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  HAMR_SW_FlightPlanner_Impl_Initialization_Api_string_(SF result, (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  HAMR_SW_FlightPlanner_Impl_Operational_Api_string_(SF result, (HAMR_SW_FlightPlanner_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_cprint(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->FlightPlan_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  HAMR_SW_FlightPlanner_Impl_Initialization_Api_cprint((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  HAMR_SW_FlightPlanner_Impl_Operational_Api_cprint((HAMR_SW_FlightPlanner_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints__is(STACK_FRAME void* this);
HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints__as(STACK_FRAME void *this);

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_apply(STACK_FRAME HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this, Z FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId, Z MissionCommand_Id, Z FlightPlan_Id, Option_9AF35E dispatchTriggers, HAMR_SW_FlightPlanner_Impl_Initialization_Api initialization_api, HAMR_SW_FlightPlanner_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints", "apply", 0);
  this->FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId = FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_BridgeId;
  this->MissionCommand_Id = MissionCommand_Id;
  this->FlightPlan_Id = FlightPlan_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct HAMR_SW_FlightPlanner_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct HAMR_SW_FlightPlanner_Impl_Operational_Api));
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(86);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 1;
    IS_82ABD8_up(&t_1, 0, (Z) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_MissionCommand_Id_(this));
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(88);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(90);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 1;
    IS_82ABD8_up(&t_3, 0, (Z) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_FlightPlan_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_initialise_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(128);
  {
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(129);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_compute_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(93);
  {
    art_Art_receiveInput(SF (IS_82ABD8) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(96);
  {
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_timeTriggered(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(98);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_finalise_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.scala", "HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(123);
  {
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_EntryPoints_operational_api_(this));
  }
}