#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints

B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints__eq(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->UARTDriver_Impl_BridgeId, other->UARTDriver_Impl_BridgeId)) return F;
  if (Z__ne(this->mission_window_Id, other->mission_window_Id)) return F;
  if (Z__ne(this->tracking_id_Id, other->tracking_id_Id)) return F;
  if (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl__ne((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl) &this->component, (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl) &other->component)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints", "string", 0);
  String_string(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string(SF result, this->UARTDriver_Impl_BridgeId);
  String_string(SF result, sep);
  Z_string(SF result, this->mission_window_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->tracking_id_Id);
  String_string(SF result, sep);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl) &this->component);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_cprint(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->UARTDriver_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_window_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tracking_id_Id, isOut);
  String_cprint(sep, isOut);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_cprint((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this, Z UARTDriver_Impl_BridgeId, Z mission_window_Id, Z tracking_id_Id, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl component) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints", "apply", 0);
  this->UARTDriver_Impl_BridgeId = UARTDriver_Impl_BridgeId;
  this->mission_window_Id = mission_window_Id;
  this->tracking_id_Id = tracking_id_Id;
  Type_assign(&this->component, component, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 1;
  t_1.value[0] = ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this);
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  t_3.value[0] = ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_tracking_id_Id_(this);
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(101);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_initialise_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(105);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_UARTDriver_Impl_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  B t_2 = T;
  IS_82ABD8 portIds;
  {
    t_2 = t_2 && art_EventTriggered__is(SF t_0);
    if (t_2) {
      portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
    }
  }
  sfAssert(t_2, "Error during var pattern matching.");

  sfUpdateLoc(106);
  art_Art_receiveInput(SF (IS_82ABD8) portIds, (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(108);
  {
    IS_82ABD8 t_6 = portIds;
    int8_t t_7 = (portIds)->size;
    for (int8_t t_8 = 0; t_8 < t_7; t_8++) {
      Z portId = t_6->value[t_8];

      sfUpdateLoc(110);
      if (Z__eq(portId, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this))) {

        sfUpdateLoc(111);
        Option_8E9F45 t_3;
        DeclNewOption_8E9F45(t_4);
        art_Art_getValue(SF (Option_8E9F45) &t_4, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_mission_window_Id_(this));
        t_3 = (Option_8E9F45) ((Option_8E9F45) &t_4);
        B t_5 = T;
        ACT_Demo_Dec2018__camkes_X_SW_MissionWindow value;
        {
          t_5 = t_5 && Some_D29615__is(SF t_3);
          if (t_5) {
            t_5 = t_5 && ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_3)));
            if (t_5) {
              value = (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload_value_(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_3))));
            }
          }
        }
        sfAssert(t_5, "Error during var pattern matching.");

        sfUpdateLoc(112);
        ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_handlemission_window_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this), (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) value);
      }
    }
  }

  sfUpdateLoc(116);
  art_Art_sendOutput(SF (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(132);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl_finalise_(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_component_(this));
}