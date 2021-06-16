#ifndef SIREUM_TYPE_H_HAMR_SW_Monitor_Impl_Initialization_Api
#define SIREUM_TYPE_H_HAMR_SW_Monitor_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.SW.Monitor_Impl_Initialization_Api

typedef struct HAMR_SW_Monitor_Impl_Initialization_Api *HAMR_SW_Monitor_Impl_Initialization_Api;
struct HAMR_SW_Monitor_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z FlightPlan_in_Id;
  Z FlightPlan_out_Id;
  Z Alert_Id;
};

#define DeclNewHAMR_SW_Monitor_Impl_Initialization_Api(x) struct HAMR_SW_Monitor_Impl_Initialization_Api x = { .type = THAMR_SW_Monitor_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif