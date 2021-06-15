#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>
#include <type-HAMR_Base_Types.h>
#include <type-HAMR_Base_Types_Bits_Payload.h>
#include <type-HAMR_Filter_Impl_SW_Filter_Filter_Filter.h>
#include <type-HAMR_SW_Filter_Impl_Api.h>
#include <type-HAMR_SW_Filter_Impl_Initialization_Api.h>
#include <type-HAMR_SW_Filter_Impl_Operational_Api.h>
#include <type-HAMR_SW_Filter_Impl_SW_Filter_Filter.h>
#include <type-HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge.h>
#include <type-HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_EntryPoints.h>
#include <type-HAMR_SW_Filter_Impl_SW_Filter_Filter_seL4Nix.h>
#include <type-HAMR_TranspilerToucher.h>
#include <type-art_ArchitectureDescription.h>
#include <type-art_Art.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>
#include <type-art_Empty.h>
#include <type-art_PortMode_Type.h>
#include <type-art_UConnection.h>
#include <type-art_UPort.h>
#include <type-art_art_Port_45E54D.h>
#include <type-org_sireum_IS_08117A.h>
#include <type-org_sireum_IS_7E8796.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_C4F575.h>
#include <type-org_sireum_MS_83D5EB.h>
#include <type-org_sireum_MS_E444B2.h>
#include <type-org_sireum_MS_F55A18.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_10267D.h>
#include <type-org_sireum_None_3026C5.h>
#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_None_5C1355.h>
#include <type-org_sireum_None_734370.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_None_E227E5.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_30119F.h>
#include <type-org_sireum_Option_3ABCB9.h>
#include <type-org_sireum_Option_6239DB.h>
#include <type-org_sireum_Option_6DC5D7.h>
#include <type-org_sireum_Option_7BBFBE.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_Option_9AF35E.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_3E197E.h>
#include <type-org_sireum_Some_482E57.h>
#include <type-org_sireum_Some_73C5E1.h>
#include <type-org_sireum_Some_8D03B1.h>
#include <type-org_sireum_Some_CA4FA3.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_U8.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert[1/(pred)];(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique[1/(pred)];}
#endif

size_t sizeOf(Type t);
void Type_assign(void *dest, void *src, size_t destSize);

#ifdef __cplusplus
}
#endif

#endif