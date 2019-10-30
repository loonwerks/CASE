#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api

typedef struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api *ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api;
struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z recv_map_inn_Id;
  Z recv_map_out_Id;
  Z send_status_inn_Id;
  Z send_status_out_Id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api(x) struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api x = { .type = TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api }


#endif