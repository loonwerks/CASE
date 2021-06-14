#include <all.h>

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "logInfo", 0);

  sfUpdateLoc(24);
  {
    art_Art_logInfo(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "logDebug", 0);

  sfUpdateLoc(28);
  {
    art_Art_logDebug(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "logError", 0);

  sfUpdateLoc(32);
  {
    art_Art_logError(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "logInfo", 0);

  sfUpdateLoc(24);
  {
    art_Art_logInfo(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "logDebug", 0);

  sfUpdateLoc(28);
  {
    art_Art_logDebug(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_logError_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "logError", 0);

  sfUpdateLoc(32);
  {
    art_Art_logError(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_put_AttestationTesterRequest_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "put_AttestationTesterRequest", 0);

  sfUpdateLoc(16);
  {
    DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_0);
    HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_AttestationTesterRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_put_AttestationTesterRequest_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "put_AttestationTesterRequest", 0);

  sfUpdateLoc(16);
  {
    DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_0);
    HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_AttestationTesterRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_put_MissionCommand_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "put_MissionCommand", 0);

  sfUpdateLoc(20);
  {
    DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_0);
    HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api_MissionCommand_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_put_MissionCommand_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Api.scala", "HAMR_Simple_V4.SW.RadioDriver_Impl_Api", "put_MissionCommand", 0);

  sfUpdateLoc(20);
  {
    DeclNewHAMR_Simple_V4_Base_Types_Bits_Payload(t_0);
    HAMR_Simple_V4_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_MissionCommand_Id_(this), (art_DataContent) (&t_0));
  }
}