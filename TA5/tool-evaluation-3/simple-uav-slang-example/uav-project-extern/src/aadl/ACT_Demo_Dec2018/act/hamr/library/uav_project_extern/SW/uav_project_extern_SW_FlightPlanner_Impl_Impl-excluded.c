#include <all.h>

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Impl this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "uav_project_extern.SW.FlightPlanner_Impl_Impl", "initialise", 0);
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_handlemission_rcv_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Impl this, B value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "uav_project_extern.SW.FlightPlanner_Impl_Impl", "handlemission_rcv", 0);

  sfUpdateLoc(40);
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("FPLN:< Received mission receipt confirmation: "));
  B_string_(SF (String) &t_0, value);
  String_string_(SF (String) &t_0, string(""));
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) ((String) &t_0));
}

Unit uav_project_extern_SW_FlightPlanner_Impl_Impl_handlerecv_map_(STACK_FRAME uav_project_extern_SW_FlightPlanner_Impl_Impl this, uav_project_extern_SW_Command_Impl value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Impl.scala", "uav_project_extern.SW.FlightPlanner_Impl_Impl", "handlerecv_map", 0);

  sfUpdateLoc(19);
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) string("FPLN:< Command."));

  sfUpdateLoc(20);
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("  "));
  uav_project_extern_SW_Command_Impl_string_(SF (String) &t_0, value);
  String_string_(SF (String) &t_0, string(""));
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(22);
  if ((!uav_project_extern_SW_FlightPlanner_Impl_Impl_missioncommand_sent_(this))) {

    sfUpdateLoc(25);
    DeclNewIS_83A978(_coords);
    IS_83A978 coords;
    DeclNewIS_83A978(t_1);
    int8_t t_2 = 0;
    S32 i = S32_C(0);
    S32 t_4 = S32_C(10);
    Z t_5 = 1;
    while (i < t_4) {
      sfAssert(t_2 < MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
      DeclNewuav_project_extern_SW_Coordinate_Impl(t_3);
      uav_project_extern_SW_Coordinate_Impl_apply(SF &t_3, i, S32__add(i, S32_C(1)), S32__add(i, S32_C(2)));
      Type_assign(&t_1.value[t_2], (&t_3), sizeof(struct uav_project_extern_SW_Coordinate_Impl));
      t_2++;

      sfUpdateLoc(25);
      i = (S32) (i + t_5);
    }
    t_1.size = t_2;
    coords = (IS_83A978) &t_1;

    sfUpdateLoc(28);
    DeclNewuav_project_extern_SW_Mission(_mission);
    uav_project_extern_SW_Mission mission;
    DeclNewuav_project_extern_SW_Mission(t_6);
    uav_project_extern_SW_Mission_apply(SF &t_6, (IS_83A978) coords);
    mission = (uav_project_extern_SW_Mission) (&t_6);

    sfUpdateLoc(30);
    uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (String) string("FPLN:> new mission notification"));

    sfUpdateLoc(33);
    uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_sendflight_plan_(SF uav_project_extern_SW_FlightPlanner_Impl_Impl_api_(this), (uav_project_extern_SW_Mission) mission);

    sfUpdateLoc(35);
    uav_project_extern_SW_FlightPlanner_Impl_Impl_missioncommand_sent_a(this, (B) T);
  }
}