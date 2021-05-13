#include <CASE_Filter_Impl_SW_Filter_CASE_Filter_api.h>
#include <CASE_Filter_Impl_SW_Filter_CASE_Filter.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_Impl_SW_Filter_CASE_Filter.c", "", "HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_RF_Msg_Impl(t0);
  HAMR_SW_RF_Msg_Impl_example(SF &t0);
  api_put_Output__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF &t0);

  api_logInfo__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF string("Example logDebug"));

  api_logError__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF string("Example logError"));
}

Unit HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Filter_Impl_SW_Filter_CASE_Filter.c", "", "HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_finalise_", 0);
}

Unit HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_handle_Input_(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "CASE_Filter_Impl_SW_Filter_CASE_Filter.c", "", "HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_handle_Input_", 0);

  DeclNewString(InputString);
  String__append(SF (String) &InputString, string("HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter_handle_Input called"));
  api_logInfo__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter (SF (String) &InputString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on Input: "));
  HAMR_SW_RF_Msg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_RF_Msg_Impl(t0);
  if(api_get_Input__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF &t0)) {
    DeclNewString(Input_str);
    String__append(SF (String) &Input_str, string("Received on Input: "));
    HAMR_SW_RF_Msg_Impl_string_(SF (String) &Input_str, &t0);
    api_logInfo__HAMR_SW_CASE_Filter_Impl_SW_Filter_CASE_Filter(SF (String) &Input_str);
  }
}
