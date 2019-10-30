#include <all.h>

// uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints

B uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints__eq(uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->FlightPlanner_Impl_BridgeId, other->FlightPlanner_Impl_BridgeId)) return F;
  if (Z__ne(this->mission_rcv_Id, other->mission_rcv_Id)) return F;
  if (Z__ne(this->recv_map_Id, other->recv_map_Id)) return F;
  if (Z__ne(this->flight_plan_Id, other->flight_plan_Id)) return F;
  if (uav_project_extern_SW_FlightPlanner_Impl_Impl__ne((uav_project_extern_SW_FlightPlanner_Impl_Impl) &this->component, (uav_project_extern_SW_FlightPlanner_Impl_Impl) &other->component)) return F;
  return T;
}

B uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints__ne(uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints other);

void uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->FlightPlanner_Impl_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->mission_rcv_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_map_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->flight_plan_Id);
  String_string_(SF result, sep);
  uav_project_extern_SW_FlightPlanner_Impl_Impl_string_(SF result, (uav_project_extern_SW_FlightPlanner_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_cprint(uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->FlightPlanner_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_rcv_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->flight_plan_Id, isOut);
  String_cprint(sep, isOut);
  uav_project_extern_SW_FlightPlanner_Impl_Impl_cprint((uav_project_extern_SW_FlightPlanner_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_apply(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, Z FlightPlanner_Impl_BridgeId, Z mission_rcv_Id, Z recv_map_Id, Z flight_plan_Id, uav_project_extern_SW_FlightPlanner_Impl_Impl component) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints", "apply", 0);
  this->FlightPlanner_Impl_BridgeId = FlightPlanner_Impl_BridgeId;
  this->mission_rcv_Id = mission_rcv_Id;
  this->recv_map_Id = recv_map_Id;
  this->flight_plan_Id = flight_plan_Id;
  Type_assign(&this->component, component, sizeof(struct uav_project_extern_SW_FlightPlanner_Impl_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 2;
  IS_82ABD8_up(&t_1, 0, (Z) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_mission_rcv_Id_(this));
  IS_82ABD8_up(&t_1, 1, (Z) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_recv_map_Id_(this));
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  IS_82ABD8_up(&t_3, 0, (Z) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_flight_plan_Id_(this));
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(148);
  uav_project_extern_SW_FlightPlanner_Impl_Impl_initialise_(SF uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(149);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

static inline B uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_extract_117_11(STACK_FRAME art_DispatchStatus t_0, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, IS_82ABD8 *_portIds) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

static inline B uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_extract_123_15_8E9F45(STACK_FRAME Option_8E9F45 t_2, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, B *_value) {
  if (!Some_D29615__is(SF t_2)) return F;
  if (!uav_project_extern_Base_Types_Boolean_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_2)))) return F;
  *_value = uav_project_extern_Base_Types_Boolean_Payload_value_(uav_project_extern_Base_Types_Boolean_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_2))));
  return T;
}

static inline B uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_extract_127_15_8E9F45(STACK_FRAME Option_8E9F45 t_4, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this, uav_project_extern_SW_Command_Impl *_value) {
  if (!Some_D29615__is(SF t_4)) return F;
  if (!uav_project_extern_SW_Command_Impl_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_4)))) return F;
  *_value = (uav_project_extern_SW_Command_Impl) uav_project_extern_SW_Command_Impl_Payload_value_(uav_project_extern_SW_Command_Impl_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_4))));
  return T;
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(117);
  DeclNewart_DispatchStatus(_t_0);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_FlightPlanner_Impl_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 portIds;
  sfAssert(uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_extract_117_11(SF t_0, this, &portIds), "Error during var pattern matching.");

  sfUpdateLoc(118);
  art_Art_receiveInput(SF (IS_82ABD8) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(120);
  {
    IS_82ABD8 t_6 = portIds;
    int8_t t_7 = (portIds)->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      Z portId = t_6->value[t_8];

      sfUpdateLoc(122);
      if (Z__eq(portId, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_mission_rcv_Id_(this))) {

        sfUpdateLoc(123);
        DeclNewOption_8E9F45(_t_2);
        Option_8E9F45 t_2;
        DeclNewOption_8E9F45(t_3);
        art_Art_getValue(SF (Option_8E9F45) &t_3, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_mission_rcv_Id_(this));
        t_2 = (Option_8E9F45) ((Option_8E9F45) &t_3);
        B value;
        sfAssert(uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_extract_123_15_8E9F45(SF t_2, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(124);
        uav_project_extern_SW_FlightPlanner_Impl_Impl_handlemission_rcv_(SF uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_component_(this), value);
      } else {

        sfUpdateLoc(126);
        if (Z__eq(portId, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_recv_map_Id_(this))) {

          sfUpdateLoc(127);
          DeclNewOption_8E9F45(_t_4);
          Option_8E9F45 t_4;
          DeclNewOption_8E9F45(t_5);
          art_Art_getValue(SF (Option_8E9F45) &t_5, uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_recv_map_Id_(this));
          t_4 = (Option_8E9F45) ((Option_8E9F45) &t_5);
          uav_project_extern_SW_Command_Impl value;
          sfAssert(uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_extract_127_15_8E9F45(SF t_4, this, &value), "Error during var pattern matching.");

          sfUpdateLoc(128);
          uav_project_extern_SW_FlightPlanner_Impl_Impl_handlerecv_map_(SF uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_component_(this), (uav_project_extern_SW_Command_Impl) value);
        }
      }
    }
  }

  sfUpdateLoc(132);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(144);
  uav_project_extern_SW_FlightPlanner_Impl_Impl_finalise_(SF uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_component_(this));
}