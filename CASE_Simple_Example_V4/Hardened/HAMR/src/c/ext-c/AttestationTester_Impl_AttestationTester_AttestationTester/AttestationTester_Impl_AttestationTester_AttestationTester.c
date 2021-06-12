#include <AttestationTester_Impl_AttestationTester_AttestationTester_api.h>
#include <AttestationTester_Impl_AttestationTester_AttestationTester.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester.c", "", "HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_AttestationResponseMsg_Impl(t0);
  HAMR_SW_AttestationResponseMsg_Impl_example(SF &t0);
  api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF &t0);

  api_logInfo__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF string("Example logDebug"));

  api_logError__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF string("Example logError"));
}

Unit HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester.c", "", "HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_finalise_", 0);
}

Unit HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_handle_AttestationRequest_(
  STACK_FRAME
  HAMR_SW_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_AttestationTester_AttestationTester.c", "", "HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_handle_AttestationRequest_", 0);

  DeclNewString(AttestationRequestString);
  String__append(SF (String) &AttestationRequestString, string("HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester_handle_AttestationRequest called"));
  api_logInfo__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester (SF (String) &AttestationRequestString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on AttestationRequest: "));
  HAMR_SW_AttestationRequestMsg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_AttestationRequestMsg_Impl(t0);
  if(api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF &t0)) {
    DeclNewString(AttestationRequest_str);
    String__append(SF (String) &AttestationRequest_str, string("Received on AttestationRequest: "));
    HAMR_SW_AttestationRequestMsg_Impl_string_(SF (String) &AttestationRequest_str, &t0);
    api_logInfo__HAMR_SW_AttestationTester_Impl_AttestationTester_AttestationTester(SF (String) &AttestationRequest_str);
  }
}
