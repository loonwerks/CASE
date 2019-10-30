#include <all.h>
#include <ext.h>
#include <unistd.h>

/********************************************************
 * FLIGHT PLANNER
 *******************************************************/

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Impl this) {
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_handlemission_rcv_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Impl this, uav_project_extern_Base_Types_Boolean value) {
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("FPLN:< Received mission receipt confirmation: "));
  B_string_(SF (String) &t_0, uav_project_extern_Base_Types_Boolean_value_(value));
  String_string_(SF (String) &t_0, string(""));
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) ((String) &t_0));
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_handlerecv_map_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Impl this, uav_project_extern_SW_Command_Impl value) {
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) string("FPLN:< Command."));

  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("  "));
  uav_project_extern_SW_Command_Impl_string_(SF (String) &t_0, value);
  String_string_(SF (String) &t_0, string(""));
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) ((String) &t_0));

  if ((!uav_project_extern_SW_FlightPlanner_Impl_Impl_missioncommand_sent_(this))) {
    DeclNewIS_83A978(t_2);
    t_2.size = (int8_t) 10;
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_3);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_3, Z32_C(0), Z32_C(1), Z32_C(2));
    IS_83A978_up(&t_2, 0, (uav_project_extern_SW_Coordinate_Impl) (&t_3));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_4);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_4, Z32_C(1), Z32_C(2), Z32_C(3));
    IS_83A978_up(&t_2, 1, (uav_project_extern_SW_Coordinate_Impl) (&t_4));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_5);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_5, Z32_C(2), Z32_C(3), Z32_C(4));
    IS_83A978_up(&t_2, 2, (uav_project_extern_SW_Coordinate_Impl) (&t_5));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_6);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_6, Z32_C(3), Z32_C(4), Z32_C(5));
    IS_83A978_up(&t_2, 3, (uav_project_extern_SW_Coordinate_Impl) (&t_6));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_7);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_7, Z32_C(4), Z32_C(5), Z32_C(6));
    IS_83A978_up(&t_2, 4, (uav_project_extern_SW_Coordinate_Impl) (&t_7));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_8);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_8, Z32_C(5), Z32_C(6), Z32_C(7));
    IS_83A978_up(&t_2, 5, (uav_project_extern_SW_Coordinate_Impl) (&t_8));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_9);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_9, Z32_C(6), Z32_C(7), Z32_C(8));
    IS_83A978_up(&t_2, 6, (uav_project_extern_SW_Coordinate_Impl) (&t_9));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_10);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_10, Z32_C(7), Z32_C(8), Z32_C(9));
    IS_83A978_up(&t_2, 7, (uav_project_extern_SW_Coordinate_Impl) (&t_10));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_11);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_11, Z32_C(8), Z32_C(9), Z32_C(10));
    IS_83A978_up(&t_2, 8, (uav_project_extern_SW_Coordinate_Impl) (&t_11));
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_12);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_12, Z32_C(9), Z32_C(10), Z32_C(11));
    IS_83A978_up(&t_2, 9, (uav_project_extern_SW_Coordinate_Impl) (&t_12));
    DeclNewuav_project_extern_SW_Mission(t_1);
    uav_project_extern_SW_Mission_apply(SF &t_1, (IS_83A978) (&t_2));
    uav_project_extern_SW_Mission mission = (uav_project_extern_SW_Mission) (&t_1);

    uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) string("FPLN:> new mission notification"));

    uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_sendflight_plan_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (uav_project_extern_SW_Mission) mission);

    uav_project_extern_SW_FlightPlanner_Impl_Impl_missioncommand_sent_a(this, (B) T);
  }
}


/********************************************************
 * RADIO DRIVER
 *******************************************************/

Unit uav_project_extern_SW_RadioDriver_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Impl this) {
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (String) string("RDIO: initialise entry point called"));

  DeclNewIS_83A978(t_2);
  t_2.size = (int8_t) 4;
  DeclNewuav_project_extern_SW_Coordinate_Impl(t_3);
  uav_project_extern_SW_Coordinate_Impl_apply(SF &t_3, Z32_C(0), Z32_C(1), Z32_C(2));
  IS_83A978_up(&t_2, 0, (uav_project_extern_SW_Coordinate_Impl) (&t_3));
  DeclNewuav_project_extern_SW_Coordinate_Impl(t_4);
  uav_project_extern_SW_Coordinate_Impl_apply(SF &t_4, Z32_C(1), Z32_C(2), Z32_C(3));
  IS_83A978_up(&t_2, 1, (uav_project_extern_SW_Coordinate_Impl) (&t_4));
  DeclNewuav_project_extern_SW_Coordinate_Impl(t_5);
  uav_project_extern_SW_Coordinate_Impl_apply(SF &t_5, Z32_C(2), Z32_C(3), Z32_C(4));
  IS_83A978_up(&t_2, 2, (uav_project_extern_SW_Coordinate_Impl) (&t_5));
  DeclNewuav_project_extern_SW_Coordinate_Impl(t_6);
  uav_project_extern_SW_Coordinate_Impl_apply(SF &t_6, Z32_C(3), Z32_C(4), Z32_C(5));
  IS_83A978_up(&t_2, 3, (uav_project_extern_SW_Coordinate_Impl) (&t_6));
  DeclNewuav_project_extern_SW_Map(t_1);
  uav_project_extern_SW_Map_apply(SF &t_1, (IS_83A978) (&t_2));
  DeclNewuav_project_extern_SW_Command_Impl(t_0);
  uav_project_extern_SW_Command_Impl_apply(SF &t_0, (uav_project_extern_SW_Map) (&t_1), uav_project_extern_SW_FlightPattern_Perimeter, T);
  uav_project_extern_SW_Command_Impl command = (uav_project_extern_SW_Command_Impl) (&t_0);

  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (String) string("RDIO:> Sending command"));

  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (uav_project_extern_SW_Command_Impl) command);

  DeclNewString(t_7);
  String_string_(SF (String) &t_7, string(""));
  uav_project_extern_SW_Command_Impl_string_(SF (String) &t_7, command);
  String_string_(SF (String) &t_7, string(""));
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (String) ((String) &t_7));

  DeclNewIS_82ABD8(t_8);
  t_8.size = (int8_t) 1;
  IS_82ABD8_up(&t_8, 0, (Z) art_Port_311EA2_id_(uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST))));
  DeclNewIS_82ABD8(t_9);
  t_9.size = (int8_t) 0;
  art_Art_sendOutput(SF (IS_82ABD8) (&t_8), (IS_82ABD8) (&t_9));
}


/********************************************************
 * UART Driver
 *******************************************************/

Unit uav_project_extern_SW_UARTDriver_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Impl this) {
}

Unit uav_project_extern_SW_UARTDriver_Impl_Impl_handlemission_window_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Impl this, uav_project_extern_SW_MissionWindow value) {
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (String) string("UART:< Received mission window"));

  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("  "));
  uav_project_extern_SW_MissionWindow_string_(SF (String) &t_0, value);
  String_string_(SF (String) &t_0, string(""));
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (String) ((String) &t_0));

  uav_project_extern_SW_UARTDriver_Util_pause(SF_LAST);

  DeclNewString(t_1);
  String_string_(SF (String) &t_1, string("UART:> Sending "));
  Z64_string_(SF (String) &t_1, uav_project_extern_SW_UARTDriver_Impl_Impl_i_(this));
  String_string_(SF (String) &t_1, string(" as the next tracking id."));
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (String) ((String) &t_1));

  DeclNewuav_project_extern_Base_Types_Integer_64(t_2);
  uav_project_extern_Base_Types_Integer_64_apply(SF &t_2, uav_project_extern_SW_UARTDriver_Impl_Impl_i_(this));
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_sendtracking_id_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (uav_project_extern_Base_Types_Integer_64) (&t_2));

  uav_project_extern_SW_UARTDriver_Impl_Impl_i_a(this, (Z64) Z64__add(uav_project_extern_SW_UARTDriver_Impl_Impl_i_(this), Z64_C(1)));
}

Unit uav_project_extern_SW_UARTDriver_Util_pause(STACK_FRAME_ONLY) {
  #ifdef CAMKES
  // just busy wait
  for(int i = 0; i < 100000000; i++){}
  #else
  sleep(1);
  #endif
}

/********************************************************
 * WAYPOINT MANAGER
 *******************************************************/

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this) {
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handleflight_plan_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_SW_Mission mission) {
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("WM:< Received flight plan"));

  DeclNewSome_C19C7E(t_0);
  Some_C19C7E_apply(SF &t_0, (uav_project_extern_SW_Mission) mission);
  uav_project_extern_SW_WaypointManager_Impl_Impl__mission_a(this, (Option_32416F) (&t_0));

  DeclNewuav_project_extern_SW_Mission(t_1);
  Option_32416F_get_(SF (uav_project_extern_SW_Mission) &t_1, uav_project_extern_SW_WaypointManager_Impl_Impl__mission_(this));
  IS_83A978 x1 = (IS_83A978) uav_project_extern_SW_Mission_value_(((uav_project_extern_SW_Mission) &t_1));

  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("  Mission:"));

  {
    Z i = Z_C(0);
    Z t_3 = Z_C(9);
    Z t_4 = 1;
    while (i < t_3) {

      DeclNewString(t_2);
      String_string_(SF (String) &t_2, string("    "));
      uav_project_extern_SW_Coordinate_Impl_string_(SF (String) &t_2, IS_83A978_at(x1, i));
      String_string_(SF (String) &t_2, string(""));
      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) ((String) &t_2));

      i = (Z) (i + t_4);
    }
  }

  uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(SF this, Z_C(0));

  DeclNewuav_project_extern_Base_Types_Boolean(t_5);
  uav_project_extern_Base_Types_Boolean_apply(SF &t_5, T);
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_sendmission_rcv_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (uav_project_extern_Base_Types_Boolean) (&t_5));
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_handletracking_id_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, uav_project_extern_Base_Types_Integer_64 nid) {
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("WM:< Received "));
  Z64_string_(SF (String) &t_0, uav_project_extern_Base_Types_Integer_64_value_(nid));
  String_string_(SF (String) &t_0, string(" as the next tracking id."));
  uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) ((String) &t_0));

  uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(SF this, conversions_Z64_toZ(SF uav_project_extern_Base_Types_Integer_64_value_(nid)));
}

Unit uav_project_extern_SW_WaypointManager_Impl_Impl_sendWin_(STACK_FRAME uav_project_extern_SW_WaypointManager_Impl_Impl this, Z i) {

  DeclNewOption_32416F(t_0);
  Type_assign(&t_0, uav_project_extern_SW_WaypointManager_Impl_Impl__mission_(this), sizeof(union Option_32416F));
  B match_20 = F;
  if (!match_20) {
    match_20 = T;
    uav_project_extern_SW_Mission v_21_17;
    match_20 = match_20 && Some_C19C7E__is(SF &t_0);
    if (match_20) {
      v_21_17 = (uav_project_extern_SW_Mission) Some_C19C7E_value_(Some_C19C7E__as(SF &t_0));
    }
    if (match_20) {

      IS_83A978 x1 = (IS_83A978) uav_project_extern_SW_Mission_value_(v_21_17);

      DeclNewIS_83A978(t_2);
      t_2.size = (int8_t) 4;
      IS_83A978_up(&t_2, 0, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(i, Z_C(10))));
      IS_83A978_up(&t_2, 1, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(Z__add(i, Z_C(1)), Z_C(10))));
      IS_83A978_up(&t_2, 2, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(Z__add(i, Z_C(2)), Z_C(10))));
      IS_83A978_up(&t_2, 3, (uav_project_extern_SW_Coordinate_Impl) IS_83A978_at(x1, Z__rem(Z__add(i, Z_C(3)), Z_C(10))));
      DeclNewuav_project_extern_SW_MissionWindow(t_1);
      uav_project_extern_SW_MissionWindow_apply(SF &t_1, (IS_83A978) (&t_2));
      uav_project_extern_SW_MissionWindow missionWindow = (uav_project_extern_SW_MissionWindow) (&t_1);

      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_sendmission_window_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (uav_project_extern_SW_MissionWindow) missionWindow);

      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("WM:> Sent mission window"));
    }
  }
  if (!match_20) {
    match_20 = T;
    if (match_20) {

      uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_logError_(SF uav_project_extern_SW_WaypointManager_Impl_Impl_api_(this), (String) string("Unexpected: trying to create mission window by never received a mission"));
    }
  }
  sfAssert(match_20, "Error when pattern matching.");
}
