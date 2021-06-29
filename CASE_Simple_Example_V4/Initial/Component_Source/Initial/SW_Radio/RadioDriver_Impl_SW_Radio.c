#include <RadioDriver_Impl_SW_Radio_api.h>
#include <RadioDriver_Impl_SW_Radio.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_initialise_", 0);

  // examples of api setter and logging usage

/*
 *
  uint8_t t1[numBytes_HAMR_Data_Types_RF_Msg_Impl];
  byte_array_default(SF t1, numBits_HAMR_Data_Types_RF_Msg_Impl, numBytes_HAMR_Data_Types_RF_Msg_Impl);
  api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF numBits_HAMR_Data_Types_RF_Msg_Impl, t1);

  api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF string("Example logInfo"));

  api_logDebug__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF string("Example logDebug"));

  api_logError__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF string("Example logError"));
  */


}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_timeTriggered_", 0);

  // examples of api getter usage

  static int cycle_count = 0;
  printf("RADIO: cycle #%d\n", ++cycle_count);

  uint8_t *output = getRadioOutput();
  if (output != NULL) {
    printf("RADIO SEND\n");
    print_RFMsg((const RFMsg*)output);
    printf("\n");
    api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF numBits_HAMR_Data_Types_RF_Msg_Impl, output);
  }

}
