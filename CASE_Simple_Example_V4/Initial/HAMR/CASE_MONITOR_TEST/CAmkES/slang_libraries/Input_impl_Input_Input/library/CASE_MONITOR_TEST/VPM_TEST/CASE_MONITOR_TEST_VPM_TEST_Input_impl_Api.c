#include <all.h>

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_logInfo_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "logInfo", 0);

  sfUpdateLoc(18);
  {
    art_Art_logInfo(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_logDebug_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "logDebug", 0);

  sfUpdateLoc(22);
  {
    art_Art_logDebug(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_logError_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "logError", 0);

  sfUpdateLoc(26);
  {
    art_Art_logError(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_logInfo_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "logInfo", 0);

  sfUpdateLoc(18);
  {
    art_Art_logInfo(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_logDebug_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "logDebug", 0);

  sfUpdateLoc(22);
  {
    art_Art_logDebug(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_logError_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "logError", 0);

  sfUpdateLoc(26);
  {
    art_Art_logError(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_put_Observed_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "put_Observed", 0);

  sfUpdateLoc(14);
  {
    DeclNewCASE_MONITOR_TEST_Base_Types_Bits_Payload(t_0);
    CASE_MONITOR_TEST_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_Observed_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_put_Observed_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Input_impl_Api.scala", "CASE_MONITOR_TEST.VPM_TEST.Input_impl_Api", "put_Observed", 0);

  sfUpdateLoc(14);
  {
    DeclNewCASE_MONITOR_TEST_Base_Types_Bits_Payload(t_0);
    CASE_MONITOR_TEST_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api_Observed_Id_(this), (art_DataContent) (&t_0));
  }
}