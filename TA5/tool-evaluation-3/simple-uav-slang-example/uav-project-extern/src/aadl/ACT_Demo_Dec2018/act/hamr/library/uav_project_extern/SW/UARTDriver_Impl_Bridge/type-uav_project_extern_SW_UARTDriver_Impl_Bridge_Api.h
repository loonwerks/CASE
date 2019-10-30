#ifndef SIREUM_TYPE_H_uav_project_extern_SW_UARTDriver_Impl_Bridge_Api
#define SIREUM_TYPE_H_uav_project_extern_SW_UARTDriver_Impl_Bridge_Api
#include <misc.h>

// uav_project_extern.SW.UARTDriver_Impl_Bridge.Api

typedef struct uav_project_extern_SW_UARTDriver_Impl_Bridge_Api *uav_project_extern_SW_UARTDriver_Impl_Bridge_Api;
struct uav_project_extern_SW_UARTDriver_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z mission_window_Id;
  Z tracking_id_Id;
};

#define DeclNewuav_project_extern_SW_UARTDriver_Impl_Bridge_Api(x) struct uav_project_extern_SW_UARTDriver_Impl_Bridge_Api x = { .type = Tuav_project_extern_SW_UARTDriver_Impl_Bridge_Api }

#endif