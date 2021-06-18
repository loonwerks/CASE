#ifndef SIREUM_TYPE_H_hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api
#define SIREUM_TYPE_H_hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api

typedef struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api *hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api;
struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z recv_data_Id;
  Z send_data_Id;
  Z trusted_ids_Id;
  Z AutomationRequest_Id;
  Z OperatingRegion_Id;
  Z LineSearchTask_Id;
};

#define DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api(x) struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api x = { .type = Thamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif