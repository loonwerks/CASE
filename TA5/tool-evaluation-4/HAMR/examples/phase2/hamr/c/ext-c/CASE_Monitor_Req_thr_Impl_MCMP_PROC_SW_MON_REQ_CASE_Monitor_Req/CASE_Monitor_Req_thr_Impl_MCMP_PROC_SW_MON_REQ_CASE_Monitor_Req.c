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
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_finalise_", 0);
}


bool automation_response_in_event_data_receive(size_t numBitsRead, uint8_t *payload) {
    bool result = false;
    
    AutomationResponse * automationResponse = NULL;
    lmcp_init_AutomationResponse(&automationResponse);
    
    if(automationResponse != NULL) {
      int msg_result = lmcp_process_msg(&payload, numBitsRead, (lmcp_object**)&automationResponse);
      
      if(msg_result != 0) {
        printf("\tInvalid AutomationResponse byte-stream\n");
      } else {
        result = (msg_result == 0 && automationResponse->missioncommandlist_ai.length > 0);
        printf("\tValid AutomationResponse and length property is%s satisfied\n", result ? "" : " not");
        //lmcp_pp_AutomationResponse(automationResponse);
      }
            
      lmcp_free_AutomationResponse(automationResponse, 1);
    }
    
    return result;
}


void automation_request_in_event_data_receive(size_t numBitsRead, uint8_t *data) {
  // TODO
}

Unit hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c", "", "hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_timeTriggered_", 0);

    {
        size_t numBitsRead;
        uint8_t data[numBytes_hamr_CMASI_AutomationRequest_i];
        if (api_get_reference_1__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF &numBitsRead,
                                                                                                         data)) {
            api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF string("Received AutomationRequest from attestation gate"));
            
            automation_request_in_event_data_receive(numBitsRead, data);
        }
    }

    {
        size_t numBitsRead;
        uint8_t data[numBits_hamr_CMASI_AutomationResponse_i];
        if (api_get_observed__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF &numBitsRead,
                                                                                                      data)) {
            
            api_logInfo__hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF string("Received AutomationResponse from uxas"));

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
}

static const char *get_instance_name(void) {
    // TODO have the component name accessible via the API
    static const char name[] = "CASE_Monitor_Req";
    return name;
}