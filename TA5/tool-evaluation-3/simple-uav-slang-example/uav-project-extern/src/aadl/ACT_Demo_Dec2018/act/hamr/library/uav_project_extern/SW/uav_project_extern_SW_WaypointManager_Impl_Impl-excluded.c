#include <all.h>

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "uav_project_extern.SW.WaypointManager_Impl_Impl", "initialise", 0);
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handleflight_plan_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_Mission mission) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "uav_project_extern.SW.WaypointManager_Impl_Impl", "handleflight_plan", 0);

  sfUpdateLoc(41);
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("WM:< Received flight plan"));

  sfUpdateLoc(43);
  DeclNewSome_C19C7E(t_0);
  Some_C19C7E_apply(SF &t_0, (uav_project_extern_SW_Mission) mission);
  uav_project_extern_SW_WaypointManager_Impl_Impl__mission_a(this, (Option_32416F) (&t_0));

  sfUpdateLoc(45);
  DeclNewIS_83A978(_x1);
  IS_83A978 x1;
  DeclNewuav_project_extern_SW_Mission(t_1);
  Option_32416F_get_(SF (uav_project_extern_SW_Mission) &t_1, uav_project_extern_SW_WaypointManager_Impl_Impl__mission_(this));
  x1 = (IS_83A978) uav_project_extern_SW_Mission_value_(((uav_project_extern_SW_Mission) &t_1));

  sfUpdateLoc(46);
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("  Mission:"));

  sfUpdateLoc(47);
  {
    Z i = Z_C(0);
    Z t_3 = IS_83A978_size(SF x1);
    Z t_4 = 1;
    while (i < t_3) {

      sfUpdateLoc(48);
      DeclNewString(t_2);
      String_string_(SF (String) &t_2, string("    "));
      uav_project_extern_SW_Coordinate_Impl_string_(SF (String) &t_2, IS_83A978_at(x1, i));
      String_string_(SF (String) &t_2, string(""));
      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) ((String) &t_2));

      sfUpdateLoc(47);
      i = (Z) (i + t_4);
    }
  }

  sfUpdateLoc(51);
  uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(SF this, Z_C(0));

  sfUpdateLoc(54);
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_sendmission_rcv_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), T);
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handletracking_id_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, S64 nid) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "uav_project_extern.SW.WaypointManager_Impl_Impl", "handletracking_id", 0);

  sfUpdateLoc(58);
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("WM:< Received "));
  S64_string_(SF (String) &t_0, nid);
  String_string_(SF (String) &t_0, string(" as the next tracking id."));
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(60);
  uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(SF this, conversions_S64_toZ(SF nid));
}

static inline B uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_extract_19_12_32416F(STACK_FRAME Option_32416F t_0, uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_Mission *_v_19_17) {
  if (!Some_C19C7E__is(SF t_0)) return F;
  *_v_19_17 = (uav_project_extern_SW_Mission) Some_C19C7E_value_(Some_C19C7E__as(SF t_0));
  return T;
}

static inline B uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_extract_34_12_32416F(STACK_FRAME Option_32416F t_0, uav_project_extern_SW_WaypointManager_Impl_Impl this) {
  return T;
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, Z i) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Impl.scala", "uav_project_extern.SW.WaypointManager_Impl_Impl", "sendWin", 0);

  sfUpdateLoc(18);
  Option_32416F t_0 = uav_project_extern_SW_WaypointManager_Impl_Impl__mission_(this);
  B match_18_5 = F;
  if (!match_18_5) {
    uav_project_extern_SW_Mission v_19_17;
    match_18_5 = uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_extract_19_12_32416F(SF t_0, this, &v_19_17);
    if (match_18_5) {

      sfUpdateLoc(20);
      DeclNewIS_83A978(_x1);
      IS_83A978 x1;
      x1 = (IS_83A978) uav_project_extern_SW_Mission_value_(v_19_17);

      sfUpdateLoc(23);
      DeclNewuav_project_extern_SW_MissionWindow(_missionWindow);
      uav_project_extern_SW_MissionWindow missionWindow;
      STATIC_ASSERT(4 <= MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
      DeclNewIS_83A978(t_2);
      t_2.size = (int8_t) 4;
      IS_83A978_up(&t_2, 0, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(i, Z_C(10))));
      IS_83A978_up(&t_2, 1, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(Z__add(i, Z_C(1)), Z_C(10))));
      IS_83A978_up(&t_2, 2, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(Z__add(i, Z_C(2)), Z_C(10))));
      IS_83A978_up(&t_2, 3, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(Z__add(i, Z_C(3)), Z_C(10))));
      DeclNewuav_project_extern_SW_MissionWindow(t_1);
      uav_project_extern_SW_MissionWindow_apply(SF &t_1, (IS_83A978) (&t_2));
      missionWindow = (uav_project_extern_SW_MissionWindow) (&t_1);

      sfUpdateLoc(31);
      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_sendmission_window_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (uav_project_extern_SW_MissionWindow) missionWindow);

      sfUpdateLoc(33);
      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("WM:> Sent mission window"));
    }
  }
  if (!match_18_5) {
    match_18_5 = uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_extract_34_12_32416F(SF t_0, this);
    if (match_18_5) {

      sfUpdateLoc(35);
      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logError_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("Unexpected: trying to create mission window by never received a mission"));
    }
  }
  sfAssert(match_18_5, "Error when pattern matching.");
}