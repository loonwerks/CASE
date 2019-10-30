#include <all.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge

B uav_project_extern_SW_RadioDriver_Impl_Bridge__eq(uav_project_extern_SW_RadioDriver_Impl_Bridge this, uav_project_extern_SW_RadioDriver_Impl_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (art_Port_311EA2__ne((art_Port_311EA2) &this->recv_map_out, (art_Port_311EA2) &other->recv_map_out)) return F;
  return T;
}

B uav_project_extern_SW_RadioDriver_Impl_Bridge__ne(uav_project_extern_SW_RadioDriver_Impl_Bridge this, uav_project_extern_SW_RadioDriver_Impl_Bridge other);

void uav_project_extern_SW_RadioDriver_Impl_Bridge_string_(STACK_FRAME String result, uav_project_extern_SW_RadioDriver_Impl_Bridge this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge", "string", 0);
  String_string_(SF result, string("RadioDriver_Impl_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  art_Port_311EA2_string_(SF result, (art_Port_311EA2) &this->recv_map_out);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_RadioDriver_Impl_Bridge_cprint(uav_project_extern_SW_RadioDriver_Impl_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Impl_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  art_Port_311EA2_cprint((art_Port_311EA2) &this->recv_map_out, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_RadioDriver_Impl_Bridge__is(STACK_FRAME void* this);
uav_project_extern_SW_RadioDriver_Impl_Bridge uav_project_extern_SW_RadioDriver_Impl_Bridge__as(STACK_FRAME void *this);

void uav_project_extern_SW_RadioDriver_Impl_Bridge_apply(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_311EA2 recv_map_out) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->recv_map_out, recv_map_out, sizeof(struct art_Port_311EA2));
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 1;
  IS_820232_up(&t_1, 0, (art_UPort) uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(this));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 0;
  STATIC_ASSERT(1 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 1;
  IS_820232_up(&t_5, 0, (art_UPort) uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(this));
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewuav_project_extern_SW_RadioDriver_Impl_Bridge_Api(t_6);
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_apply(SF &t_6, uav_project_extern_SW_RadioDriver_Impl_Bridge_id_(this), art_Port_311EA2_id_(uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Bridge_Api));
  DeclNewuav_project_extern_SW_RadioDriver_Impl_Impl(t_8);
  uav_project_extern_SW_RadioDriver_Impl_Impl_apply(SF &t_8, (uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) uav_project_extern_SW_RadioDriver_Impl_Bridge_api_(this));
  DeclNewuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints(t_7);
  uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_apply(SF &t_7, uav_project_extern_SW_RadioDriver_Impl_Bridge_id_(this), art_Port_311EA2_id_(uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(this)), (uav_project_extern_SW_RadioDriver_Impl_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints));
}