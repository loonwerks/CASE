#ifndef SIREUM_TYPE_H_hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api
#define SIREUM_TYPE_H_hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api

typedef struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api *hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api;
struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api {
  TYPE type;
  Z id;
  Z filter_in_Id;
  Z filter_out_Id;
};

#define DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api(x) struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api x = { .type = Thamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif