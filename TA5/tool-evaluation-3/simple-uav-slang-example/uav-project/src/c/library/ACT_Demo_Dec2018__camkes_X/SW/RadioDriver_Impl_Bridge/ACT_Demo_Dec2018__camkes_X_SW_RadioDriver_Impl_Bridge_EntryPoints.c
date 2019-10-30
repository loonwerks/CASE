#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints

B ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints__eq(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->RadioDriver_Impl_BridgeId, other->RadioDriver_Impl_BridgeId)) return F;
  if (Z__ne(this->recv_map_out_Id, other->recv_map_out_Id)) return F;
  if (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl__ne((ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl) &this->component, (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl) &other->component)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints", "string", 0);
  String_string(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string(SF result, this->RadioDriver_Impl_BridgeId);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_out_Id);
  String_string(SF result, sep);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl) &this->component);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_cprint(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->RadioDriver_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_out_Id, isOut);
  String_cprint(sep, isOut);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_cprint((ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this, Z RadioDriver_Impl_BridgeId, Z recv_map_out_Id, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl component) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints", "apply", 0);
  this->RadioDriver_Impl_BridgeId = RadioDriver_Impl_BridgeId;
  this->recv_map_out_Id = recv_map_out_Id;
  Type_assign(&this->component, component, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl));
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
  t_3.value[0] = ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_recv_map_out_Id_(this);
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(87);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_initialise_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_component_(this));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_compute_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(91);
  art_DispatchStatus t_0;
  DeclNewart_DispatchStatus(t_1);
  art_Art_dispatchStatus(SF (art_DispatchStatus) &t_1, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_RadioDriver_Impl_BridgeId_(this));
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

  sfUpdateLoc(92);
  art_Art_receiveInput(SF (IS_82ABD8) portIds, (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(94);
  {
    IS_82ABD8 t_3 = portIds;
    int8_t t_4 = (portIds)->size;
    for (int8_t t_5 = 0; t_5 < t_4; t_5++) {
      Z portId = t_3->value[t_5];
    }
  }

  sfUpdateLoc(98);
  art_Art_sendOutput(SF (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(114);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_finalise_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_component_(this));
}