#include <all.h>

// CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints

B CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints__eq(CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints other) {
  if (Z__ne(this->CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId, other->CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId)) return F;
  if (Z__ne(this->Observed_Id, other->Observed_Id)) return F;
  if (Z__ne(this->Suspect_Traffic_Out_Id, other->Suspect_Traffic_Out_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__ne((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->initialization_api, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__ne((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->operational_api, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints__ne(CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints other);

void CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_string_(STACK_FRAME String result, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Suspect_Traffic_Out_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_cprint(CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Suspect_Traffic_Out_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_cprint((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_cprint((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints__is(STACK_FRAME void* this);
CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints__as(STACK_FRAME void *this);

void CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_apply(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this, Z CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId, Z Observed_Id, Z Suspect_Traffic_Out_Id, Option_9AF35E dispatchTriggers, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api initialization_api, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints", "apply", 0);
  this->CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId = CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_BridgeId;
  this->Observed_Id = Observed_Id;
  this->Suspect_Traffic_Out_Id = Suspect_Traffic_Out_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api));
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
    IS_82ABD8_up(&t_1, 0, (Z) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_Observed_Id_(this));
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
    IS_82ABD8_up(&t_3, 0, (Z) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_Suspect_Traffic_Out_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_initialise_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(128);
  {
    CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_initialise(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(129);
  {
    art_Art_sendOutput(SF (IS_82ABD8) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_compute_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(93);
  {
    art_Art_receiveInput(SF (IS_82ABD8) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(96);
  {
    CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_timeTriggered(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(98);
  {
    art_Art_sendOutput(SF (IS_82ABD8) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_finalise_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(123);
  {
    CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_finalise(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_EntryPoints_operational_api_(this));
  }
}