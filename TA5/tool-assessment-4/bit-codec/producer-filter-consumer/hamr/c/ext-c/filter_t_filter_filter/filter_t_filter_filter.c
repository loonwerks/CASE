#include <filter_t_filter_filter_api.h>
#include <filter_t_filter_filter.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit pfc_PFC_filter_t_filter_filter_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "filter_t_filter_filter.c", "", "pfc_PFC_filter_t_filter_filter_initialise_", 0);
}

Unit pfc_PFC_filter_t_filter_filter_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "filter_t_filter_filter.c", "", "pfc_PFC_filter_t_filter_filter_finalise_", 0);
}

Unit pfc_PFC_filter_t_filter_filter_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "filter_t_filter_filter.c", "", "pfc_PFC_filter_t_filter_filter_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t encoded[numBytes_pfc_PFC_Mission];
  size_t encoded_numBits;
  if(api_get_from_producer__pfc_PFC_filter_t_filter_filter(SF &encoded_numBits, encoded)) {
    // sanity check
    sfAssert(SF (Z) encoded_numBits == numBits_pfc_PFC_Mission, "numBits received does not match expected");

      DeclNewpfc_PFC_MissionBitCodec_Mission(mission);

      if(decode_Mission_MissionBitCodec_PFC_pfc(encoded, encoded_numBits, &mission)) {
          assert (mission.data.size == 3);

          DeclNewString(x);
          String msg = (String) &x;
          String_string_(msg, string("    "));

          if(mission.data.value[0].latitude == 4) {
              String_string_(msg, string("Rejected "));
          } else {
              String_string_(msg, string("Approved "));
              api_put_to_consumer__pfc_PFC_filter_t_filter_filter(SF encoded_numBits, encoded);
          }

          pfc_PFC_MissionBitCodec_Mission_string_(msg, &mission);
          api_logInfo__pfc_PFC_filter_t_filter_filter(SF msg);

      } else {
          api_logError__pfc_PFC_filter_t_filter_filter(SF string("Error encountered while decoding"));
      }
  }
}
