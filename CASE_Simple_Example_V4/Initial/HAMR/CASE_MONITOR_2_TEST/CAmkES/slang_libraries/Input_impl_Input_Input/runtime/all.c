#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TCASE_MONITOR_2_TEST_Base_Types_Bits_Payload: return CASE_MONITOR_2_TEST_Base_Types_Bits_Payload__eq((CASE_MONITOR_2_TEST_Base_Types_Bits_Payload) t1, (CASE_MONITOR_2_TEST_Base_Types_Bits_Payload) t2);
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api: return CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api__eq((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) t1, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) t2);
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge: return CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge__eq((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge) t1, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge) t2);
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints: return CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints__eq((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints) t1, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints) t2);
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api: return CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api__eq((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) t1, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) t2);
    case TIS_C4F575: return IS_C4F575__eq((IS_C4F575) t1, (IS_C4F575) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_82ABD8: return IS_82ABD8__eq((IS_82ABD8) t1, (IS_82ABD8) t2);
    case TIS_7E8796: return IS_7E8796__eq((IS_7E8796) t1, (IS_7E8796) t2);
    case TIS_08117A: return IS_08117A__eq((IS_08117A) t1, (IS_08117A) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TMS_E444B2: return MS_E444B2__eq((MS_E444B2) t1, (MS_E444B2) t2);
    case TMS_83D5EB: return MS_83D5EB__eq((MS_83D5EB) t1, (MS_83D5EB) t2);
    case TMS_F55A18: return MS_F55A18__eq((MS_F55A18) t1, (MS_F55A18) t2);
    case TNone_9BC69E: return None_9BC69E__eq((None_9BC69E) t1, (None_9BC69E) t2);
    case TNone_05FEAD: return None_05FEAD__eq((None_05FEAD) t1, (None_05FEAD) t2);
    case TNone_5C1355: return None_5C1355__eq((None_5C1355) t1, (None_5C1355) t2);
    case TNone_734370: return None_734370__eq((None_734370) t1, (None_734370) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TNone_39BC5F: return None_39BC5F__eq((None_39BC5F) t1, (None_39BC5F) t2);
    case TSome_C9A1C9: return Some_C9A1C9__eq((Some_C9A1C9) t1, (Some_C9A1C9) t2);
    case TSome_2EBF4C: return Some_2EBF4C__eq((Some_2EBF4C) t1, (Some_2EBF4C) t2);
    case TSome_482E57: return Some_482E57__eq((Some_482E57) t1, (Some_482E57) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TSome_3E197E: return Some_3E197E__eq((Some_3E197E) t1, (Some_3E197E) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_ArchitectureDescription: return art_ArchitectureDescription__eq((art_ArchitectureDescription) t1, (art_ArchitectureDescription) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_DispatchPropertyProtocol_Sporadic: return art_DispatchPropertyProtocol_Sporadic__eq((art_DispatchPropertyProtocol_Sporadic) t1, (art_DispatchPropertyProtocol_Sporadic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tart_Port_45E54D: return art_Port_45E54D__eq((art_Port_45E54D) t1, (art_Port_45E54D) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TCASE_MONITOR_2_TEST_Base_Types_Bits_Payload: CASE_MONITOR_2_TEST_Base_Types_Bits_Payload_cprint((CASE_MONITOR_2_TEST_Base_Types_Bits_Payload) this, isOut); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) this, isOut); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge) this, isOut); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints) this, isOut); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api_cprint((CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) this, isOut); return;
    case TIS_C4F575: IS_C4F575_cprint((IS_C4F575) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_82ABD8: IS_82ABD8_cprint((IS_82ABD8) this, isOut); return;
    case TIS_7E8796: IS_7E8796_cprint((IS_7E8796) this, isOut); return;
    case TIS_08117A: IS_08117A_cprint((IS_08117A) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TMS_E444B2: MS_E444B2_cprint((MS_E444B2) this, isOut); return;
    case TMS_83D5EB: MS_83D5EB_cprint((MS_83D5EB) this, isOut); return;
    case TMS_F55A18: MS_F55A18_cprint((MS_F55A18) this, isOut); return;
    case TNone_9BC69E: None_9BC69E_cprint((None_9BC69E) this, isOut); return;
    case TNone_05FEAD: None_05FEAD_cprint((None_05FEAD) this, isOut); return;
    case TNone_5C1355: None_5C1355_cprint((None_5C1355) this, isOut); return;
    case TNone_734370: None_734370_cprint((None_734370) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TNone_39BC5F: None_39BC5F_cprint((None_39BC5F) this, isOut); return;
    case TSome_C9A1C9: Some_C9A1C9_cprint((Some_C9A1C9) this, isOut); return;
    case TSome_2EBF4C: Some_2EBF4C_cprint((Some_2EBF4C) this, isOut); return;
    case TSome_482E57: Some_482E57_cprint((Some_482E57) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TSome_3E197E: Some_3E197E_cprint((Some_3E197E) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_cprint((art_ArchitectureDescription) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_cprint((art_DispatchPropertyProtocol_Sporadic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tart_Port_45E54D: art_Port_45E54D_cprint((art_Port_45E54D) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TCASE_MONITOR_2_TEST_Base_Types_Bits_Payload: CASE_MONITOR_2_TEST_Base_Types_Bits_Payload_string_(CALLER result, (CASE_MONITOR_2_TEST_Base_Types_Bits_Payload) this); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api_string_(CALLER result, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) this); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_string_(CALLER result, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge) this); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints_string_(CALLER result, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_EntryPoints) this); return;
    case TCASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api: CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api_string_(CALLER result, (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) this); return;
    case TIS_C4F575: IS_C4F575_string_(CALLER result, (IS_C4F575) this); return;
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TIS_82ABD8: IS_82ABD8_string_(CALLER result, (IS_82ABD8) this); return;
    case TIS_7E8796: IS_7E8796_string_(CALLER result, (IS_7E8796) this); return;
    case TIS_08117A: IS_08117A_string_(CALLER result, (IS_08117A) this); return;
    case TIS_820232: IS_820232_string_(CALLER result, (IS_820232) this); return;
    case TMS_E444B2: MS_E444B2_string_(CALLER result, (MS_E444B2) this); return;
    case TMS_83D5EB: MS_83D5EB_string_(CALLER result, (MS_83D5EB) this); return;
    case TMS_F55A18: MS_F55A18_string_(CALLER result, (MS_F55A18) this); return;
    case TNone_9BC69E: None_9BC69E_string_(CALLER result, (None_9BC69E) this); return;
    case TNone_05FEAD: None_05FEAD_string_(CALLER result, (None_05FEAD) this); return;
    case TNone_5C1355: None_5C1355_string_(CALLER result, (None_5C1355) this); return;
    case TNone_734370: None_734370_string_(CALLER result, (None_734370) this); return;
    case TNone_964667: None_964667_string_(CALLER result, (None_964667) this); return;
    case TNone_39BC5F: None_39BC5F_string_(CALLER result, (None_39BC5F) this); return;
    case TSome_C9A1C9: Some_C9A1C9_string_(CALLER result, (Some_C9A1C9) this); return;
    case TSome_2EBF4C: Some_2EBF4C_string_(CALLER result, (Some_2EBF4C) this); return;
    case TSome_482E57: Some_482E57_string_(CALLER result, (Some_482E57) this); return;
    case TSome_D29615: Some_D29615_string_(CALLER result, (Some_D29615) this); return;
    case TSome_3E197E: Some_3E197E_string_(CALLER result, (Some_3E197E) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_string_(CALLER result, (art_ArchitectureDescription) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string_(CALLER result, (art_Bridge_Ports) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string_(CALLER result, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_string_(CALLER result, (art_DispatchPropertyProtocol_Sporadic) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Tart_Port_45E54D: art_Port_45E54D_string_(CALLER result, (art_Port_45E54D) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

