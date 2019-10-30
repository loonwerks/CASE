#include <all.h>

Unit uav_project_extern_SW_RadioDriver_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_RadioDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Impl.scala", "uav_project_extern.SW.RadioDriver_Impl_Impl", "initialise", 0);

  sfUpdateLoc(13);
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (String) string("RDIO: initialise entry point called"));

  sfUpdateLoc(18);
  DeclNewIS_83A978(_coords);
  IS_83A978 coords;
  DeclNewIS_83A978(t_0);
  int8_t t_1 = 0;
  S32 i = S32_C(0);
  S32 t_3 = S32_C(4);
  Z t_4 = 1;
  while (i < t_3) {
    sfAssert(t_1 < MaxIS_83A978, "Insufficient maximum for IS[Z, uav_project_extern.SW.Coordinate_Impl] elements.");
    DeclNewuav_project_extern_SW_Coordinate_Impl(t_2);
    uav_project_extern_SW_Coordinate_Impl_apply(SF &t_2, i, S32__add(i, S32_C(1)), S32__add(i, S32_C(2)));
    Type_assign(&t_0.value[t_1], (&t_2), sizeof(struct uav_project_extern_SW_Coordinate_Impl));
    t_1++;

    sfUpdateLoc(18);
    i = (S32) (i + t_4);
  }
  t_0.size = t_1;
  coords = (IS_83A978) &t_0;

  sfUpdateLoc(21);
  DeclNewuav_project_extern_SW_Command_Impl(_command);
  uav_project_extern_SW_Command_Impl command;
  DeclNewuav_project_extern_SW_Map(t_6);
  uav_project_extern_SW_Map_apply(SF &t_6, (IS_83A978) coords);
  DeclNewuav_project_extern_SW_Command_Impl(t_5);
  uav_project_extern_SW_Command_Impl_apply(SF &t_5, (uav_project_extern_SW_Map) (&t_6), uav_project_extern_SW_FlightPattern_Perimeter, T);
  command = (uav_project_extern_SW_Command_Impl) (&t_5);

  sfUpdateLoc(27);
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (String) string("RDIO:> Sending command"));

  sfUpdateLoc(30);
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (uav_project_extern_SW_Command_Impl) command);

  sfUpdateLoc(32);
  DeclNewString(t_7);
  String_string_(SF (String) &t_7, string(""));
  uav_project_extern_SW_Command_Impl_string_(SF (String) &t_7, command);
  String_string_(SF (String) &t_7, string(""));
  uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_RadioDriver_Impl_Impl_api_(this), (String) ((String) &t_7));

  sfUpdateLoc(35);
  STATIC_ASSERT(1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_8);
  t_8.size = (int8_t) 1;
  IS_82ABD8_up(&t_8, 0, (Z) art_Port_311EA2_id_(uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST))));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_9);
  t_9.size = (int8_t) 0;
  art_Art_sendOutput(SF (IS_82ABD8) (&t_8), (IS_82ABD8) (&t_9));
}