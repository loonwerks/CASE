#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Impl

B ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api__ne((ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api) &this->api, (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Impl", "string", 0);
  String_string(SF result, string("RadioDriver_Impl_Impl("));
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api) &this->api);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("RadioDriver_Impl_Impl("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_cprint((ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_initialise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Impl", "initialise", 0);

  sfUpdateLoc(13);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_api_(this), (String) string("RDIO: initialise entry point called"));

  sfUpdateLoc(16);
  STATIC_ASSERT(4 <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
  DeclNewIS_5D0BE7(t_2);
  t_2.size = (int8_t) 4;
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_3);
  ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_3, Z32_C(0), Z32_C(1), Z32_C(2));
  Type_assign(&t_2.value[0], (&t_3), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_4);
  ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_4, Z32_C(1), Z32_C(2), Z32_C(3));
  Type_assign(&t_2.value[1], (&t_4), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_5);
  ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_5, Z32_C(2), Z32_C(3), Z32_C(4));
  Type_assign(&t_2.value[2], (&t_5), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_6);
  ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_6, Z32_C(3), Z32_C(4), Z32_C(5));
  Type_assign(&t_2.value[3], (&t_6), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_SW__Map(t_1);
  ACT_Demo_Dec2018__camkes_X_SW_SW__Map_apply(SF &t_1, (IS_5D0BE7) (&t_2));
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Command_Impl(t_0);
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_SW_SW__Map) (&t_1), ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_Perimeter, T);
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl command = (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) (&t_0);

  sfUpdateLoc(26);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_api_(this), (String) string("RDIO:> Sending command"));

  sfUpdateLoc(29);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_api_(this), (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) command);

  sfUpdateLoc(31);
  DeclNewString(t_7);
  String_string(SF (String) &t_7, string(""));
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_string(SF (String) &t_7, command);
  String_string(SF (String) &t_7, string(""));
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl_api_(this), (String) ((String) &t_7));

  sfUpdateLoc(34);
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_8);
  t_8.size = (int8_t) 1;
  t_8.value[0] = art_Port_695448_id_(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_recv_map_out_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_9);
  t_9.size = (int8_t) 0;
  art_Art_sendOutput(SF (IS_82ABD8) (&t_8), (IS_82ABD8) (&t_9));
}