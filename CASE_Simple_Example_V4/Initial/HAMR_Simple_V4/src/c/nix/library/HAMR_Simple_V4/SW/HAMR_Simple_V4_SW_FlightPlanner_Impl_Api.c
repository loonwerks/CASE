#include <all.h>

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_logError_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_put_FlightPlan_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "put_FlightPlan", 0);

  sfUpdateLoc(15);
  {
    DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_0);
    HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api_FlightPlan_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_put_FlightPlan_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Api.scala", "HAMR_Simple_V4.SW.FlightPlanner_Impl_Api", "put_FlightPlan", 0);

  sfUpdateLoc(15);
  {
    DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_0);
    HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api_FlightPlan_Id_(this), (art_DataContent) (&t_0));
  }
}