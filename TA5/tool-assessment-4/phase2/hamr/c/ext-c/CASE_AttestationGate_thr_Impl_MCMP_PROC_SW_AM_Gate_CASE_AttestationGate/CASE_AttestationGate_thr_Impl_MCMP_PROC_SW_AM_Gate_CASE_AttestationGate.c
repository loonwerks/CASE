#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.h>
#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h>
#include <ext.h>
#include <stdio.h>
#include <stdlib.h>

#include <lmcp.h>
#include <common/conv.h>
#include "LineSearchTask.h"
// This file will not be overwritten so is safe to edit

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_initialise_", 0);
}

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_finalise_", 0);
}

int asciiToInt(STACK_FRAME U8 first, U8 second, U8 third);
bool trusted(STACK_FRAME int *trusted_ids, int numTrustedIds, int autorqtID);
void tid_array_to_string(STACK_FRAME int* tidArrOpt, int numTrustedIds, String str);
void id_to_string(STACK_FRAME int autorqtID, String str);

Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered_(STACK_FRAME_ONLY) {
    DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_timeTriggered_", 0);

  const int numTrustedIds = 3;
  int tidArrOpt[numTrustedIds];
    
  uint8_t t0[numBytes_hamr_CMASI_AddressArray_i];
  size_t t0_numBits;
  if(api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_hamr_CMASI_AddressArray_i, "numBits received for trusted_ids does not match expected");
    
    tidArrOpt[0] = asciiToInt(SF t0[0], t0[1], t0[2]);
    tidArrOpt[1] = asciiToInt(SF t0[4], t0[5], t0[6]);
    tidArrOpt[2] = asciiToInt(SF t0[8], t0[9], t0[10]);

    //for(int i =0; i < numTrustedIds; i++){
    //    printf("%i, ", tidArrOpt[i]);
    //}
    //printf("\n");
  } else {
    // occasionally the data port is empty under Linux, which is shouldn't be after it's been initialized.
    // Guessing it's a threading issue -- the current array is being written into the shared
    // memory as this component is trying to read it
    api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF string("Did not receive trusted ids"));
    return;
  }
  
  uint8_t t1[numBytes_hamr_CMASI_AddressAttributedMessage_i];
  size_t t1_numBits;
  if(api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits <= numBits_hamr_CMASI_AddressAttributedMessage_i, "numBits received for AutomationRequest does not match expected");
    
    // NOTE: there ins't an LMCP deserializer for AutomationRequests, but since only pre-baked messages
    // are sent from the Radio we know the id is 400
    
    int autorqtID = 400;
    
    if(trusted(SF tidArrOpt, numTrustedIds, autorqtID)) {
      api_put_AutomationRequest_out_MON_REQ__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF t1_numBits, t1);
      api_put_AutomationRequest_out_UXAS__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF t1_numBits, t1);
    } else {
      DeclNewString(_str);
      String str = (String) &_str;
      String__append(SF str, string("\n\t**Blocked AutomationRequest"));
      String__append(SF str, string("\n\t  Valid IDS: "));
      tid_array_to_string(SF tidArrOpt, numTrustedIds, str);
      String__append(SF str, string("\n\t  Received AutomationRequest ID = "));
      id_to_string(SF autorqtID, str);
      api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
    }
  }
  
  uint8_t t2[numBytes_hamr_CMASI_AddressAttributedMessage_i];
  size_t t2_numBits;
  if(api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t2_numBits, t2)) {
    // sanity check
    sfAssert(SF (Z) t2_numBits <= numBits_hamr_CMASI_AddressAttributedMessage_i, "numBits received for OperatingRegion does not match expected");
    
    // NOTE: there isn't an LMCP deserializer for OperatingRegions, but since only pre-baked messages
    // are sent from the Radio we know the id is 400
    
    int opregionID = 400;
    
    if(trusted(SF tidArrOpt, numTrustedIds, opregionID)) {
      api_put_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF t2_numBits, t2);
    } else {
      DeclNewString(_str);
      String str = (String) &_str;
      String__append(SF str, string("\n\t**Blocked OperatingRegion"));
      String__append(SF str, string("\n\t  Valid IDS: "));
      tid_array_to_string(SF tidArrOpt, numTrustedIds, str);
      String__append(SF str, string("\n\t  Received OperatingRegion ID = "));
      id_to_string(SF opregionID, str);
      api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
    }
  }
  
  uint8_t t3[numBytes_hamr_CMASI_AddressAttributedMessage_i];
  size_t t3_numBits;
  if(api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF &t3_numBits, t3)) {
    // sanity check
    sfAssert(SF (Z) t3_numBits <= numBits_hamr_CMASI_AddressAttributedMessage_i, "numBits received for LineSearchTask does not match expected");

    LineSearchTask *lineSearchTask = NULL;
    lmcp_init_LineSearchTask(&lineSearchTask);

    if (lineSearchTask != NULL) {
        uint8_t *payload = t3;
        int msg_result = lmcp_process_msg(&payload, t3_numBits, (lmcp_object **) &lineSearchTask);

        if (msg_result != 0) {
            printf("\tInvalid LineSearchTask byte-stream.\n");
        } else {
            //int lstID = lineSearchTask->super.super.taskid; // this isn't the id I'm looking for
            // TODO: how do we get access to the '|TcpBridge|400|' part of the byte-stream?
            int lstID = 400;

            if (trusted(SF tidArrOpt, numTrustedIds, lstID)) {
                api_put_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
                        SF t3_numBits, t3);
            } else {
                DeclNewString(_str);
                String str = (String) &_str;
                String__append(SF str, string("\n\t**Blocked LineSearchTask"));
                String__append(SF str, string("\n\t  Valid IDS: "));
                tid_array_to_string(SF tidArrOpt, numTrustedIds, str);
                String__append(SF str, string("\n\t  Received LineSearchTask ID = "));
                id_to_string(SF lstID, str);
                api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF str);
            }
        }
    }
  }
}


int asciiToInt(STACK_FRAME U8 first, U8 second, U8 third) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "asciiToInt", 0);

  char buffer[4] = { '\0' };
  sprintf(buffer, "%c%c%c", first, second, third);
  int ret = atoi(buffer);
  return ret;
}

bool trusted(STACK_FRAME int *trusted_ids, int numTrustedIds, int id){
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "trusted", 0);

  for(int i = 0; i < numTrustedIds; i++){
    if(trusted_ids[i] == id) return true;
  }
  return false;
}

void tid_array_to_string(STACK_FRAME int* tidArrOpt, int numTrustedIds, String str) {
    DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "",
                      "tid_array_to_string", 0);

    String__append(SF str, string("("));
    for (int i = 0; i < numTrustedIds; i++) {
        Z_string_(SF str, tidArrOpt[i]);
        if (i < numTrustedIds - 1)
            String__append(SF str, string(", "));
    }
    String__append(SF str, string(")"));
}

void id_to_string(STACK_FRAME int autorqtID, String str) {
  DeclNewStackFrame(caller, "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c", "", "id_to_string", 0);

  Z_string_(SF str, autorqtID);
}
