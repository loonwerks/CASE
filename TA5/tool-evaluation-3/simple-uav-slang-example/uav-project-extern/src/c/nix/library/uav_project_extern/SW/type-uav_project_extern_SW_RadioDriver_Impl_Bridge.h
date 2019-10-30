#ifndef SIREUM_TYPE_H_uav_project_extern_SW_RadioDriver_Impl_Bridge
#define SIREUM_TYPE_H_uav_project_extern_SW_RadioDriver_Impl_Bridge
#include <misc.h>

// uav_project_extern.SW.RadioDriver_Impl_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_art_Port_311EA2.h>
#include <type-art_Bridge_Ports.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct uav_project_extern_SW_RadioDriver_Impl_Bridge *uav_project_extern_SW_RadioDriver_Impl_Bridge;
struct uav_project_extern_SW_RadioDriver_Impl_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_311EA2 recv_map_out;
  struct art_Bridge_Ports ports;
  struct uav_project_extern_SW_RadioDriver_Impl_Bridge_Api api;
  Z id;
};

#define DeclNewuav_project_extern_SW_RadioDriver_Impl_Bridge(x) struct uav_project_extern_SW_RadioDriver_Impl_Bridge x = { .type = Tuav_project_extern_SW_RadioDriver_Impl_Bridge }

#endif