#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge

B ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge__eq(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge this, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (art_Port_D7D05E__ne((art_Port_D7D05E) &this->flight_plan, (art_Port_D7D05E) &other->flight_plan)) return F;
  if (art_Port_9D6F5D__ne((art_Port_9D6F5D) &this->mission_rcv, (art_Port_9D6F5D) &other->mission_rcv)) return F;
  if (art_Port_2D3735__ne((art_Port_2D3735) &this->mission_window, (art_Port_2D3735) &other->mission_window)) return F;
  if (art_Port_446859__ne((art_Port_446859) &this->tracking_id, (art_Port_446859) &other->tracking_id)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge", "string", 0);
  String_string(SF result, string("WaypointManager_Impl_Bridge("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  String_string(SF result, (String) &this->name);
  String_string(SF result, sep);
  art_DispatchPropertyProtocol_string(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string(SF result, sep);
  art_Port_D7D05E_string(SF result, (art_Port_D7D05E) &this->flight_plan);
  String_string(SF result, sep);
  art_Port_9D6F5D_string(SF result, (art_Port_9D6F5D) &this->mission_rcv);
  String_string(SF result, sep);
  art_Port_2D3735_string(SF result, (art_Port_2D3735) &this->mission_window);
  String_string(SF result, sep);
  art_Port_446859_string(SF result, (art_Port_446859) &this->tracking_id);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_cprint(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("WaypointManager_Impl_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  art_Port_D7D05E_cprint((art_Port_D7D05E) &this->flight_plan, isOut);
  String_cprint(sep, isOut);
  art_Port_9D6F5D_cprint((art_Port_9D6F5D) &this->mission_rcv, isOut);
  String_cprint(sep, isOut);
  art_Port_2D3735_cprint((art_Port_2D3735) &this->mission_window, isOut);
  String_cprint(sep, isOut);
  art_Port_446859_cprint((art_Port_446859) &this->tracking_id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_D7D05E flight_plan, art_Port_9D6F5D mission_rcv, art_Port_2D3735 mission_window, art_Port_446859 tracking_id) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->flight_plan, flight_plan, sizeof(struct art_Port_D7D05E));
  Type_assign(&this->mission_rcv, mission_rcv, sizeof(struct art_Port_9D6F5D));
  Type_assign(&this->mission_window, mission_window, sizeof(struct art_Port_2D3735));
  Type_assign(&this->tracking_id, tracking_id, sizeof(struct art_Port_446859));
  STATIC_ASSERT(4 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 4;
  Type_assign(&t_1.value[0], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[1], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_rcv_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[2], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_window_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[3], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(this), sizeof(union art_UPort));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 0;
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 2;
  Type_assign(&t_4.value[0], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(this), sizeof(union art_UPort));
  Type_assign(&t_4.value[1], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(this), sizeof(union art_UPort));
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 2;
  Type_assign(&t_5.value[0], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_rcv_(this), sizeof(union art_UPort));
  Type_assign(&t_5.value[1], ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_window_(this), sizeof(union art_UPort));
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api(t_6);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_apply(SF &t_6, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_id_(this), art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(this)), art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_rcv_(this)), art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_window_(this)), art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl(t_8);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_apply(SF &t_8, (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api) ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_api_(this));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints(t_7);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints_apply(SF &t_7, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_id_(this), art_Port_D7D05E_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(this)), art_Port_9D6F5D_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_rcv_(this)), art_Port_2D3735_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_window_(this)), art_Port_446859_id_(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(this)), (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints));
}