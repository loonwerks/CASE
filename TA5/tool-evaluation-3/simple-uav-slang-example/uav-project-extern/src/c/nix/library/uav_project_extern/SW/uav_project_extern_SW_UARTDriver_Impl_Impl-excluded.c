#include <all.h>

Unit uav_project_extern_SW_UARTDriver_Impl_Impl_initialise_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Impl this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "uav_project_extern.SW.UARTDriver_Impl_Impl", "initialise", 0);
}

Unit uav_project_extern_SW_UARTDriver_Impl_Impl_handlemission_window_(STACK_FRAME uav_project_extern_SW_UARTDriver_Impl_Impl this, uav_project_extern_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Impl.scala", "uav_project_extern.SW.UARTDriver_Impl_Impl", "handlemission_window", 0);

  sfUpdateLoc(18);
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (String) string("UART:< Received mission window"));

  sfUpdateLoc(19);
  DeclNewString(t_0);
  String_string_(SF (String) &t_0, string("  "));
  uav_project_extern_SW_MissionWindow_string_(SF (String) &t_0, value);
  String_string_(SF (String) &t_0, string(""));
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (String) ((String) &t_0));

  sfUpdateLoc(21);
  uav_project_extern_SW_UARTDriver_Util_pause(SF_LAST);

  sfUpdateLoc(23);
  DeclNewString(t_1);
  String_string_(SF (String) &t_1, string("UART:> Sending "));
  S64_string_(SF (String) &t_1, uav_project_extern_SW_UARTDriver_Impl_Impl_i_(this));
  String_string_(SF (String) &t_1, string(" as the next tracking id."));
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_logInfo_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), (String) ((String) &t_1));

  sfUpdateLoc(26);
  uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_sendtracking_id_(SF uav_project_extern_SW_UARTDriver_Impl_Impl_api_(this), uav_project_extern_SW_UARTDriver_Impl_Impl_i_(this));

  sfUpdateLoc(28);
  uav_project_extern_SW_UARTDriver_Impl_Impl_i_a(this, (S64) S64__add(uav_project_extern_SW_UARTDriver_Impl_Impl_i_(this), S64_C(1)));
}