#ifndef SIREUM_TYPE_H_uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints
#define SIREUM_TYPE_H_uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints
#include <misc.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints
#include <type-uav_project_extern_SW_RadioDriver_Impl_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints *uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints;
struct uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints {
  TYPE type;
  struct uav_project_extern_SW_RadioDriver_Impl_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z RadioDriver_Impl_BridgeId;
  Z recv_map_out_Id;
};

#define DeclNewuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints(x) struct uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints x = { .type = Tuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints }

#endif