#ifndef SIREUM_TYPE_H_HAMR_SW_Filter_Impl_Operational_Api
#define SIREUM_TYPE_H_HAMR_SW_Filter_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.SW.Filter_Impl_Operational_Api

typedef struct HAMR_SW_Filter_Impl_Operational_Api *HAMR_SW_Filter_Impl_Operational_Api;
struct HAMR_SW_Filter_Impl_Operational_Api {
  TYPE type;
  Z id;
  Z Input_Id;
  Z Output_Id;
};

#define DeclNewHAMR_SW_Filter_Impl_Operational_Api(x) struct HAMR_SW_Filter_Impl_Operational_Api x = { .type = THAMR_SW_Filter_Impl_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif