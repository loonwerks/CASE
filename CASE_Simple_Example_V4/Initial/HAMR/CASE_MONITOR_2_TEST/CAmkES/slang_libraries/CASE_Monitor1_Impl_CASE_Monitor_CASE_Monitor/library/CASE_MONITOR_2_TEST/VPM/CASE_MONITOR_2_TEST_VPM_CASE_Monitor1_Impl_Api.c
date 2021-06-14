#include <all.h>

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logInfo_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logDebug_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logError_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_logInfo_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_logDebug_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_logError_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_put_Suspect_Traffic_Out_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "put_Suspect_Traffic_Out", 0);

  sfUpdateLoc(15);
  {
    DeclNewCASE_MONITOR_2_TEST_Base_Types_Bits_Payload(t_0);
    CASE_MONITOR_2_TEST_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_Suspect_Traffic_Out_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_put_Suspect_Traffic_Out_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_Api.scala", "CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Api", "put_Suspect_Traffic_Out", 0);

  sfUpdateLoc(15);
  {
    DeclNewCASE_MONITOR_2_TEST_Base_Types_Bits_Payload(t_0);
    CASE_MONITOR_2_TEST_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_Suspect_Traffic_Out_Id_(this), (art_DataContent) (&t_0));
  }
}