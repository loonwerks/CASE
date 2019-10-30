#include <all.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge

B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge__eq(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (art_Port_2C63FD__ne((art_Port_2C63FD) &this->recv_map_inn, (art_Port_2C63FD) &other->recv_map_inn)) return F;
  if (art_Port_695448__ne((art_Port_695448) &this->recv_map_out, (art_Port_695448) &other->recv_map_out)) return F;
  if (art_Port_FD6239__ne((art_Port_FD6239) &this->send_status_inn, (art_Port_FD6239) &other->send_status_inn)) return F;
  if (art_Port_2C63FD__ne((art_Port_2C63FD) &this->send_status_out, (art_Port_2C63FD) &other->send_status_out)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge this) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge", "string", 0);
  String_string(SF result, string("Radio_Impl_Bridge("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  String_string(SF result, (String) &this->name);
  String_string(SF result, sep);
  art_DispatchPropertyProtocol_string(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string(SF result, sep);
  art_Port_2C63FD_string(SF result, (art_Port_2C63FD) &this->recv_map_inn);
  String_string(SF result, sep);
  art_Port_695448_string(SF result, (art_Port_695448) &this->recv_map_out);
  String_string(SF result, sep);
  art_Port_FD6239_string(SF result, (art_Port_FD6239) &this->send_status_inn);
  String_string(SF result, sep);
  art_Port_2C63FD_string(SF result, (art_Port_2C63FD) &this->send_status_out);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_cprint(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Radio_Impl_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  art_Port_2C63FD_cprint((art_Port_2C63FD) &this->recv_map_inn, isOut);
  String_cprint(sep, isOut);
  art_Port_695448_cprint((art_Port_695448) &this->recv_map_out, isOut);
  String_cprint(sep, isOut);
  art_Port_FD6239_cprint((art_Port_FD6239) &this->send_status_inn, isOut);
  String_cprint(sep, isOut);
  art_Port_2C63FD_cprint((art_Port_2C63FD) &this->send_status_out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_2C63FD recv_map_inn, art_Port_695448 recv_map_out, art_Port_FD6239 send_status_inn, art_Port_2C63FD send_status_out) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->recv_map_inn, recv_map_inn, sizeof(struct art_Port_2C63FD));
  Type_assign(&this->recv_map_out, recv_map_out, sizeof(struct art_Port_695448));
  Type_assign(&this->send_status_inn, send_status_inn, sizeof(struct art_Port_FD6239));
  Type_assign(&this->send_status_out, send_status_out, sizeof(struct art_Port_2C63FD));
  STATIC_ASSERT(4 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 4;
  Type_assign(&t_1.value[0], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_inn_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[1], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_out_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[2], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_inn_(this), sizeof(union art_UPort));
  Type_assign(&t_1.value[3], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_out_(this), sizeof(union art_UPort));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 0;
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 2;
  Type_assign(&t_4.value[0], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_inn_(this), sizeof(union art_UPort));
  Type_assign(&t_4.value[1], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_inn_(this), sizeof(union art_UPort));
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 2;
  Type_assign(&t_5.value[0], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_out_(this), sizeof(union art_UPort));
  Type_assign(&t_5.value[1], ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_out_(this), sizeof(union art_UPort));
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api(t_6);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_apply(SF &t_6, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_id_(this), art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_inn_(this)), art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_out_(this)), art_Port_FD6239_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_inn_(this)), art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_out_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api));
  DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl(t_8);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_apply(SF &t_8, (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_api_(this));
  DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints(t_7);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_apply(SF &t_7, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_id_(this), art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_inn_(this)), art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_recv_map_out_(this)), art_Port_FD6239_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_inn_(this)), art_Port_2C63FD_id_(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_send_status_out_(this)), (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints));
}