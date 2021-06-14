#include <all.h>

B HAMR_Simple_V4_Arch_initialized_ = F;

struct HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio;
struct HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner;
struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge _HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController;
struct art_ArchitectureDescription _HAMR_Simple_V4_Arch_ad;

void HAMR_Simple_V4_Arch_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_Arch_initialized_) return;
  HAMR_Simple_V4_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "HAMR_Simple_V4.Arch", "<init>", 0);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_Radio(SF_LAST);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST);
  HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST);
  HAMR_Simple_V4_Arch_init_ad(SF_LAST);
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

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_Radio(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  {

    sfUpdateLoc(14);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_Radio_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_0);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_2);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_2, Z_C(1));
    DeclNewNone_5C1355(t_3);
    None_5C1355_apply(SF &t_3);
    DeclNewHAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge(t_1);
    HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_apply(SF &t_1, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_Radio"), (art_DispatchPropertyProtocol) (&t_2), (Option_9AF35E) (&t_3), (art_Port_45E54D) MissionCommand);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio, (&t_1), sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightPlanner(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(25);
  {

    sfUpdateLoc(26);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_4);
    art_Port_45E54D_apply(SF &t_4, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_4);

    sfUpdateLoc(27);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_5);
    art_Port_45E54D_apply(SF &t_5, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlan"), art_PortMode_Type_EventOut);
    FlightPlan = (art_Port_45E54D) (&t_5);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_7);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_7, Z_C(1));
    DeclNewNone_5C1355(t_8);
    None_5C1355_apply(SF &t_8);
    DeclNewHAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge(t_6);
    HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_apply(SF &t_6, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner"), (art_DispatchPropertyProtocol) (&t_7), (Option_9AF35E) (&t_8), (art_Port_45E54D) MissionCommand, (art_Port_45E54D) FlightPlan);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner, (&t_6), sizeof(struct HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_MissionComputer_Impl_Instance_SW_FlightController(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  {

    sfUpdateLoc(40);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_9);
    art_Port_45E54D_apply(SF &t_9, Z_C(3), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightPlan"), art_PortMode_Type_EventIn);
    FlightPlan = (art_Port_45E54D) (&t_9);
    DeclNewart_DispatchPropertyProtocol_Sporadic(t_11);
    art_DispatchPropertyProtocol_Sporadic_apply(SF &t_11, Z_C(1));
    DeclNewNone_5C1355(t_12);
    None_5C1355_apply(SF &t_12);
    DeclNewHAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge(t_10);
    HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_apply(SF &t_10, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_FlightController"), (art_DispatchPropertyProtocol) (&t_11), (Option_9AF35E) (&t_12), (art_Port_45E54D) FlightPlan);
    Type_assign(&_HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController, (&t_10), sizeof(struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge));
  }
};

void HAMR_Simple_V4_Arch_init_ad(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(52);
  {
    STATIC_ASSERT(3 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
    DeclNewIS_7E8796(t_14);
    t_14.size = (int8_t) 3;
    IS_7E8796_up(&t_14, 0, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST));
    IS_7E8796_up(&t_14, 1, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST));
    IS_7E8796_up(&t_14, 2, (art_Bridge) HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST));
    STATIC_ASSERT(2 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_15);
    t_15.size = (int8_t) 2;
    DeclNewart_Connection(t_16);
    art_Connection_apply(SF &t_16, (art_UPort) HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_Radio(SF_LAST)), (art_UPort) HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_MissionCommand_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST)));
    IS_08117A_up(&t_15, 0, (art_UConnection) (&t_16));
    DeclNewart_Connection(t_17);
    art_Connection_apply(SF &t_17, (art_UPort) HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightPlanner(SF_LAST)), (art_UPort) HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_FlightPlan_(HAMR_Simple_V4_Arch_MissionComputer_Impl_Instance_SW_FlightController(SF_LAST)));
    IS_08117A_up(&t_15, 1, (art_UConnection) (&t_17));
    DeclNewart_ArchitectureDescription(t_13);
    art_ArchitectureDescription_apply(SF &t_13, (IS_7E8796) (&t_14), (IS_08117A) (&t_15));
    Type_assign(&_HAMR_Simple_V4_Arch_ad, (&t_13), sizeof(struct art_ArchitectureDescription));
  }
};