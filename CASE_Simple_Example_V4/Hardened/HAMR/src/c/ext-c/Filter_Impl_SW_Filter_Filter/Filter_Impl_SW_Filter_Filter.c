#include <Filter_Impl_SW_Filter_Filter_api.h>
#include <Filter_Impl_SW_Filter_Filter.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_initialise_", 0);

  // examples of api setter and logging usage
/*
  uint8_t t0[numBytes_HAMR_SW_RF_Msg_Impl];
  byte_array_default(SF t0, numBits_HAMR_SW_RF_Msg_Impl, numBytes_HAMR_SW_RF_Msg_Impl);
  api_put_Output__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF numBits_HAMR_SW_RF_Msg_Impl, t0);

  api_logInfo__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF string("Example logDebug"));

  api_logError__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF string("Example logError"));
*/
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_finalise_", 0);
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_RF_Msg_Impl];
  size_t t0_numBits;
  if(api_get_Input__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_RF_Msg_Impl, "numBits received does not match expected");
    if (isBounded(t0)) {
      printf("FILTER PASS\n");
      api_put_Output__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF t0_numBits, t0);
    } else {
      printf("FILTER BLOCK\n");
    }
    print_RFMsg((const RFMsg *)t0);
    printf("\n");

/*
    DeclNewString(Input_str);
    String__append(SF (String) &Input_str, string("Received on Input: "));
    byte_array_string(SF (String) &Input_str, t0, numBytes_HAMR_SW_RF_Msg_Impl);
    api_logInfo__HAMR_SW_Filter_Impl_SW_Filter_Filter(SF (String) &Input_str);
*/
  }
}
