#include <RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_api.h>
#include <RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_AttestationRequestMsg_Impl(t0);
  HAMR_SW_AttestationRequestMsg_Impl_example(SF &t0);
  api_put_AttestationTesterRequest__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF &t0);

  DeclNewHAMR_SW_RF_Msg_Impl(t1);
  HAMR_SW_RF_Msg_Impl_example(SF &t1);
  api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF &t1);

  DeclNewHAMR_SW_AttestationResponseMsg_Impl(t2);
  HAMR_SW_AttestationResponseMsg_Impl_example(SF &t2);
  api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF &t2);

  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF string("Example logDebug"));

  api_logError__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF string("Example logError"));
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_finalise_", 0);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_(
  STACK_FRAME
  HAMR_SW_AttestationResponseMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_", 0);

  DeclNewString(AttestationTesterResponseString);
  String__append(SF (String) &AttestationTesterResponseString, string("HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse called"));
  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation (SF (String) &AttestationTesterResponseString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on AttestationTesterResponse: "));
  HAMR_SW_AttestationResponseMsg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_AttestationResponseMsg_Impl(t0);
  if(api_get_AttestationTesterResponse__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF &t0)) {
    DeclNewString(AttestationTesterResponse_str);
    String__append(SF (String) &AttestationTesterResponse_str, string("Received on AttestationTesterResponse: "));
    HAMR_SW_AttestationResponseMsg_Impl_string_(SF (String) &AttestationTesterResponse_str, &t0);
    api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF (String) &AttestationTesterResponse_str);
  }

  DeclNewHAMR_SW_AttestationRequestMsg_Impl(t1);
  if(api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF &t1)) {
    DeclNewString(AttestationRequest_str);
    String__append(SF (String) &AttestationRequest_str, string("Received on AttestationRequest: "));
    HAMR_SW_AttestationRequestMsg_Impl_string_(SF (String) &AttestationRequest_str, &t1);
    api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF (String) &AttestationRequest_str);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationRequest_(
  STACK_FRAME
  HAMR_SW_AttestationRequestMsg_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationRequest_", 0);

  DeclNewString(AttestationRequestString);
  String__append(SF (String) &AttestationRequestString, string("HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation_handle_AttestationRequest called"));
  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation (SF (String) &AttestationRequestString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on AttestationRequest: "));
  HAMR_SW_AttestationRequestMsg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_Radio_RadioDriver_Attestation(SF (String) &_str);

}
