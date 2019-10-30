#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api

typedef struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api *ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api;
struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z recv_map_out_Id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api(x) struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api x = { .type = TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api }


#endif