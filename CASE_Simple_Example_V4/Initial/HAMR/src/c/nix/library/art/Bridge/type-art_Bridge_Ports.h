#ifndef SIREUM_TYPE_H_art_Bridge_Ports
#define SIREUM_TYPE_H_art_Bridge_Ports

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge.Ports
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_820232.h>

typedef struct art_Bridge_Ports *art_Bridge_Ports;
struct art_Bridge_Ports {
  TYPE type;
  struct IS_820232 all;
  struct IS_820232 dataIns;
  struct IS_820232 dataOuts;
  struct IS_820232 eventIns;
  struct IS_820232 eventOuts;
};

#define DeclNewart_Bridge_Ports(x) struct art_Bridge_Ports x = { .type = Tart_Bridge_Ports }

#ifdef __cplusplus
}
#endif

#endif