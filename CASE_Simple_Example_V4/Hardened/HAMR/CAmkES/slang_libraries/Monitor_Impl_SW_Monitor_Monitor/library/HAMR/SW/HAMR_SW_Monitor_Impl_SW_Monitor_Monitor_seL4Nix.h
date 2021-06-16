#ifndef SIREUM_H_HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix
#define SIREUM_H_HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_FlightPlan_out_Send(STACK_FRAME art_DataContent d);

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Alert_Send(STACK_FRAME art_DataContent d);

void HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_FlightPlan_in_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif