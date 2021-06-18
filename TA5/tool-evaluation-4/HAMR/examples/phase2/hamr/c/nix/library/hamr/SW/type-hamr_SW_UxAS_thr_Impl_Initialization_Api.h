#ifndef SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_Initialization_Api
#define SIREUM_TYPE_H_hamr_SW_UxAS_thr_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.UxAS_thr_Impl_Initialization_Api

typedef struct hamr_SW_UxAS_thr_Impl_Initialization_Api *hamr_SW_UxAS_thr_Impl_Initialization_Api;
struct hamr_SW_UxAS_thr_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z AutomationRequest_Id;
  Z AirVehicleState_Id;
  Z OperatingRegion_Id;
  Z LineSearchTask_Id;
  Z AutomationResponse_MON_GEO_Id;
  Z AutomationResponse_MON_REQ_Id;
};

#define DeclNewhamr_SW_UxAS_thr_Impl_Initialization_Api(x) struct hamr_SW_UxAS_thr_Impl_Initialization_Api x = { .type = Thamr_SW_UxAS_thr_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif