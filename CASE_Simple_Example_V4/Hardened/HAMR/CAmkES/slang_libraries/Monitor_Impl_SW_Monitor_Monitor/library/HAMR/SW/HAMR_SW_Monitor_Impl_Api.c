#include <all.h>

Unit HAMR_SW_Monitor_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "logInfo", 0);

  sfUpdateLoc(24);
  {
    art_Art_logInfo(SF HAMR_SW_Monitor_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_Monitor_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "logDebug", 0);

  sfUpdateLoc(28);
  {
    art_Art_logDebug(SF HAMR_SW_Monitor_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_Monitor_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "logError", 0);

  sfUpdateLoc(32);
  {
    art_Art_logError(SF HAMR_SW_Monitor_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_Monitor_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "logInfo", 0);

  sfUpdateLoc(24);
  {
    art_Art_logInfo(SF HAMR_SW_Monitor_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_Monitor_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "logDebug", 0);

  sfUpdateLoc(28);
  {
    art_Art_logDebug(SF HAMR_SW_Monitor_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_Monitor_Impl_Operational_Api_logError_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "logError", 0);

  sfUpdateLoc(32);
  {
    art_Art_logError(SF HAMR_SW_Monitor_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_Monitor_Impl_Initialization_Api_put_FlightPlan_out_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "put_FlightPlan_out", 0);

  sfUpdateLoc(16);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_Monitor_Impl_Initialization_Api_FlightPlan_out_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_Monitor_Impl_Operational_Api_put_FlightPlan_out_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "put_FlightPlan_out", 0);

  sfUpdateLoc(16);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_Monitor_Impl_Operational_Api_FlightPlan_out_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_Monitor_Impl_Initialization_Api_put_Alert_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "put_Alert", 0);

  sfUpdateLoc(20);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF HAMR_SW_Monitor_Impl_Initialization_Api_Alert_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_Monitor_Impl_Operational_Api_put_Alert_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Api", "put_Alert", 0);

  sfUpdateLoc(20);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF HAMR_SW_Monitor_Impl_Operational_Api_Alert_Id_(this), (art_DataContent) (&t_0));
  }
}