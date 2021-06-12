#include <AttestationGate_Impl_AttestationGate_AttestationGate_api.h>
#include <AttestationGate_Impl_AttestationGate_AttestationGate.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_RF_Msg_Impl(t0);
  HAMR_SW_RF_Msg_Impl_example(SF &t0);
  api_put_MissionCommand_out__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF &t0);

  api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF string("Example logDebug"));

  api_logError__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF string("Example logError"));
}

Unit HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_finalise_", 0);
}

Unit HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_handle_MissionCommand_in_(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_handle_MissionCommand_in_", 0);

  DeclNewString(MissionCommand_inString);
  String__append(SF (String) &MissionCommand_inString, string("HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_handle_MissionCommand_in called"));
  api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate (SF (String) &MissionCommand_inString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on MissionCommand_in: "));
  HAMR_SW_RF_Msg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_RF_Msg_Impl(t0);
  if(api_get_MissionCommand_in__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF &t0)) {
    DeclNewString(MissionCommand_in_str);
    String__append(SF (String) &MissionCommand_in_str, string("Received on MissionCommand_in: "));
    HAMR_SW_RF_Msg_Impl_string_(SF (String) &MissionCommand_in_str, &t0);
    api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF (String) &MissionCommand_in_str);
  }

  DeclNewHAMR_SW_AllowList_Impl(t1);
  if(api_get_TrustedIds__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF &t1)) {
    DeclNewString(TrustedIds_str);
    String__append(SF (String) &TrustedIds_str, string("Received on TrustedIds: "));
    HAMR_SW_AllowList_Impl_string_(SF (String) &TrustedIds_str, &t1);
    api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF (String) &TrustedIds_str);
  }
}

Unit HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_handle_TrustedIds_(
  STACK_FRAME
  HAMR_SW_AllowList_Impl value) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_handle_TrustedIds_", 0);

  DeclNewString(TrustedIdsString);
  String__append(SF (String) &TrustedIdsString, string("HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate_handle_TrustedIds called"));
  api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate (SF (String) &TrustedIdsString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on TrustedIds: "));
  HAMR_SW_AllowList_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(SF (String) &_str);

}
