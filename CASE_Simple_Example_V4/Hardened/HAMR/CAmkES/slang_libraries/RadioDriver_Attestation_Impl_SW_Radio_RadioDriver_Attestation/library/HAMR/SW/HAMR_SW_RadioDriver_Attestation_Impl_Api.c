#include <all.h>

Unit HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "logInfo", 0);

  sfUpdateLoc(30);
  {
    art_Art_logInfo(SF HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "logDebug", 0);

  sfUpdateLoc(34);
  {
    art_Art_logDebug(SF HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "logError", 0);

  sfUpdateLoc(38);
  {
    art_Art_logError(SF HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "logInfo", 0);

  sfUpdateLoc(30);
  {
    art_Art_logInfo(SF HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "logDebug", 0);

  sfUpdateLoc(34);
  {
    art_Art_logDebug(SF HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_logError_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "logError", 0);

  sfUpdateLoc(38);
  {
    art_Art_logError(SF HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationTesterRequest_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "put_AttestationTesterRequest", 0);

  sfUpdateLoc(18);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_AttestationTesterRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_put_AttestationTesterRequest_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "put_AttestationTesterRequest", 0);

  sfUpdateLoc(18);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_AttestationTesterRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_MissionCommand_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "put_MissionCommand", 0);

  sfUpdateLoc(22);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_MissionCommand_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_put_MissionCommand_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "put_MissionCommand", 0);

  sfUpdateLoc(22);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_MissionCommand_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationResponse_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "put_AttestationResponse", 0);

  sfUpdateLoc(26);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_AttestationResponse_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_put_AttestationResponse_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Api.scala", "HAMR.SW.RadioDriver_Attestation_Impl_Api", "put_AttestationResponse", 0);

  sfUpdateLoc(26);
  {
    DeclNewHAMR_Base_Types_Bits_Payload(t_0);
    HAMR_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_AttestationResponse_Id_(this), (art_DataContent) (&t_0));
  }
}