#include <CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.h>
#include <CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h>
#include <ext.h>

#include "AutomationResponse.h"
#include "lmcp.h"

// forward decls
static const char *get_instance_name(void);

// This file will not be overwritten so is safe to edit

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_initialise_", 0);
/*
  // examples of api setter and logging usage

  api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF string("Example logInfo"));

  api_logDebug__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF string("Example logDebug"));

  api_logError__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF string("Example logError"));
  */
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise_", 0);
}

//------------------------------------------------------------------------------
// User specified input data receive handler for AADL Input Event Data Port (in) named
// "automation_response_in".
bool automation_response_in_event_data_receive(size_t numBitsRead, uint8_t *payload) {
    printf("%s: received automation response\n", get_instance_name()); fflush(stdout);
    // hexdump("    ", 32, data->payload, sizeof(data->payload));

    AutomationResponse * automationResponse;
    lmcp_init_AutomationResponse(&automationResponse);

    //uint8_t *payload = &(data->payload[0]);

    int msg_result = lmcp_process_msg(&payload, numBitsRead, (lmcp_object**)&automationResponse);

    bool result = (msg_result == 0 && automationResponse->missioncommandlist_ai.length > 0);

    lmcp_free_AutomationResponse(automationResponse, 1);

    return result;

}

//------------------------------------------------------------------------------
// User specified input data receive handler for AADL Input Event Data Port (in) named
// "automation_response_in".
void automation_request_in_event_data_receive(size_t numBitsRead, uint8_t *data) {
    printf("%s: received automation request\n", get_instance_name()); fflush(stdout);
    // hexdump("    ", 32, data->payload, sizeof(data->payload));

}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered_", 0);

    {
        size_t numBitsRead;
        uint8_t data[numBytes_hamr_CMASI_AutomationRequest_i];
        if (api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF &numBitsRead,
                                                                                                         data)) {
            // automation request from attestation gate
            automation_request_in_event_data_receive(numBitsRead, data);
        }
    }

    {
        size_t numBitsRead;
        uint8_t data[numBits_hamr_CMASI_AutomationResponse_i];
        if (api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF &numBitsRead,
                                                                                                      data)) {
            // autamation response from uxas
            automation_response_in_event_data_receive(numBitsRead, data);
        } else {
            //if (invocations > (AUTOMATION_RESPONSE_TIMEOUT / TICK_PERIOD)) {
            /*
                printf("\n************************************\n");
                printf("** Response Monitor:              **\n");
                printf("** Expected a response from UxAS, **\n");
                printf("** but did not receive one!       **\n");
                printf("** Consider aborting mission.     **\n");
                printf("************************************\n\n");
                fflush(stdout);
                */
            //    invocations = 0;
            //}
        }
    }
/*
    bool dataReceived = automation_request_in_event_data_poll(&numDropped, &data);
    if (dataReceived) {
        automation_request_in_event_data_receive(numDropped, &data);
        invocations = 1;
    }

    dataReceived = automation_response_in_event_data_poll(&numDropped, &data);
    if (dataReceived) {
        if (automation_response_in_event_data_receive(numDropped, &data)) {
            invocations = 0;
        }
    }

    if (invocations > (AUTOMATION_RESPONSE_TIMEOUT / TICK_PERIOD)) {
        printf("\n************************************\n");
        printf("** Response Monitor:              **\n");
        printf("** Expected a response from UxAS, **\n");
        printf("** but did not receive one!       **\n");
        printf("** Consider aborting mission.     **\n");
        printf("************************************\n\n");
        fflush(stdout);
        invocations = 0;
    }
  */

  /*
  // examples of api getter usage

  uint8_t t0[numBytes_hamr_CMASI_AutomationResponse_i];
  size_t t0_numBits;
  if(api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_AutomationResponse_i, "numBits received does not match expected");

    DeclNewString(observed_str);
    String__append(SF (String) &observed_str, string("Received on observed: "));
    byte_array_string(SF (String) &observed_str, t0, numBytes_hamr_CMASI_AutomationResponse_i);
    api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF (String) &observed_str);
  }

  uint8_t t1[numBytes_hamr_CMASI_AutomationRequest_i];
  size_t t1_numBits;
  if(api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_hamr_CMASI_AutomationRequest_i, "numBits received does not match expected");

    DeclNewString(reference_1_str);
    String__append(SF (String) &reference_1_str, string("Received on reference_1: "));
    byte_array_string(SF (String) &reference_1_str, t1, numBytes_hamr_CMASI_AutomationRequest_i);
    api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF (String) &reference_1_str);
  }
  */
}

static const char *get_instance_name(void) {
    // TODO have the component name accessible via the API
    static const char name[] = "CASE_Monitor_Req";
    return name;
}
