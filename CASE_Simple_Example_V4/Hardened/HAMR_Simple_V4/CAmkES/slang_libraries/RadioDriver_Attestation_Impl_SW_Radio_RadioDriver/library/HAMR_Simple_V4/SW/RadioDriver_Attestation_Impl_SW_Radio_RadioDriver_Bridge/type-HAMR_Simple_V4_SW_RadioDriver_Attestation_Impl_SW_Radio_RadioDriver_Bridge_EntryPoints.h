#ifndef SIREUM_TYPE_H_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints
#define SIREUM_TYPE_H_HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge.EntryPoints
#include <type-org_sireum_Option_9AF35E.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api.h>
#include <type-HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints *HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints;
struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints {
  TYPE type;
  union Option_9AF35E dispatchTriggers;
  struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api initialization_api;
  struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api operational_api;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_BridgeId;
  Z MissionCommand_Id;
  Z AttestationRequest_Id;
  Z AttestationResponse_Id;
  Z AttestationTesterResponse_Id;
  Z AttestationTesterRequest_Id;
};

#define DeclNewHAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints(x) struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints x = { .type = THAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge_EntryPoints }

#ifdef __cplusplus
}
#endif

#endif