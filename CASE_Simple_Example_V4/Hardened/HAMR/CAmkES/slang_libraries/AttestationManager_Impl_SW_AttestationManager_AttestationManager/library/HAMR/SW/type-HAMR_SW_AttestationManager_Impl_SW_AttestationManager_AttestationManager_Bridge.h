#ifndef SIREUM_TYPE_H_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge
#define SIREUM_TYPE_H_HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_Bridge_Ports.h>
#include <type-HAMR_SW_AttestationManager_Impl_Initialization_Api.h>
#include <type-HAMR_SW_AttestationManager_Impl_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge *HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge;
struct HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_45E54D AttestationRequest;
  struct art_Port_45E54D AttestationResponse;
  struct art_Port_45E54D TrustedIds;
  struct art_Bridge_Ports ports;
  struct HAMR_SW_AttestationManager_Impl_Initialization_Api initialization_api;
  struct HAMR_SW_AttestationManager_Impl_Operational_Api operational_api;
  Z id;
};

#define DeclNewHAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge(x) struct HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge x = { .type = THAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge }

#ifdef __cplusplus
}
#endif

#endif