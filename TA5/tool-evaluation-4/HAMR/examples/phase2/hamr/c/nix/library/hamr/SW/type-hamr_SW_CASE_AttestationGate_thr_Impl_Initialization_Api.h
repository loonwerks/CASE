#ifndef SIREUM_TYPE_H_hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api
#define SIREUM_TYPE_H_hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api

typedef struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api *hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api;
struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z trusted_ids_Id;
  Z AutomationRequest_in_Id;
  Z AutomationRequest_out_UXAS_Id;
  Z AutomationRequest_out_MON_REQ_Id;
  Z OperatingRegion_in_Id;
  Z OperatingRegion_out_Id;
  Z LineSearchTask_in_Id;
  Z LineSearchTask_out_Id;
};

#define DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api(x) struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api x = { .type = Thamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif