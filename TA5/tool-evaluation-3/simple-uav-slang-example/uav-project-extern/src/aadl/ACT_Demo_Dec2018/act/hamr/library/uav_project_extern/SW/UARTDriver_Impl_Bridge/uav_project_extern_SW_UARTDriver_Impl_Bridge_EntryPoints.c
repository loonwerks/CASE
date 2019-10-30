#include <all.h>

// uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints

B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__eq(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->UARTDriver_Impl_BridgeId, other->UARTDriver_Impl_BridgeId)) return F;
  if (Z__ne(this->mission_window_Id, other->mission_window_Id)) return F;
  if (Z__ne(this->tracking_id_Id, other->tracking_id_Id)) return F;
  if (uav_project_extern_SW_UARTDriver_Impl_Impl__ne((uav_project_extern_SW_UARTDriver_Impl_Impl) &this->component, (uav_project_extern_SW_UARTDriver_Impl_Impl) &other->component)) return F;
  return T;
}

B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__ne(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints other);

void uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->UARTDriver_Impl_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->mission_window_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->tracking_id_Id);
  String_string_(SF result, sep);
  uav_project_extern_SW_UARTDriver_Impl_Impl_string_(SF result, (uav_project_extern_SW_UARTDriver_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_cprint(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->UARTDriver_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_window_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tracking_id_Id, isOut);
  String_cprint(sep, isOut);
  uav_project_extern_SW_UARTDriver_Impl_Impl_cprint((uav_project_extern_SW_UARTDriver_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_apply(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, Z UARTDriver_Impl_BridgeId, Z mission_window_Id, Z tracking_id_Id, uav_project_extern_SW_UARTDriver_Impl_Impl component) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints", "apply", 0);
  this->UARTDriver_Impl_BridgeId = UARTDriver_Impl_BridgeId;
  this->mission_window_Id = mission_window_Id;
  this->tracking_id_Id = tracking_id_Id;
  Type_assign(&this->component, component, sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 1;
  IS_82ABD8_up(&t_1, 0, (Z) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this));
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  IS_82ABD8_up(&t_3, 0, (Z) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_tracking_id_Id_(this));
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(128);
  uav_project_extern_SW_UARTDriver_Impl_Impl_initialise_(SF uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(129);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

static inline B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_extract_101_11(STACK_FRAME art_DispatchStatus t_0, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, IS_82ABD8 *_portIds) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

static inline B uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_extract_107_15_8E9F45(STACK_FRAME Option_8E9F45 t_2, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_MissionWindow *_value) {
  if (!Some_D29615__is(SF t_2)) return F;
  if (!uav_project_extern_SW_MissionWindow_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_2)))) return F;
  *_value = (uav_project_extern_SW_MissionWindow) uav_project_extern_SW_MissionWindow_Payload_value_(uav_project_extern_SW_MissionWindow_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_2))));
  return T;
}

Unit uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(101);
  DeclNewart_DispatchStatus(_t_0);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_UARTDriver_Impl_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 portIds;
  sfAssert(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_extract_101_11(SF t_0, this, &portIds), "Error during var pattern matching.");

  sfUpdateLoc(102);
  art_Art_receiveInput(SF (IS_82ABD8) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(104);
  {
    IS_82ABD8 t_4 = portIds;
    int8_t t_5 = (portIds)->size;
    for (int8_t t_6 = 0; t_6 < t_5; t_6++) {
      Z portId = t_4->value[t_6];

      sfUpdateLoc(106);
      if (Z__eq(portId, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this))) {

        sfUpdateLoc(107);
        DeclNewOption_8E9F45(_t_2);
        Option_8E9F45 t_2;
        DeclNewOption_8E9F45(t_3);
        art_Art_getValue(SF (Option_8E9F45) &t_3, uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this));
        t_2 = (Option_8E9F45) ((Option_8E9F45) &t_3);
        uav_project_extern_SW_MissionWindow value;
        sfAssert(uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_extract_107_15_8E9F45(SF t_2, this, &value), "Error during var pattern matching.");

        sfUpdateLoc(108);
        uav_project_extern_SW_UARTDriver_Impl_Impl_handlemission_window_(SF uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this), (uav_project_extern_SW_MissionWindow) value);
      }
    }
  }

  sfUpdateLoc(112);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(124);
  uav_project_extern_SW_UARTDriver_Impl_Impl_finalise_(SF uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this));
}