#include <consumer_t_consumer_consumer_api.h>
#include <consumer_t_consumer_consumer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit pfc_PFC_consumer_t_consumer_consumer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer.c", "", "pfc_PFC_consumer_t_consumer_consumer_initialise_", 0);
}

Unit pfc_PFC_consumer_t_consumer_consumer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer.c", "", "pfc_PFC_consumer_t_consumer_consumer_finalise_", 0);
}

Unit pfc_PFC_consumer_t_consumer_consumer_timeTriggered_(STACK_FRAME_ONLY) {
    DeclNewStackFrame(caller, "consumer_t_consumer_consumer.c", "",
                      "pfc_PFC_consumer_t_consumer_consumer_timeTriggered_", 0);

    U8 encoded[numBytes_pfc_PFC_Mission];
    size_t numBits;
    if (api_get_from_filter__pfc_PFC_consumer_t_consumer_consumer(SF &numBits, encoded)) {

        DeclNewpfc_PFC_MissionBitCodec_Mission(mission);

        if (decode_Mission_MissionBitCodec_PFC_pfc(encoded, numBits, &mission)) {
            DeclNewString(x);
            String msg = (String) &x;

            String_string_(msg, string("Received "));
            pfc_PFC_MissionBitCodec_Mission_string_(msg, &mission);
            api_logInfo__pfc_PFC_consumer_t_consumer_consumer(SF msg);

        } else {
            api_logError__pfc_PFC_consumer_t_consumer_consumer(SF string("Error encountered while decoding"));
        }
    }
}
