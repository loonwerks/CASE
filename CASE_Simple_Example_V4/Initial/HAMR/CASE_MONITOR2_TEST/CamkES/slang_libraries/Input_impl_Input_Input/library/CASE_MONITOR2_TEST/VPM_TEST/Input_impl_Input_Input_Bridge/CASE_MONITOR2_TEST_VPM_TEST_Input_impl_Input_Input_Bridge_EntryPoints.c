#include <all.h>

// CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints

B CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints__eq(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints other) {
  if (Z__ne(this->Input_impl_Input_Input_BridgeId, other->Input_impl_Input_Input_BridgeId)) return F;
  if (Z__ne(this->Observed_Id, other->Observed_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api__ne((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->initialization_api, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &other->initialization_api)) return F;
  if (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api__ne((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->operational_api, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints__ne(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints other);

void CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_string_(STACK_FRAME String result, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->Input_impl_Input_Input_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Observed_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_cprint(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->Input_impl_Input_Input_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Observed_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_cprint((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_cprint((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints__is(STACK_FRAME void* this);
CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints__as(STACK_FRAME void *this);

void CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_apply(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this, Z Input_impl_Input_Input_BridgeId, Z Observed_Id, Option_9AF35E dispatchTriggers, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api initialization_api, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints", "apply", 0);
  this->Input_impl_Input_Input_BridgeId = Input_impl_Input_Input_BridgeId;
  this->Observed_Id = Observed_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api));
  {
    sfUpdateLoc(78);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(80);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_1);
    t_1.size = (int8_t) 0;
    Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(82);
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_2);
    t_2.size = (int8_t) 0;
    Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  }
  {
    sfUpdateLoc(84);
    STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_3);
    t_3.size = (int8_t) 1;
    IS_82ABD8_up(&t_3, 0, (Z) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_Observed_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_initialise_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(122);
  {
    CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_initialise(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(123);
  {
    art_Art_sendOutput(SF (IS_82ABD8) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_compute_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(87);
  {
    art_Art_receiveInput(SF (IS_82ABD8) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(90);
  {
    CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_timeTriggered(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_operational_api_(this));
  }

  sfUpdateLoc(92);
  {
    art_Art_sendOutput(SF (IS_82ABD8) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_finalise_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_Bridge.scala", "CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Input_Input_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(117);
  {
    CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_finalise(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_operational_api_(this));
  }
}