#include <all.h>

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logInfo_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(39);
  {
    art_Art_logInfo(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logDebug_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(43);
  {
    art_Art_logDebug(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_logError_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(47);
  {
    art_Art_logError(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_logInfo_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(39);
  {
    art_Art_logInfo(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_logDebug_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(43);
  {
    art_Art_logDebug(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_logError_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(47);
  {
    art_Art_logError(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_send_data_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_send_data", 0);

  sfUpdateLoc(19);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_send_data_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_send_data_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_send_data", 0);

  sfUpdateLoc(19);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_send_data_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_trusted_ids_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_trusted_ids", 0);

  sfUpdateLoc(23);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_trusted_ids_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_trusted_ids_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_trusted_ids", 0);

  sfUpdateLoc(23);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_trusted_ids_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_AutomationRequest_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_AutomationRequest", 0);

  sfUpdateLoc(27);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_AutomationRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_AutomationRequest_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_AutomationRequest", 0);

  sfUpdateLoc(27);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_AutomationRequest_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_OperatingRegion_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_OperatingRegion", 0);

  sfUpdateLoc(31);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_OperatingRegion_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_OperatingRegion_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_OperatingRegion", 0);

  sfUpdateLoc(31);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_OperatingRegion_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_put_LineSearchTask_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_LineSearchTask", 0);

  sfUpdateLoc(35);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_LineSearchTask_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_put_LineSearchTask_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_thr_Impl_Api.scala", "hamr.SW.RadioDriver_Attestation_thr_Impl_Api", "put_LineSearchTask", 0);

  sfUpdateLoc(35);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_LineSearchTask_Id_(this), (art_DataContent) (&t_0));
  }
}