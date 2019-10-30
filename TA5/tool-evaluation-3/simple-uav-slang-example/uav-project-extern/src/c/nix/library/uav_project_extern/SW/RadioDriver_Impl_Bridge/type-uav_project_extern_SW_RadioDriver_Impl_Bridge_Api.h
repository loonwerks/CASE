#ifndef SIREUM_TYPE_H_uav_project_extern_SW_RadioDriver_Impl_Bridge_Api
#define SIREUM_TYPE_H_uav_project_extern_SW_RadioDriver_Impl_Bridge_Api
#include <misc.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge.Api

typedef struct uav_project_extern_SW_RadioDriver_Impl_Bridge_Api *uav_project_extern_SW_RadioDriver_Impl_Bridge_Api;
struct uav_project_extern_SW_RadioDriver_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z recv_map_out_Id;
};

#define DeclNewuav_project_extern_SW_RadioDriver_Impl_Bridge_Api(x) struct uav_project_extern_SW_RadioDriver_Impl_Bridge_Api x = { .type = Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api }

#endif