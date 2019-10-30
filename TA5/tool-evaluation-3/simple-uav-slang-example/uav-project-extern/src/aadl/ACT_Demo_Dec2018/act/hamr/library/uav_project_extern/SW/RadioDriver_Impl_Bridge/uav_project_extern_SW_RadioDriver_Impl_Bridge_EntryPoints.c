#include <all.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints

B uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints__eq(uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->RadioDriver_Impl_BridgeId, other->RadioDriver_Impl_BridgeId)) return F;
  if (Z__ne(this->recv_map_out_Id, other->recv_map_out_Id)) return F;
  if (uav_project_extern_SW_RadioDriver_Impl_Impl__ne((uav_project_extern_SW_RadioDriver_Impl_Impl) &this->component, (uav_project_extern_SW_RadioDriver_Impl_Impl) &other->component)) return F;
  return T;
}

B uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints__ne(uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this, uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints other);

void uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_string_(STACK_FRAME String result, uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints", "string", 0);
  String_string_(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string_(SF result, this->RadioDriver_Impl_BridgeId);
  String_string_(SF result, sep);
  Z_string_(SF result, this->recv_map_out_Id);
  String_string_(SF result, sep);
  uav_project_extern_SW_RadioDriver_Impl_Impl_string_(SF result, (uav_project_extern_SW_RadioDriver_Impl_Impl) &this->component);
  String_string_(SF result, string(")"));
}

void uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_cprint(uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->RadioDriver_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_out_Id, isOut);
  String_cprint(sep, isOut);
  uav_project_extern_SW_RadioDriver_Impl_Impl_cprint((uav_project_extern_SW_RadioDriver_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints__is(STACK_FRAME void* this);
uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints__as(STACK_FRAME void *this);

void uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_apply(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this, Z RadioDriver_Impl_BridgeId, Z recv_map_out_Id, uav_project_extern_SW_RadioDriver_Impl_Impl component) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints", "apply", 0);
  this->RadioDriver_Impl_BridgeId = RadioDriver_Impl_BridgeId;
  this->recv_map_out_Id = recv_map_out_Id;
  Type_assign(&this->component, component, sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 0;
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 1;
  IS_82ABD8_up(&t_3, 0, (Z) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_recv_map_out_Id_(this));
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(110);
  uav_project_extern_SW_RadioDriver_Impl_Impl_initialise_(SF uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(111);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

static inline B uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_compute_extract_87_11(STACK_FRAME art_DispatchStatus t_0, uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this, IS_82ABD8 *_portIds) {
  if (!art_EventTriggered__is(SF t_0)) return F;
  *_portIds = (IS_82ABD8) art_EventTriggered_portIds_(art_EventTriggered__as(SF t_0));
  return T;
}

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_compute_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(87);
  DeclNewart_DispatchStatus(_t_0);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_RadioDriver_Impl_BridgeId_(this));
  t_0 = (art_DispatchStatus) ((art_DispatchStatus) &t_1);
  IS_82ABD8 portIds;
  sfAssert(uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_compute_extract_87_11(SF t_0, this, &portIds), "Error during var pattern matching.");

  sfUpdateLoc(88);
  art_Art_receiveInput(SF (IS_82ABD8) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(90);
  {
    IS_82ABD8 t_2 = portIds;
    int8_t t_3 = (portIds)->size;
    for (int8_t t_4 = 0; t_4 < t_3; t_4++) {
      Z portId = t_2->value[t_4];
    }
  }

  sfUpdateLoc(94);
  art_Art_sendOutput(SF (IS_82ABD8) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(106);
  uav_project_extern_SW_RadioDriver_Impl_Impl_finalise_(SF uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_component_(this));
}