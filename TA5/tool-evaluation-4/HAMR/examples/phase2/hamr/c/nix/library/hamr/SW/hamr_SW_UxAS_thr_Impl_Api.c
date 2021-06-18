#include <all.h>

Unit hamr_SW_UxAS_thr_Impl_Initialization_Api_logInfo_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(27);
  {
    art_Art_logInfo(SF hamr_SW_UxAS_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Initialization_Api_logDebug_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(31);
  {
    art_Art_logDebug(SF hamr_SW_UxAS_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Initialization_Api_logError_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(35);
  {
    art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Operational_Api_logInfo_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(27);
  {
    art_Art_logInfo(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Operational_Api_logDebug_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(31);
  {
    art_Art_logDebug(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Operational_Api_logError_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(35);
  {
    art_Art_logError(SF hamr_SW_UxAS_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_UxAS_thr_Impl_Initialization_Api_put_AutomationResponse_MON_GEO_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "put_AutomationResponse_MON_GEO", 0);

  sfUpdateLoc(19);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_UxAS_thr_Impl_Initialization_Api_AutomationResponse_MON_GEO_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_UxAS_thr_Impl_Operational_Api_put_AutomationResponse_MON_GEO_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "put_AutomationResponse_MON_GEO", 0);

  sfUpdateLoc(19);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_UxAS_thr_Impl_Operational_Api_AutomationResponse_MON_GEO_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_UxAS_thr_Impl_Initialization_Api_put_AutomationResponse_MON_REQ_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "put_AutomationResponse_MON_REQ", 0);

  sfUpdateLoc(23);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_UxAS_thr_Impl_Initialization_Api_AutomationResponse_MON_REQ_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_UxAS_thr_Impl_Operational_Api_put_AutomationResponse_MON_REQ_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "UxAS_thr_Impl_Api.scala", "hamr.SW.UxAS_thr_Impl_Api", "put_AutomationResponse_MON_REQ", 0);

  sfUpdateLoc(23);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_UxAS_thr_Impl_Operational_Api_AutomationResponse_MON_REQ_Id_(this), (art_DataContent) (&t_0));
  }
}