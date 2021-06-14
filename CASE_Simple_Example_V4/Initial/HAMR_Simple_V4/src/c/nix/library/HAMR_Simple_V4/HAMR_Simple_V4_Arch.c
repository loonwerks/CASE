#include <all.h>

B HAMR_Simple_V4_Arch_initialized_ = F;

struct HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester;
struct HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio;
struct HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner;
struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController;
struct art_ArchitectureDescription _HAMR_Simple_V4_Arch_ad;

void HAMR_Simple_V4_Arch_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_Arch_initialized_) return;
  HAMR_Simple_V4_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "HAMR_Simple_V4.Arch", "<init>", 0);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_Radio(SF_LAST);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST);
  HAMR_Simple_V4_Arch_init_ad(SF_LAST);
}

HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_Arch_init(CALLER_LAST);
  return (HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge) &_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester;
}

HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_Arch_init(CALLER_LAST);
  return (HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge) &_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio;
}

HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_Arch_init(CALLER_LAST);
  return (HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge) &_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner;
}

HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_Arch_init(CALLER_LAST);
  return (HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge) &_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController;
}

art_ArchitectureDescription HAMR_Simple_V4_Arch_ad(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_HAMR_Simple_V4_Arch_ad;
}

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_AttestationTester(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  {

    sfUpdateLoc(14);
    art_Port_45E54D AttestationRequest;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_AttestationTester_AttestationRequest"), art_PortMode_Type_EventIn);
    AttestationRequest = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(15);
    art_Port_45E54D AttestationResponse;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_AttestationTester_AttestationResponse"), art_PortMode_Type_EventOut);
    AttestationResponse = (art_Port_45E54D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_3);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewHAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge(t_2);
    HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_apply(SF &t_2, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_AttestationTester"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) AttestationRequest, (art_Port_45E54D) AttestationResponse);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester, (&t_2), sizeof(struct HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_Radio(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(27);
  {

    sfUpdateLoc(28);
    art_Port_45E54D AttestationTesterResponse;
    DeclNewart_Port_45E54D(t_5);
    art_Port_45E54D_apply(SF &t_5, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_Radio_AttestationTesterResponse"), art_PortMode_Type_EventIn);
    AttestationTesterResponse = (art_Port_45E54D) (&t_5);

    sfUpdateLoc(29);
    art_Port_45E54D AttestationTesterRequest;
    DeclNewart_Port_45E54D(t_6);
    art_Port_45E54D_apply(SF &t_6, Z_C(3), (String) string("MissionComputer_Impl_Instance_SW_Radio_AttestationTesterRequest"), art_PortMode_Type_EventOut);
    AttestationTesterRequest = (art_Port_45E54D) (&t_6);

    sfUpdateLoc(30);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_7);
    art_Port_45E54D_apply(SF &t_7, Z_C(4), (String) string("MissionComputer_Impl_Instance_SW_Radio_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_7);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_9);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_9, Z_C(500));
    DeclNewNone_5C1355(t_10);
    None_5C1355_apply(SF &t_10);
    DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge(t_8);
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_apply(SF &t_8, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_Radio"), (art_DispatchPropertyProtocol) (&t_9), (Option_9AF35E) (&t_10), (art_Port_45E54D) AttestationTesterResponse, (art_Port_45E54D) AttestationTesterRequest, (art_Port_45E54D) MissionCommand);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio, (&t_8), sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightPlanner(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(43);
  {

    sfUpdateLoc(44);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_11);
    art_Port_45E54D_apply(SF &t_11, Z_C(5), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_11);

    sfUpdateLoc(45);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_12);
    art_Port_45E54D_apply(SF &t_12, Z_C(6), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlan"), art_PortMode_Type_EventOut);
    FlightPlan = (art_Port_45E54D) (&t_12);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_14);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_14, Z_C(500));
    DeclNewNone_5C1355(t_15);
    None_5C1355_apply(SF &t_15);
    DeclNewHAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge(t_13);
    HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_apply(SF &t_13, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner"), (art_DispatchPropertyProtocol) (&t_14), (Option_9AF35E) (&t_15), (art_Port_45E54D) MissionCommand, (art_Port_45E54D) FlightPlan);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner, (&t_13), sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightController(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(57);
  {

    sfUpdateLoc(58);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_16);
    art_Port_45E54D_apply(SF &t_16, Z_C(7), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightPlan"), art_PortMode_Type_EventIn);
    FlightPlan = (art_Port_45E54D) (&t_16);

    sfUpdateLoc(59);
    art_Port_9CBF18 Alert;
    DeclNewart_Port_9CBF18(t_17);
    art_Port_9CBF18_apply(SF &t_17, Z_C(8), (String) string("MissionComputer_Impl_Instance_SW_FlightController_Alert"), art_PortMode_Type_EventIn);
    Alert = (art_Port_9CBF18) (&t_17);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_19);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_19, Z_C(500));
    DeclNewNone_5C1355(t_20);
    None_5C1355_apply(SF &t_20);
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge(t_18);
    HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_apply(SF &t_18, Z_C(3), (String) string("MissionComputer_Impl_Instance_SW_FlightController"), (art_DispatchPropertyProtocol) (&t_19), (Option_9AF35E) (&t_20), (art_Port_45E54D) FlightPlan, (art_Port_9CBF18) Alert);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController, (&t_18), sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_ad(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(72);
  {
    STATIC_ASSERT(4 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
    DeclNewIS_7E8796(t_22);
    t_22.size = (int8_t) 4;
    IS_7E8796_up(&t_22, 0, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST));
    IS_7E8796_up(&t_22, 1, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST));
    IS_7E8796_up(&t_22, 2, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST));
    IS_7E8796_up(&t_22, 3, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST));
    STATIC_ASSERT(4 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_23);
    t_23.size = (int8_t) 4;
    DeclNewart_Connection(t_24);
    art_Connection_apply(SF &t_24, (art_UPort) HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_AttestationResponse_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST)), (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_AttestationTesterResponse_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST)));
    IS_08117A_up(&t_23, 0, (art_UConnection) (&t_24));
    DeclNewart_Connection(t_25);
    art_Connection_apply(SF &t_25, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_AttestationTesterRequest_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST)), (art_UPort) HAMR_Simple_V4_SW_AttestationTester_Impl_SW_AttestationTester_Bridge_AttestationRequest_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_AttestationTester(SF_LAST)));
    IS_08117A_up(&t_23, 1, (art_UConnection) (&t_25));
    DeclNewart_Connection(t_26);
    art_Connection_apply(SF &t_26, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST)), (art_UPort) HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST)));
    IS_08117A_up(&t_23, 2, (art_UConnection) (&t_26));
    DeclNewart_Connection(t_27);
    art_Connection_apply(SF &t_27, (art_UPort) HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST)), (art_UPort) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST)));
    IS_08117A_up(&t_23, 3, (art_UConnection) (&t_27));
    DeclNewart_ArchitectureDescription(t_21);
    art_ArchitectureDescription_apply(SF &t_21, (IS_7E8796) (&t_22), (IS_08117A) (&t_23));
    Type_assign(&_HAMR_Simple_V4_Arch_ad, (&t_21), sizeof(struct art_ArchitectureDescription));
  }
};