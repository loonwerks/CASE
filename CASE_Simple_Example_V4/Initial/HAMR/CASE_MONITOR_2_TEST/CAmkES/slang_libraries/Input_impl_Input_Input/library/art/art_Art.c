#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_maxComponents;
Z _art_Art_maxPorts;
struct StaticString _art_Art_logTitle;
struct MS_83D5EB _art_Art_bridges;
struct MS_E444B2 _art_Art_connections;
struct MS_F55A18 _art_Art_ports;

void art_Art_init(STACK_FRAME_ONLY) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  art_Art_init_maxComponents(SF_LAST);
  art_Art_init_maxPorts(SF_LAST);
  art_Art_init_logTitle(SF_LAST);
  art_Art_init_bridges(SF_LAST);
  art_Art_init_connections(SF_LAST);
  art_Art_init_ports(SF_LAST);
}

Z art_Art_maxComponents(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxComponents;
}

Z art_Art_maxPorts(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxPorts;
}

String art_Art_logTitle(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (String) &_art_Art_logTitle;
}

MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_83D5EB) &_art_Art_bridges;
}

MS_E444B2 art_Art_connections(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_E444B2) &_art_Art_connections;
}

MS_F55A18 art_Art_ports(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_F55A18) &_art_Art_ports;
}

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "run", 0);

  sfUpdateLoc(91);
  {
    IS_7E8796 t_0 = art_ArchitectureDescription_components_(system);
    int8_t t_1 = (art_ArchitectureDescription_components_(system))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_Bridge component = (art_Bridge) &(t_0->value[t_2]);

      sfUpdateLoc(92);
      {
        art_Art_m_register(SF (art_Bridge) component);
      }
    }
  }

  sfUpdateLoc(95);
  {
    IS_08117A t_5 = art_ArchitectureDescription_connections_(system);
    int8_t t_6 = (art_ArchitectureDescription_connections_(system))->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_UConnection connection = (art_UConnection) &(t_5->value[t_7]);

      sfUpdateLoc(96);
      {
        DeclNewart_UPort(t_3);
        art_UConnection_from_(SF (art_UPort) &t_3, connection);
        DeclNewart_UPort(t_4);
        art_UConnection_to_(SF (art_UPort) &t_4, connection);
        art_Art_connect(SF (art_UPort) ((art_UPort) &t_3), (art_UPort) ((art_UPort) &t_4));
      }
    }
  }

  sfUpdateLoc(99);
  {
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_run(SF_LAST);
  }
}

static inline B art_Art_register_extract_35_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_2, Z *_period_35_46) {
  if (!art_DispatchPropertyProtocol_Periodic__is(SF t_2)) return F;
  *_period_35_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF t_2));
  return T;
}

static inline B art_Art_register_extract_37_12(STACK_FRAME_SF art_DispatchPropertyProtocol t_2, Z *_min_37_46) {
  if (!art_DispatchPropertyProtocol_Sporadic__is(SF t_2)) return F;
  *_min_37_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF t_2));
  return T;
}

static inline B art_Art_register_extract_43_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_DataIn)) return F;
  return T;
}

static inline B art_Art_register_extract_44_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_DataOut)) return F;
  return T;
}

static inline B art_Art_register_extract_45_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_EventIn)) return F;
  return T;
}

static inline B art_Art_register_extract_46_14(STACK_FRAME_SF art_PortMode_Type t_10) {
  if (!art_PortMode_Type__eq(t_10, art_PortMode_Type_EventOut)) return F;
  return T;
}

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "register", 0);

  sfUpdateLoc(33);
  {
    Z t_0 = art_Bridge_id_(SF bridge);
    DeclNewSome_482E57(t_1);
    Some_482E57_apply(SF &t_1, (art_Bridge) bridge);
    MS_83D5EB_up(art_Art_bridges(SF_LAST), t_0, (Option_7BBFBE) (&t_1));
  }

  sfUpdateLoc(34);
  DeclNewart_DispatchPropertyProtocol(t_3);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_3, bridge);
  art_DispatchPropertyProtocol t_2 = ((art_DispatchPropertyProtocol) &t_3);
  B match_34_12 = F;
  if (!match_34_12) {
    Z period_35_46;
    match_34_12 = art_Art_register_extract_35_12(SF t_2, &period_35_46);
    if (match_34_12) {

      sfUpdateLoc(36);
      {
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Registered component: "));
        DeclNewString(t_5);
        art_Bridge_name_(SF (String) &t_5, bridge);
        String_string_(SF (String) &t_4, ((String) &t_5));
        String_string_(SF (String) &t_4, string(" (periodic: "));
        Z_string_(SF (String) &t_4, period_35_46);
        String_string_(SF (String) &t_4, string(")"));
        CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_4));
      }
    }
  }
  if (!match_34_12) {
    Z min_37_46;
    match_34_12 = art_Art_register_extract_37_12(SF t_2, &min_37_46);
    if (match_34_12) {

      sfUpdateLoc(38);
      {
        DeclNewString(t_6);
        String_string_(SF (String) &t_6, string("Registered component: "));
        DeclNewString(t_7);
        art_Bridge_name_(SF (String) &t_7, bridge);
        String_string_(SF (String) &t_6, ((String) &t_7));
        String_string_(SF (String) &t_6, string(" (sporadic: "));
        Z_string_(SF (String) &t_6, min_37_46);
        String_string_(SF (String) &t_6, string(")"));
        CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_6));
      }
    }
  }
  sfAssert(match_34_12, "Error when pattern matching.");

  sfUpdateLoc(40);
  {
    DeclNewart_Bridge_Ports(t_23);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_23, bridge);
    IS_820232 t_20 = art_Bridge_Ports_all_(((art_Bridge_Ports) &t_23));
    int8_t t_21 = (art_Bridge_Ports_all_(((art_Bridge_Ports) &t_23)))->size;
    for (int8_t t_22 = 0; t_22 < t_21; t_22++) {
      art_UPort port = (art_UPort) &(t_20->value[t_22]);

      sfUpdateLoc(41);
      {
        Z t_8 = art_UPort_id_(SF port);
        DeclNewSome_3E197E(t_9);
        Some_3E197E_apply(SF &t_9, (art_UPort) port);
        MS_F55A18_up(art_Art_ports(SF_LAST), t_8, (Option_6239DB) (&t_9));
      }

      sfUpdateLoc(42);
      art_PortMode_Type t_11 = art_UPort_mode_(SF port);
      art_PortMode_Type t_10 = t_11;
      B match_42_12 = F;
      if (!match_42_12) {
        match_42_12 = art_Art_register_extract_43_14(SF t_10);
        if (match_42_12) {

          sfUpdateLoc(43);
          {
            DeclNewString(t_12);
            String_string_(SF (String) &t_12, string("- Registered port: "));
            DeclNewString(t_13);
            art_UPort_name_(SF (String) &t_13, port);
            String_string_(SF (String) &t_12, ((String) &t_13));
            String_string_(SF (String) &t_12, string(" (data in)"));
            CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_12));
          }
        }
      }
      if (!match_42_12) {
        match_42_12 = art_Art_register_extract_44_14(SF t_10);
        if (match_42_12) {

          sfUpdateLoc(44);
          {
            DeclNewString(t_14);
            String_string_(SF (String) &t_14, string("- Registered port: "));
            DeclNewString(t_15);
            art_UPort_name_(SF (String) &t_15, port);
            String_string_(SF (String) &t_14, ((String) &t_15));
            String_string_(SF (String) &t_14, string(" (data out)"));
            CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_14));
          }
        }
      }
      if (!match_42_12) {
        match_42_12 = art_Art_register_extract_45_14(SF t_10);
        if (match_42_12) {

          sfUpdateLoc(45);
          {
            DeclNewString(t_16);
            String_string_(SF (String) &t_16, string("- Registered port: "));
            DeclNewString(t_17);
            art_UPort_name_(SF (String) &t_17, port);
            String_string_(SF (String) &t_16, ((String) &t_17));
            String_string_(SF (String) &t_16, string(" (event in)"));
            CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_16));
          }
        }
      }
      if (!match_42_12) {
        match_42_12 = art_Art_register_extract_46_14(SF t_10);
        if (match_42_12) {

          sfUpdateLoc(46);
          {
            DeclNewString(t_18);
            String_string_(SF (String) &t_18, string("- Registered port: "));
            DeclNewString(t_19);
            art_UPort_name_(SF (String) &t_19, port);
            String_string_(SF (String) &t_18, ((String) &t_19));
            String_string_(SF (String) &t_18, string(" (event out)"));
            CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_18));
          }
        }
      }
      sfAssert(match_42_12, "Error when pattern matching.");
    }
  }
}

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "connect", 0);

  sfUpdateLoc(85);
  {
    Z t_0 = art_UPort_id_(SF from);
    Z t_1 = art_UPort_id_(SF from);
    Z t_2 = art_UPort_id_(SF to);
    DeclNewIS_82ABD8(t_3);
    IS_82ABD8__append(SF (IS_82ABD8) &t_3, MS_E444B2_at(art_Art_connections(SF_LAST), t_1), t_2);
    MS_E444B2_up(art_Art_connections(SF_LAST), t_0, (IS_82ABD8) ((IS_82ABD8) &t_3));
  }

  sfUpdateLoc(86);
  {
    DeclNewString(t_4);
    String_string_(SF (String) &t_4, string("Connected ports: "));
    DeclNewString(t_5);
    art_UPort_name_(SF (String) &t_5, from);
    String_string_(SF (String) &t_4, ((String) &t_5));
    String_string_(SF (String) &t_4, string(" -> "));
    DeclNewString(t_6);
    art_UPort_name_(SF (String) &t_6, to);
    String_string_(SF (String) &t_4, ((String) &t_6));
    String_string_(SF (String) &t_4, string(""));
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_4));
  }
}

Unit art_Art_logInfo(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(73);
  {
    DeclNewart_Bridge(t_0);
    art_Art_bridge(SF (art_Bridge) &t_0, bridgeId);
    DeclNewString(t_1);
    art_Bridge_name_(SF (String) &t_1, ((art_Bridge) &t_0));
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logInfo(SF (String) ((String) &t_1), (String) msg);
  }
}

Unit art_Art_logDebug(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logDebug", 0);

  sfUpdateLoc(81);
  {
    DeclNewart_Bridge(t_0);
    art_Art_bridge(SF (art_Bridge) &t_0, bridgeId);
    DeclNewString(t_1);
    art_Bridge_name_(SF (String) &t_1, ((art_Bridge) &t_0));
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logDebug(SF (String) ((String) &t_1), (String) msg);
  }
}

Unit art_Art_logError(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logError", 0);

  sfUpdateLoc(77);
  {
    DeclNewart_Bridge(t_0);
    art_Art_bridge(SF (art_Bridge) &t_0, bridgeId);
    DeclNewString(t_1);
    art_Bridge_name_(SF (String) &t_1, ((art_Bridge) &t_0));
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_logError(SF (String) ((String) &t_1), (String) msg);
  }
}

Unit art_Art_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(61);
  {
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_putValue(SF portId, (art_DataContent) data);
  }
}

Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(69);
  {
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_sendOutput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
  }
}

Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(57);
  {
    CASE_MONITOR_2_TEST_Input_impl_Input_Input_Input_receiveInput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
  }
}

static inline B art_Art_bridge_extract_23_9_7BBFBE(STACK_FRAME_SF Option_7BBFBE t_0, art_Bridge *_r) {
  if (!Some_482E57__is(SF t_0)) return F;
  *_r = (art_Bridge) Some_482E57_value_(Some_482E57__as(SF t_0));
  return T;
}

void art_Art_bridge(STACK_FRAME art_Bridge result, Z bridgeId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "bridge", 0);

  sfUpdateLoc(23);
  DeclNewOption_7BBFBE(_t_0);
  Option_7BBFBE t_0 = (Option_7BBFBE) &_t_0;;
  {
    Type_assign(t_0, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId), sizeof(union Option_7BBFBE));
  }
  art_Bridge r;
  sfAssert(art_Art_bridge_extract_23_9_7BBFBE(SF t_0, &r), "Error during var pattern matching.");
  Type_assign(result, r, sizeof(union art_Bridge));
  return;
}

void art_Art_init_maxComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _art_Art_maxComponents = Z_C(1);
};

void art_Art_init_maxPorts(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _art_Art_maxPorts = Z_C(1);
};

void art_Art_init_logTitle(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  Type_assign(&_art_Art_logTitle, string("Art"), sizeof(struct StaticString));
};

void art_Art_init_bridges(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  DeclNewNone_734370(t_0);
  None_734370_apply(SF &t_0);
  DeclNewMS_83D5EB(t_1);
  MS_83D5EB_create(SF (MS_83D5EB) &t_1, art_Art_maxComponents(SF_LAST), (Option_7BBFBE) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_83D5EB) &t_1), sizeof(struct MS_83D5EB));
};

void art_Art_init_connections(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  DeclNewMS_E444B2(t_3);
  MS_E444B2_create(SF (MS_E444B2) &t_3, art_Art_maxPorts(SF_LAST), (IS_82ABD8) (&t_2));
  Type_assign(&_art_Art_connections, ((MS_E444B2) &t_3), sizeof(struct MS_E444B2));
};

void art_Art_init_ports(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(20);
  DeclNewNone_39BC5F(t_4);
  None_39BC5F_apply(SF &t_4);
  DeclNewMS_F55A18(t_5);
  MS_F55A18_create(SF (MS_F55A18) &t_5, art_Art_maxPorts(SF_LAST), (Option_6239DB) (&t_4));
  Type_assign(&_art_Art_ports, ((MS_F55A18) &t_5), sizeof(struct MS_F55A18));
};