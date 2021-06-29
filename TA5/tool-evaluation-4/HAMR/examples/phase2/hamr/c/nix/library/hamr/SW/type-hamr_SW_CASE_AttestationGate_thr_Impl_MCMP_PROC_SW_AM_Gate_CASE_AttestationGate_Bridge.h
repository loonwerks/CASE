#ifndef SIREUM_TYPE_H_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge
#define SIREUM_TYPE_H_hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_45E54D.h>
#include <type-art_Bridge_Ports.h>
#include <type-hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api.h>
#include <type-hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge *hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge;
struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union Option_9AF35E dispatchTriggers;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_45E54D trusted_ids;
  struct art_Port_45E54D AutomationRequest_in;
  struct art_Port_45E54D AutomationRequest_out_UXAS;
  struct art_Port_45E54D AutomationRequest_out_MON_REQ;
  struct art_Port_45E54D OperatingRegion_in;
  struct art_Port_45E54D OperatingRegion_out;
  struct art_Port_45E54D LineSearchTask_in;
  struct art_Port_45E54D LineSearchTask_out;
  struct art_Bridge_Ports ports;
  struct hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api initialization_api;
  struct hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api operational_api;
  Z id;
};

#define DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge(x) struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge x = { .type = Thamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge }

#ifdef __cplusplus
}
#endif

#endif