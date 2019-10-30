#include <all.h>

// uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints

B uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints__eq(uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->WaypointManager_Impl_BridgeId, other->WaypointManager_Impl_BridgeId)) return F;
  if (Z__ne(this->flight_plan_Id, other->flight_plan_Id)) return F;
  if (Z__ne(this->tracking_id_Id, other->tracking_id_Id)) return F;
  if (Z__ne(this->mission_rcv_Id, other->mission_rcv_Id)) return F;
  if (Z__ne(this->mission_window_Id, other->mission_window_Id)) return F;
  if (uav_project_extern_SW_WaypointManager_Impl_Impl__ne((uav_project_extern_SW_WaypointManager_Impl_Impl) &this->component, (uav_project_extern_SW_WaypointManager_Impl_Impl) &other->component)) return F;
  return T;
}

B uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints__ne(uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints other);

void uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->WaypointManager_Impl_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->flight_plan_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->tracking_id_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->mission_rcv_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->mission_window_Id);
  String_string_(SF result, sep);
  uav_project_extern_SW_WaypointManager_Impl_Impl_string_(SF result, (uav_project_extern_SW_WaypointManager_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_cprint(uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->WaypointManager_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->flight_plan_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tracking_id_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_rcv_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_window_Id, isOut);
  String_cprint(sep, isOut);
  uav_project_extern_SW_WaypointManager_Impl_Impl_cprint((uav_project_extern_SW_WaypointManager_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_apply(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, Z WaypointManager_Impl_BridgeId, Z flight_plan_Id, Z tracking_id_Id, Z mission_rcv_Id, Z mission_window_Id, uav_project_extern_SW_WaypointManager_Impl_Impl component) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints", "apply", 0);
  this->WaypointManager_Impl_BridgeId = WaypointManager_Impl_BridgeId;
  this->flight_plan_Id = flight_plan_Id;
  this->tracking_id_Id = tracking_id_Id;
  this->mission_rcv_Id = mission_rcv_Id;
  this->mission_window_Id = mission_window_Id;
  Type_assign(&this->component, component, sizeof(struct uav_project_extern_SW_WaypointManager_Impl_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 2;
  IS_82ABD8_up(&t_1, 0, (Z) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_flight_plan_Id_(this));
  IS_82ABD8_up(&t_1, 1, (Z) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_tracking_id_Id_(this));
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 2;
  IS_82ABD8_up(&t_3, 0, (Z) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_mission_rcv_Id_(this));
  IS_82ABD8_up(&t_3, 1, (Z) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_mission_window_Id_(this));
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(160);
  uav_project_extern_SW_WaypointManager_Impl_Impl_initialise_(SF uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(161);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

static inline B uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_extract_129_11(STACK_FRAME art_DispatchStatus t_0, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, IS_82ABD8 *_portIds) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

static inline B uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_extract_135_15_8E9F45(STACK_FRAME Option_8E9F45 t_2, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, uav_project_extern_SW_Mission *_value) {
  if (!Some_D29615__is(SF t_2)) return F;
  if (!uav_project_extern_SW_Mission_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_2)))) return F;
  *_value = (uav_project_extern_SW_Mission) uav_project_extern_SW_Mission_Payload_value_(uav_project_extern_SW_Mission_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_2))));
  return T;
}

static inline B uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_extract_139_15_8E9F45(STACK_FRAME Option_8E9F45 t_4, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this, S64 *_value) {
  if (!Some_D29615__is(SF t_4)) return F;
  if (!uav_project_extern_Base_Types_Integer_64_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_4)))) return F;
  *_value = uav_project_extern_Base_Types_Integer_64_Payload_value_(uav_project_extern_Base_Types_Integer_64_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_4))));
  return T;
}

Unit uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(129);
  DeclNewart_DispatchStatus(_t_0);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_WaypointManager_Impl_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 portIds;
  sfAssert(uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_extract_129_11(SF t_0, this, &portIds), "Error during var pattern matching.");

  sfUpdateLoc(130);
  art_Art_receiveInput(SF (IS_82ABD8) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(132);
  {
    IS_82ABD8 t_6 = portIds;
    int8_t t_7 = (portIds)->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      Z portId = t_6->value[t_8];

      sfUpdateLoc(134);
      if (Z__eq(portId, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_flight_plan_Id_(this))) {

        sfUpdateLoc(135);
        DeclNewOption_8E9F45(_t_2);
        Option_8E9F45 t_2;
        DeclNewOption_8E9F45(t_3);
        art_Art_getValue(SF (Option_8E9F45) &t_3, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_flight_plan_Id_(this));
        t_2 = (Option_8E9F45) ((Option_8E9F45) &t_3);
        uav_project_extern_SW_Mission value;
        sfAssert(uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_extract_135_15_8E9F45(SF t_2, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(136);
        uav_project_extern_SW_WaypointManager_Impl_Impl_handleflight_plan_(SF uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_component_(this), (uav_project_extern_SW_Mission) value);
      } else {

        sfUpdateLoc(138);
        if (Z__eq(portId, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_tracking_id_Id_(this))) {

          sfUpdateLoc(139);
          DeclNewOption_8E9F45(_t_4);
          Option_8E9F45 t_4;
          DeclNewOption_8E9F45(t_5);
          art_Art_getValue(SF (Option_8E9F45) &t_5, uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_tracking_id_Id_(this));
          t_4 = (Option_8E9F45) ((Option_8E9F45) &t_5);
          S64 value;
          sfAssert(uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_extract_139_15_8E9F45(SF t_4, this, &value), "Error during var pattern matching.");

          sfUpdateLoc(140);
          uav_project_extern_SW_WaypointManager_Impl_Impl_handletracking_id_(SF uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_component_(this), value);
        }
      }
    }
  }

  sfUpdateLoc(144);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(156);
  uav_project_extern_SW_WaypointManager_Impl_Impl_finalise_(SF uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_component_(this));
}