#ifndef SIREUM_TYPE_H_HAMR_SW_Filter_Impl_Initialization_Api
#define SIREUM_TYPE_H_HAMR_SW_Filter_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.SW.Filter_Impl_Initialization_Api

typedef struct HAMR_SW_Filter_Impl_Initialization_Api *HAMR_SW_Filter_Impl_Initialization_Api;
struct HAMR_SW_Filter_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z Input_Id;
  Z Output_Id;
};

#define DeclNewHAMR_SW_Filter_Impl_Initialization_Api(x) struct HAMR_SW_Filter_Impl_Initialization_Api x = { .type = THAMR_SW_Filter_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif