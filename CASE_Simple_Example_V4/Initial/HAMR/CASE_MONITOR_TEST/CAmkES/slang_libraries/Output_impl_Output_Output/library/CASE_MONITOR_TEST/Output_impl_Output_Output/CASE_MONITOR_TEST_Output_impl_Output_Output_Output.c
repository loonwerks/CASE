#include <all.h>

B CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialized_ = F;

struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge;
union art_Bridge_EntryPoints _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints;
union Option_8E9F45 _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_noData;
Z _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_id;
union Option_8E9F45 _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port;

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(STACK_FRAME_ONLY) {
  if (CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialized_) return;
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialized_ = T;
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "<init>", 0);
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_OutputBridge(SF_LAST);
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_entryPoints(SF_LAST);
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_noData(SF_LAST);
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_Suspect_Traffic_Out_id(SF_LAST);
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_Suspect_Traffic_Out_port(SF_LAST);
}

CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(CALLER_LAST);
  return (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge) &_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge;
}

art_Bridge_EntryPoints CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints;
}

Option_8E9F45 CASE_MONITOR_TEST_Output_impl_Output_Output_Output_noData(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_noData;
}

Z CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_id(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(CALLER_LAST);
  return _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_id;
}

Option_8E9F45 CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port(STACK_FRAME_ONLY) {
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port;
}

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port_a(STACK_FRAME Option_8E9F45 p_Suspect_Traffic_Out_port) {
  CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port, p_Suspect_Traffic_Out_port, sizeof(union Option_8E9F45));
}

Z CASE_MONITOR_TEST_Output_impl_Output_Output_Output_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "main", 0);

  sfUpdateLoc(81);
  {
    CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(82);
  {
    CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(83);
  {
    CASE_MONITOR_TEST_Output_impl_Output_Output_Output_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(84);
  {
    CASE_MONITOR_TEST_Output_impl_Output_Output_Output_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(86);
  {
    CASE_MONITOR_TEST_Output_impl_Output_Output_Output_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "initialiseArchitecture", 0);

  sfUpdateLoc(65);
  art_ArchitectureDescription ad;
  STATIC_ASSERT(1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  DeclNewIS_7E8796(t_1);
  t_1.size = (int8_t) 1;
  IS_7E8796_up(&t_1, 0, (art_Bridge) CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge(SF_LAST));
  STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_ArchitectureDescription(t_0);
  art_ArchitectureDescription_apply(SF &t_0, (IS_7E8796) (&t_1), (IS_08117A) (&t_2));
  ad = (art_ArchitectureDescription) (&t_0);

  sfUpdateLoc(69);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "initialiseEntryPoint", 0);

  sfUpdateLoc(72);
  {
    art_Bridge_EntryPoints_initialise_(SF CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "computeEntryPoint", 0);

  sfUpdateLoc(74);
  {
    art_Bridge_EntryPoints_compute_(SF CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "finaliseEntryPoint", 0);

  sfUpdateLoc(76);
  {
    art_Bridge_EntryPoints_finalise_(SF CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(96);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "touch", 0);

  sfUpdateLoc(92);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(93);
    {
      CASE_MONITOR_TEST_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(98);
    {
      DeclNewIS_C4F575(t_2);
      CASE_MONITOR_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewCASE_MONITOR_TEST_Base_Types_Bits_Payload(t_1);
      CASE_MONITOR_TEST_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      CASE_MONITOR_TEST_Output_impl_Output_Output_Output_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(99);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      CASE_MONITOR_TEST_Output_impl_Output_Output_Output_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(101);
    {
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api(t_4);
      Option_3BD6B8_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &t_4, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api_logInfo_(SF ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(102);
    {
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api(t_5);
      Option_3BD6B8_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &t_5, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api_logDebug_(SF ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(103);
    {
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api(t_6);
      Option_3BD6B8_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &t_6, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api_logError_(SF ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(104);
    {
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api(t_7);
      Option_68B166_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_7, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api_logInfo_(SF ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(105);
    {
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api(t_8);
      Option_68B166_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_8, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api_logDebug_(SF ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(106);
    {
      DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api(t_9);
      Option_68B166_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_9, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api_logError_(SF ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(107);
    Option_30119F apiUsage_Suspect_Traffic_Out;
    DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api(t_10);
    Option_68B166_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_10, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_11);
    CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api_get_Suspect_Traffic_Out_(SF (Option_30119F) &t_11, ((CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) &t_10));
    apiUsage_Suspect_Traffic_Out = (Option_30119F) ((Option_30119F) &t_11);
  }
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "run", 0);
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(112);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(113);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(114);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(124);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(125);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(126);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(118);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(119);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(120);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "getValue", 0);

  sfUpdateLoc(41);
  B t_0;
  {
    t_0 = Z__eq(portId, CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(44);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: Output.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "sendOutput", 0);
}

Unit CASE_MONITOR_TEST_Output_impl_Output_Output_Output_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Output.scala", "CASE_MONITOR_TEST.Output_impl_Output_Output.Output", "receiveInput", 0);

  sfUpdateLoc(51);
  {
    DeclNewOption_8E9F45(t_0);
    CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_seL4Nix_Suspect_Traffic_Out_Receive(SF (Option_8E9F45) &t_0);
    CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_OutputBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D Suspect_Traffic_Out;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("CASE_MONITOR_TEST_impl_Instance_Output_Output_Suspect_Traffic_Out"), art_PortMode_Type_EventIn);
    Suspect_Traffic_Out = (art_Port_45E54D) (&t_0);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_2);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_2, Z_C(500));
    DeclNewNone_5C1355(t_3);
    None_5C1355_apply(SF &t_3);
    DeclNewCASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge(t_1);
    CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_apply(SF &t_1, Z_C(0), (String) string("CASE_MONITOR_TEST_impl_Instance_Output_Output"), (art_DispatchPropertyProtocol) (&t_2), (Option_9AF35E) (&t_3), (art_Port_45E54D) Suspect_Traffic_Out);
    Type_assign(&_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge, (&t_1), sizeof(struct CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge));
  }
};

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(29);
  Type_assign(&_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_entryPoints, CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_entryPoints_(CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(30);
  DeclNewNone_964667(t_4);
  None_964667_apply(SF &t_4);
  Type_assign(&_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_noData, (&t_4), sizeof(struct None_964667));
};

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_Suspect_Traffic_Out_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  _CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_id = art_Port_45E54D_id_(CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_Suspect_Traffic_Out_(CASE_MONITOR_TEST_Output_impl_Output_Output_Output_OutputBridge(SF_LAST)));
};

void CASE_MONITOR_TEST_Output_impl_Output_Output_Output_init_Suspect_Traffic_Out_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  Type_assign(&_CASE_MONITOR_TEST_Output_impl_Output_Output_Output_Suspect_Traffic_Out_port, CASE_MONITOR_TEST_Output_impl_Output_Output_Output_noData(SF_LAST), sizeof(union Option_8E9F45));
};