#include <all.h>

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(26);
  {
    art_Art_logInfo(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(30);
  {
    art_Art_logDebug(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_logError_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(34);
  {
    art_Art_logError(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(26);
  {
    art_Art_logInfo(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(30);
  {
    art_Art_logDebug(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_logError_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(34);
  {
    art_Art_logError(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_put_output_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "put_output", 0);

  sfUpdateLoc(18);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_output_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_put_output_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "put_output", 0);

  sfUpdateLoc(18);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_output_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_put_alert_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "put_alert", 0);

  sfUpdateLoc(22);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_alert_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_put_alert_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "CASE_Monitor_Geo_thr_Impl_Api.scala", "hamr.SW.CASE_Monitor_Geo_thr_Impl_Api", "put_alert", 0);

  sfUpdateLoc(22);
  {
    DeclNewart_Empty(t_0);
    art_Empty_apply(SF &t_0);
    art_Art_putValue(SF hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_alert_Id_(this), (art_DataContent) (&t_0));
  }
}