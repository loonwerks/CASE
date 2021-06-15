#include <all.h>

Unit HAMR_SW_AttestationGate_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "logInfo", 0);

  sfUpdateLoc(20);
  {
    art_Art_logInfo(SF HAMR_SW_AttestationGate_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_AttestationGate_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "logDebug", 0);

  sfUpdateLoc(24);
  {
    art_Art_logDebug(SF HAMR_SW_AttestationGate_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_AttestationGate_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "logError", 0);

  sfUpdateLoc(28);
  {
    art_Art_logError(SF HAMR_SW_AttestationGate_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_AttestationGate_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "logInfo", 0);

  sfUpdateLoc(20);
  {
    art_Art_logInfo(SF HAMR_SW_AttestationGate_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_AttestationGate_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "logDebug", 0);

  sfUpdateLoc(24);
  {
    art_Art_logDebug(SF HAMR_SW_AttestationGate_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_AttestationGate_Impl_Operational_Api_logError_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "logError", 0);

  sfUpdateLoc(28);
  {
    art_Art_logError(SF HAMR_SW_AttestationGate_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_AttestationGate_Impl_Initialization_Api_put_MissionCommand_out_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "put_MissionCommand_out", 0);

  sfUpdateLoc(16);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_AttestationGate_Impl_Initialization_Api_MissionCommand_out_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_AttestationGate_Impl_Operational_Api_put_MissionCommand_out_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_Api.scala", "HAMR.SW.AttestationGate_Impl_Api", "put_MissionCommand_out", 0);

  sfUpdateLoc(16);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_AttestationGate_Impl_Operational_Api_MissionCommand_out_Id_(this), (art_DataContent) (&t_0));
  }
}