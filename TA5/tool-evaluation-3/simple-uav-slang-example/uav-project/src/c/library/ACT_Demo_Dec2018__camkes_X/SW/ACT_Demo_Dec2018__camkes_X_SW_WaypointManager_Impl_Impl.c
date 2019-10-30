#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl

B ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api__ne((ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api) &this->api, (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl", "string", 0);
  String_string(SF result, string("WaypointManager_Impl_Impl("));
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api) &this->api);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("WaypointManager_Impl_Impl("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_cprint((ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api));
  DeclNewNone_0CCA05(t_0);
  None_0CCA05_apply(SF &t_0);
  Type_assign(&this->_mission, (&t_0), sizeof(struct None_0CCA05));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_handleflight_plan_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Mission mission) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl", "handleflight_plan", 0);

  sfUpdateLoc(39);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (String) string("WM:< Received flight plan"));

  sfUpdateLoc(41);
  DeclNewSome_3B09D7(t_0);
  Some_3B09D7_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_SW_Mission) mission);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl__mission_a(this,(Option_6B846D) (&t_0));

  sfUpdateLoc(43);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission(t_1);
  Option_6B846D_get_(SF (ACT_Demo_Dec2018__camkes_X_SW_Mission) &t_1, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl__mission_(this));
  IS_5D0BE7 x1 = (IS_5D0BE7) ACT_Demo_Dec2018__camkes_X_SW_Mission_value_(((ACT_Demo_Dec2018__camkes_X_SW_Mission) &t_1));

  sfUpdateLoc(44);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (String) string("  Mission:"));

  sfUpdateLoc(45);
  {
    Z i = Z_C(0);
    Z t_3 = Z_C(9);
    Z t_4 = 1;
    while (i < t_3) {

      sfUpdateLoc(46);
      DeclNewString(t_2);
      String_string(SF (String) &t_2, string("    "));
      ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_string(SF (String) &t_2, IS_5D0BE7_at(x1, i));
      String_string(SF (String) &t_2, string(""));
      ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (String) ((String) &t_2));

      sfUpdateLoc(45);
      i = (Z) (i + t_4);
    }
  }

  sfUpdateLoc(49);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_sendWin_(SF this, Z_C(0));

  sfUpdateLoc(52);
  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Boolean(t_5);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_apply(SF &t_5, T);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_sendmission_rcv_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) (&t_5));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_handletracking_id_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 nid) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl", "handletracking_id", 0);

  sfUpdateLoc(56);
  DeclNewString(t_0);
  String_string(SF (String) &t_0, string("WM:< Received "));
  Z64_string(SF (String) &t_0, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_value_(nid));
  String_string(SF (String) &t_0, string(" as the next tracking id."));
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(58);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_sendWin_(SF this, conversions_Z64_toZ(SF ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_value_(nid)));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_sendWin_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl this, Z i) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl", "sendWin", 0);

  sfUpdateLoc(16);
  DeclNewOption_6B846D(t_0);
  Type_assign(&t_0, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl__mission_(this), sizeof(union Option_6B846D));
  B match_16 = F;
  if (!match_16) {
    match_16 = T;
    ACT_Demo_Dec2018__camkes_X_SW_Mission v_17_17;
    match_16 = match_16 && Some_3B09D7__is(SF &t_0);
    if (match_16) {
      v_17_17 = (ACT_Demo_Dec2018__camkes_X_SW_Mission) Some_3B09D7_value_(Some_3B09D7__as(SF &t_0));
    }
    if (match_16) {

      sfUpdateLoc(18);
      IS_5D0BE7 x1 = (IS_5D0BE7) ACT_Demo_Dec2018__camkes_X_SW_Mission_value_(v_17_17);

      sfUpdateLoc(21);
      STATIC_ASSERT(4 <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
      DeclNewIS_5D0BE7(t_2);
      t_2.size = (int8_t) 4;
      Type_assign(&t_2.value[0], IS_5D0BE7_at(x1, Z__rem(i, Z_C(10))), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
      Type_assign(&t_2.value[1], IS_5D0BE7_at(x1, Z__rem(Z__add(i, Z_C(1)), Z_C(10))), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
      Type_assign(&t_2.value[2], IS_5D0BE7_at(x1, Z__rem(Z__add(i, Z_C(2)), Z_C(10))), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
      Type_assign(&t_2.value[3], IS_5D0BE7_at(x1, Z__rem(Z__add(i, Z_C(3)), Z_C(10))), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
      DeclNewACT_Demo_Dec2018__camkes_X_SW_MissionWindow(t_1);
      ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_apply(SF &t_1, (IS_5D0BE7) (&t_2));
      ACT_Demo_Dec2018__camkes_X_SW_MissionWindow missionWindow = (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) (&t_1);

      sfUpdateLoc(29);
      ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_sendmission_window_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) missionWindow);

      sfUpdateLoc(31);
      ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (String) string("WM:> Sent mission window"));
    }
  }
  if (!match_16) {
    match_16 = T;
    if (match_16) {

      sfUpdateLoc(33);
      ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logError_(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl_api_(this), (String) string("Unexpected: trying to create mission window by never received a mission"));
    }
  }
  sfAssert(match_16, "Error when pattern matching.");
}