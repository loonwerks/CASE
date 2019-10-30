#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints *ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints;
struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z Radio_Impl_BridgeId;
  Z recv_map_inn_Id;
  Z recv_map_out_Id;
  Z send_status_inn_Id;
  Z send_status_out_Id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints(x) struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints x = { .type = TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints }


#endif