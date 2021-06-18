#ifndef SIREUM_TYPE_H_hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api
#define SIREUM_TYPE_H_hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api

typedef struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api *hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api;
struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z keep_in_zones_Id;
  Z keep_out_zones_Id;
};

#define DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api(x) struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api x = { .type = Thamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif