#include <all.h>

// HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints

B HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints__eq(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints other) {
  if (Z__ne(this->RadioDriver_Impl_SW_Radio_BridgeId, other->RadioDriver_Impl_SW_Radio_BridgeId)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &this->initialization_api, (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &other->initialization_api)) return F;
  if (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &this->operational_api, (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &other->operational_api)) return F;
  return T;
}

B HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints__ne(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints other);

void HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_string_(STACK_FRAME String result, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->RadioDriver_Impl_SW_Radio_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &this->initialization_api);
  String_string_(SF result, sep);
  HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &this->operational_api);
  String_string_(SF result, string(")"));
}

void HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_cprint(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->RadioDriver_Impl_SW_Radio_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) &this->initialization_api, isOut);
  String_cprint(sep, isOut);
  HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &this->operational_api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints__is(STACK_FRAME void* this);
HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints__as(STACK_FRAME void *this);

void HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_apply(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this, Z RadioDriver_Impl_SW_Radio_BridgeId, Z MissionCommand_Id, Option_9AF35E dispatchTriggers, HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api initialization_api, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api operational_api) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints", "apply", 0);
  this->RadioDriver_Impl_SW_Radio_BridgeId = RadioDriver_Impl_SW_Radio_BridgeId;
  this->MissionCommand_Id = MissionCommand_Id;
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->initialization_api, initialization_api, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api));
  Type_assign(&this->operational_api, operational_api, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api));
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
    IS_82ABD8_up(&t_3, 0, (Z) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_MissionCommand_Id_(this));
    Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_initialise_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(162);
  {
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_initialise(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_initialization_api_(this));
  }

  sfUpdateLoc(163);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

void HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_filter_(STACK_FRAME IS_82ABD8 result, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this, IS_82ABD8 receivedEvents, IS_82ABD8 triggers) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints.compute", "filter", 0);

  sfUpdateLoc(89);
  DeclNewIS_82ABD8(_r);
  IS_82ABD8 r = (IS_82ABD8) &_r;
  {
    STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
    DeclNewIS_82ABD8(t_0);
    t_0.size = (int8_t) 0;
    Type_assign(r, (&t_0), sizeof(struct IS_82ABD8));
  }

  sfUpdateLoc(90);
  ops_ISZOps_A6D40E opsTriggers;
  DeclNewops_ISZOps_A6D40E(t_1);
  ops_ISZOps_A6D40E_apply(SF &t_1, (IS_82ABD8) triggers);
  opsTriggers = (ops_ISZOps_A6D40E) (&t_1);

  sfUpdateLoc(91);
  {
    IS_82ABD8 t_5 = receivedEvents;
    int8_t t_6 = (receivedEvents)->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      Z e = t_5->value[t_7];

      sfUpdateLoc(92);
      B t_2;
      {
        B t_3 = ops_ISZOps_A6D40E_contains_(SF opsTriggers, e);
        t_2 = t_3;
      }
      if (t_2) {

        sfUpdateLoc(93);
        {
          DeclNewIS_82ABD8(t_4);
          IS_82ABD8__append(SF (IS_82ABD8) &t_4, r, e);
          Type_assign(r, ((IS_82ABD8) &t_4), sizeof(struct IS_82ABD8));
        }
      }
    }
  }
  Type_assign(result, r, sizeof(struct IS_82ABD8));
  return;
}

static inline B HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_compute_extract_100_11(STACK_FRAME_SF art_DispatchStatus t_0, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this, IS_82ABD8 *_receivedEvents) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_receivedEvents = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_compute_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(100);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_RadioDriver_Impl_SW_Radio_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 receivedEvents;
  sfAssert(HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_compute_extract_100_11(SF t_0, this, &receivedEvents), "Error during var pattern matching.");

  sfUpdateLoc(103);
  IS_82ABD8 dispatchableEventPorts;
  B t_2 = Option_9AF35E_isEmpty_(SF HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_dispatchTriggers_(this));
  DeclNewIS_82ABD8(t_3);
  if (t_2) {
    Type_assign(&t_3, receivedEvents, sizeof(struct IS_82ABD8));
  } else {
    DeclNewIS_82ABD8(t_4);
    Option_9AF35E_get_(SF (IS_82ABD8) &t_4, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_dispatchTriggers_(this));
    DeclNewIS_82ABD8(t_5);
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_filter_(SF (IS_82ABD8) &t_5, this, (IS_82ABD8) receivedEvents, (IS_82ABD8) ((IS_82ABD8) &t_4));
    Type_assign(&t_3, ((IS_82ABD8) &t_5), sizeof(struct IS_82ABD8));
  }
  dispatchableEventPorts = (IS_82ABD8) &t_3;

  sfUpdateLoc(107);
  {
    art_Art_receiveInput(SF (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_dataInPortIds_(this));
  }

  sfUpdateLoc(109);
  {
    IS_82ABD8 t_6 = dispatchableEventPorts;
    int8_t t_7 = (dispatchableEventPorts)->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      Z portId = t_6->value[t_8];
    }
  }

  sfUpdateLoc(112);
  {
    art_Art_sendOutput(SF (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_dataOutPortIds_(this));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_finalise_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_Bridge.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_SW_Radio_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(157);
  {
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_finalise(SF (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_EntryPoints_operational_api_(this));
  }
}