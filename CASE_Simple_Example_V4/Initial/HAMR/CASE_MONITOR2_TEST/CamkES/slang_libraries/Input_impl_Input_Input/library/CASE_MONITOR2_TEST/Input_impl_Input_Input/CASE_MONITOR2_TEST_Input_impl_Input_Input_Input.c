#include <all.h>

B CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialized_ = F;

struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge;
union art_Bridge_EntryPoints _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints;
union Option_8E9F45 _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_noData;
Z _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_id;
union Option_8E9F45 _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port;

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(STACK_FRAME_ONLY) {
  if (CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialized_) return;
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialized_ = T;
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "<init>", 0);
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_InputBridge(SF_LAST);
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_entryPoints(SF_LAST);
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_noData(SF_LAST);
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_Observed_id(SF_LAST);
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_Observed_port(SF_LAST);
}

CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(CALLER_LAST);
  return (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge) &_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge;
}

art_Bridge_EntryPoints CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints;
}

Option_8E9F45 CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_noData(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_noData;
}

Z CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_id(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(CALLER_LAST);
  return _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_id;
}

Option_8E9F45 CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port(STACK_FRAME_ONLY) {
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(CALLER_LAST);
  return (Option_8E9F45) &_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port;
}

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port_a(STACK_FRAME Option_8E9F45 p_Observed_port) {
  CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init(CALLER_LAST);
  Type_assign(&_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port, p_Observed_port, sizeof(union Option_8E9F45));
}

Z CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "main", 0);

  sfUpdateLoc(84);
  {
    CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(85);
  {
    CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(86);
  {
    CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(87);
  {
    CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(89);
  {
    CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "initialiseArchitecture", 0);

  sfUpdateLoc(68);
  art_ArchitectureDescription ad;
  STATIC_ASSERT(1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  DeclNewIS_7E8796(t_1);
  t_1.size = (int8_t) 1;
  IS_7E8796_up(&t_1, 0, (art_Bridge) CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge(SF_LAST));
  STATIC_ASSERT(0 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_2);
  t_2.size = (int8_t) 0;
  DeclNewart_ArchitectureDescription(t_0);
  art_ArchitectureDescription_apply(SF &t_0, (IS_7E8796) (&t_1), (IS_08117A) (&t_2));
  ad = (art_ArchitectureDescription) (&t_0);

  sfUpdateLoc(72);
  {
    art_Art_run(SF (art_ArchitectureDescription) ad);
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "initialiseEntryPoint", 0);

  sfUpdateLoc(75);
  {
    art_Bridge_EntryPoints_initialise_(SF CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "computeEntryPoint", 0);

  sfUpdateLoc(77);
  {
    art_Bridge_EntryPoints_compute_(SF CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "finaliseEntryPoint", 0);

  sfUpdateLoc(79);
  {
    art_Bridge_EntryPoints_finalise_(SF CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints(SF_LAST));
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(99);
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

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "touch", 0);

  sfUpdateLoc(95);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(96);
    {
      CASE_MONITOR2_TEST_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(101);
    {
      DeclNewIS_C4F575(t_2);
      CASE_MONITOR2_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_2);
      DeclNewCASE_MONITOR2_TEST_Base_Types_Bits_Payload(t_1);
      CASE_MONITOR2_TEST_Base_Types_Bits_Payload_apply(SF &t_1, (IS_C4F575) ((IS_C4F575) &t_2));
      CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_touch_printDataContent(SF (art_DataContent) (&t_1));
    }

    sfUpdateLoc(102);
    {
      DeclNewart_Empty(t_3);
      art_Empty_apply(SF &t_3);
      CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_touch_printDataContent(SF (art_DataContent) (&t_3));
    }

    sfUpdateLoc(104);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api(t_4);
      Option_7C4B92_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_4, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_logInfo_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_4), (String) string(""));
    }

    sfUpdateLoc(105);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api(t_5);
      Option_7C4B92_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_5, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_logDebug_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_5), (String) string(""));
    }

    sfUpdateLoc(106);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api(t_6);
      Option_7C4B92_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_6, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_logError_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_6), (String) string(""));
    }

    sfUpdateLoc(107);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api(t_7);
      Option_F64051_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_7, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_logInfo_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_7), (String) string(""));
    }

    sfUpdateLoc(108);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api(t_8);
      Option_F64051_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_8, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_logDebug_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(109);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api(t_9);
      Option_F64051_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_9, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_logError_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(110);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api(t_10);
      Option_7C4B92_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_10, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_11);
      CASE_MONITOR2_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_11);
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api_put_Observed_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) &t_10), (IS_C4F575) ((IS_C4F575) &t_11));
    }

    sfUpdateLoc(111);
    {
      DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api(t_12);
      Option_F64051_get_(SF (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_12, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_13);
      CASE_MONITOR2_TEST_Base_Types_Bits_example(SF (IS_C4F575) &t_13);
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api_put_Observed_(SF ((CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) &t_12), (IS_C4F575) ((IS_C4F575) &t_13));
    }
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_run(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "run", 0);
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(116);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(117);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(118);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(128);
  {
    String_cprint(title, T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(130);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(122);
  {
    String_cprint(title, F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(124);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "putValue", 0);

  sfUpdateLoc(51);
  B t_0;
  {
    t_0 = Z__eq(portId, CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(52);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(54);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: Input.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "sendOutput", 0);

  sfUpdateLoc(61);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(62);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port(SF_LAST));
      CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_seL4Nix_Observed_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(63);
    {
      CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port_a(SF (Option_8E9F45) CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_noData(SF_LAST));
    }
  }
}

Unit CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Input.scala", "CASE_MONITOR2_TEST.Input_impl_Input_Input.Input", "receiveInput", 0);
}

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_InputBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D Observed;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("CASE_MONITOR2_TEST_impl_Instance_Input_Input_Observed"), art_PortMode_Type_EventOut);
    Observed = (art_Port_45E54D) (&t_0);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_2);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_2, Z_C(500));
    DeclNewNone_5C1355(t_3);
    None_5C1355_apply(SF &t_3);
    DeclNewCASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge(t_1);
    CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_apply(SF &t_1, Z_C(0), (String) string("CASE_MONITOR2_TEST_impl_Instance_Input_Input"), (art_DispatchPropertyProtocol) (&t_2), (Option_9AF35E) (&t_3), (art_Port_45E54D) Observed);
    Type_assign(&_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge, (&t_1), sizeof(struct CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge));
  }
};

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(29);
  Type_assign(&_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_entryPoints, CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_entryPoints_(CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(30);
  DeclNewNone_964667(t_4);
  None_964667_apply(SF &t_4);
  Type_assign(&_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_noData, (&t_4), sizeof(struct None_964667));
};

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_Observed_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  _CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_id = art_Port_45E54D_id_(CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_Observed_(CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_InputBridge(SF_LAST)));
};

void CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_init_Observed_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  Type_assign(&_CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_Observed_port, CASE_MONITOR2_TEST_Input_impl_Input_Input_Input_noData(SF_LAST), sizeof(union Option_8E9F45));
};