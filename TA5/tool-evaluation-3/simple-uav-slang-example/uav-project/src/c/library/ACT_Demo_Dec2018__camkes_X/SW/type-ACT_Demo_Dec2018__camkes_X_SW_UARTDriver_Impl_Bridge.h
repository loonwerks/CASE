#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_art_Port_2D3735.h>
#include <type-art_art_Port_446859.h>
#include <type-art_Bridge_Ports.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge *ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge;
struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_2D3735 mission_window;
  struct art_Port_446859 tracking_id;
  struct art_Bridge_Ports ports;
  struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api api;
  Z id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge(x) struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge x = { .type = TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge }


#endif