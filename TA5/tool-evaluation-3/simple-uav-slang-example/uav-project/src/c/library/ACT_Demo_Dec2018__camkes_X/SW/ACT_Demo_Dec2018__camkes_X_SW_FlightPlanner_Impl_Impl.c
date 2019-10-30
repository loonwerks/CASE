#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl

B ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api__ne((ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api) &this->api, (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl", "string", 0);
  String_string(SF result, string("FlightPlanner_Impl_Impl("));
  ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api) &this->api);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlightPlanner_Impl_Impl("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_cprint((ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api));
  this->missioncommand_sent = F;
}

Unit ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_handlemission_rcv_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl", "handlemission_rcv", 0);

  sfUpdateLoc(44);
  DeclNewString(t_0);
  String_string(SF (String) &t_0, string("FPLN:< Received mission receipt confirmation: "));
  B_string(SF (String) &t_0, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_value_(value));
  String_string(SF (String) &t_0, string(""));
  ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_api_(this), (String) ((String) &t_0));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_handlerecv_map_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl", "handlerecv_map", 0);

  sfUpdateLoc(15);
  ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_api_(this), (String) string("FPLN:< Command."));

  sfUpdateLoc(16);
  DeclNewString(t_0);
  String_string(SF (String) &t_0, string("  "));
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_string(SF (String) &t_0, value);
  String_string(SF (String) &t_0, string(""));
  ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(18);
  if ((!ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_missioncommand_sent_(this))) {

    sfUpdateLoc(21);
    STATIC_ASSERT(10 <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
    DeclNewIS_5D0BE7(t_2);
    t_2.size = (int8_t) 10;
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
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_7);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_7, Z32_C(4), Z32_C(5), Z32_C(6));
    Type_assign(&t_2.value[4], (&t_7), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_8);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_8, Z32_C(5), Z32_C(6), Z32_C(7));
    Type_assign(&t_2.value[5], (&t_8), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_9);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_9, Z32_C(6), Z32_C(7), Z32_C(8));
    Type_assign(&t_2.value[6], (&t_9), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_10);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_10, Z32_C(7), Z32_C(8), Z32_C(9));
    Type_assign(&t_2.value[7], (&t_10), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_11);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_11, Z32_C(8), Z32_C(9), Z32_C(10));
    Type_assign(&t_2.value[8], (&t_11), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl(t_12);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(SF &t_12, Z32_C(9), Z32_C(10), Z32_C(11));
    Type_assign(&t_2.value[9], (&t_12), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
    DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission(t_1);
    ACT_Demo_Dec2018__camkes_X_SW_Mission_apply(SF &t_1, (IS_5D0BE7) (&t_2));
    ACT_Demo_Dec2018__camkes_X_SW_Mission mission = (ACT_Demo_Dec2018__camkes_X_SW_Mission) (&t_1);

    sfUpdateLoc(34);
    ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_api_(this), (String) string("FPLN:> new mission notification"));

    sfUpdateLoc(37);
    ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_sendflight_plan_(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_api_(this), (ACT_Demo_Dec2018__camkes_X_SW_Mission) mission);

    sfUpdateLoc(39);
    ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl_missioncommand_sent_a(this,(B) T);
  }
}