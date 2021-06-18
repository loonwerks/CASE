#include <all.h>

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_logError_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_logInfo_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "logInfo", 0);

  sfUpdateLoc(19);
  {
    art_Art_logInfo(SF hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_logDebug_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "logDebug", 0);

  sfUpdateLoc(23);
  {
    art_Art_logDebug(SF hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_logError_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api this, String msg) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "logError", 0);

  sfUpdateLoc(27);
  {
    art_Art_logError(SF hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_id_(this), (String) msg);
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_put_filter_out_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "put_filter_out", 0);

  sfUpdateLoc(15);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_filter_out_Id_(this), (art_DataContent) (&t_0));
  }
}

Unit hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_put_filter_out_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "CASE_Filter_LST_thr_Impl_Api.scala", "hamr.SW.CASE_Filter_LST_thr_Impl_Api", "put_filter_out", 0);

  sfUpdateLoc(15);
  {
    DeclNewhamr_Base_Types_Bits_Payload(t_0);
    hamr_Base_Types_Bits_Payload_apply(SF &t_0, (IS_C4F575) value);
    art_Art_putValue(SF hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_filter_out_Id_(this), (art_DataContent) (&t_0));
  }
}