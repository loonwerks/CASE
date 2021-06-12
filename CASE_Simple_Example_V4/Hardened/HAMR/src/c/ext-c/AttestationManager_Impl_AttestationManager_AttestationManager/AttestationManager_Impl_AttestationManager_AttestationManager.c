#include <AttestationManager_Impl_AttestationManager_AttestationManager_api.h>
#include <AttestationManager_Impl_AttestationManager_AttestationManager.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager.c", "", "HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_AttestationRequestMsg_Impl(t0);
  HAMR_SW_AttestationRequestMsg_Impl_example(SF &t0);
  api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF &t0);

  DeclNewHAMR_SW_AllowList_Impl(t1);
  HAMR_SW_AllowList_Impl_example(SF &t1);
  api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF &t1);

  api_logInfo__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF string("Example logDebug"));

  api_logError__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF string("Example logError"));
}

Unit HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager.c", "", "HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_finalise_", 0);
}

Unit HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_handle_AttestationResponse_(
  STACK_FRAME
  HAMR_SW_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_AttestationManager_AttestationManager.c", "", "HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_handle_AttestationResponse_", 0);

  DeclNewString(AttestationResponseString);
  String__append(SF (String) &AttestationResponseString, string("HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager_handle_AttestationResponse called"));
  api_logInfo__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager (SF (String) &AttestationResponseString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on AttestationResponse: "));
  HAMR_SW_AttestationResponseMsg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_AttestationResponseMsg_Impl(t0);
  if(api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF &t0)) {
    DeclNewString(AttestationResponse_str);
    String__append(SF (String) &AttestationResponse_str, string("Received on AttestationResponse: "));
    HAMR_SW_AttestationResponseMsg_Impl_string_(SF (String) &AttestationResponse_str, &t0);
    api_logInfo__HAMR_SW_AttestationManager_Impl_AttestationManager_AttestationManager(SF (String) &AttestationResponse_str);
  }
}
