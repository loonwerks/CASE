#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_maxComponents;
Z _art_Art_maxPorts;
struct StaticString _art_Art_logTitle;
struct MS_94FFA9 _art_Art_bridges;
struct MS_E444B2 _art_Art_connections;
struct MS_F55A18 _art_Art_ports;

void art_Art_init(STACK_FRAME_LAST) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  _art_Art_maxComponents = Z_C(6);
  _art_Art_maxPorts = Z_C(24);
  Type_assign(&_art_Art_logTitle, string("Art"), sizeof(struct StaticString));
  DeclNewMNone_2A2E1D(t_0);
  MNone_2A2E1D_apply(SF &t_0);
  DeclNewMS_94FFA9(t_1);
  MS_94FFA9_create(SF (MS_94FFA9) &t_1, art_Art_maxComponents(SF_LAST), (MOption_EA1D29) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_94FFA9) &t_1), sizeof(struct MS_94FFA9));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  DeclNewMS_E444B2(t_3);
  MS_E444B2_create(SF (MS_E444B2) &t_3, art_Art_maxPorts(SF_LAST), (IS_82ABD8) (&t_2));
  Type_assign(&_art_Art_connections, ((MS_E444B2) &t_3), sizeof(struct MS_E444B2));
  DeclNewNone_39BC5F(t_4);
  None_39BC5F_apply(SF &t_4);
  DeclNewMS_F55A18(t_5);
  MS_F55A18_create(SF (MS_F55A18) &t_5, art_Art_maxPorts(SF_LAST), (Option_6239DB) (&t_4));
  Type_assign(&_art_Art_ports, ((MS_F55A18) &t_5), sizeof(struct MS_F55A18));
}

Z art_Art_maxComponents(STACK_FRAME_LAST) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxComponents;
}

Z art_Art_maxPorts(STACK_FRAME_LAST) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxPorts;
}

String art_Art_logTitle(STACK_FRAME_LAST) {
  art_Art_init(CALLER_LAST);
  return (String) &_art_Art_logTitle;
}

MS_94FFA9 art_Art_bridges(STACK_FRAME_LAST) {
  art_Art_init(CALLER_LAST);
  return (MS_94FFA9) &_art_Art_bridges;
}

MS_E444B2 art_Art_connections(STACK_FRAME_LAST) {
  art_Art_init(CALLER_LAST);
  return (MS_E444B2) &_art_Art_connections;
}

MS_F55A18 art_Art_ports(STACK_FRAME_LAST) {
  art_Art_init(CALLER_LAST);
  return (MS_F55A18) &_art_Art_ports;
}

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "run", 0);

  sfUpdateLoc(89);
  {
    MS_852149 t_0 = art_ArchitectureDescription_components_(system);
    int8_t t_1 = (art_ArchitectureDescription_components_(system))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      art_Bridge component = (art_Bridge) &(t_0->value[t_2]);

      sfUpdateLoc(90);
      art_Art_m_register(SF (art_Bridge) component);                
    }
  }

  sfUpdateLoc(93);
  {
    IS_08117A t_5 = art_ArchitectureDescription_connections_(system);
    int8_t t_6 = (art_ArchitectureDescription_connections_(system))->size;
    for (int8_t t_7 = 0; t_7 < t_6; t_7++) {
      art_UConnection connection = (art_UConnection) &(t_5->value[t_7]);

      sfUpdateLoc(94);
      DeclNewart_UPort(t_3);
      art_UConnection_from_(SF (art_UPort) &t_3, connection);
      DeclNewart_UPort(t_4);
      art_UConnection_to_(SF (art_UPort) &t_4, connection);
      art_Art_connect(SF (art_UPort) ((art_UPort) &t_3), (art_UPort) ((art_UPort) &t_4));                
    }
  }

  sfUpdateLoc(97);
  ACT_Demo_Dec2018__camkes_X_ArtNix_run(SF_LAST);
}

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "register", 0);

  sfUpdateLoc(31);
  DeclNewMSome_D3D128(t_0);
  MSome_D3D128_apply(SF &t_0, (art_Bridge) bridge);
  Type_assign(MS_94FFA9_at(art_Art_bridges(SF_LAST), art_Bridge_id_(SF bridge)), (&t_0), sizeof(union MOption_EA1D29));

  sfUpdateLoc(32);
  DeclNewart_DispatchPropertyProtocol(t_1);
  art_Bridge_dispatchProtocol_(SF (art_DispatchPropertyProtocol) &t_1, bridge);
  DeclNewart_DispatchPropertyProtocol(t_2);
  Type_assign(&t_2, ((art_DispatchPropertyProtocol) &t_1), sizeof(union art_DispatchPropertyProtocol));
  B match_32 = F;
  if (!match_32) {
    match_32 = T;
    Z period_33_46;
    match_32 = match_32 && art_DispatchPropertyProtocol_Periodic__is(SF &t_2);
    if (match_32) {
      period_33_46 = art_DispatchPropertyProtocol_Periodic_period_(art_DispatchPropertyProtocol_Periodic__as(SF &t_2));
    }
    if (match_32) {

      sfUpdateLoc(34);
      DeclNewString(t_3);
      String_string(SF (String) &t_3, string("Registered component: "));
      DeclNewString(t_4);
      art_Bridge_name_(SF (String) &t_4, bridge);
      String_string(SF (String) &t_3, ((String) &t_4));
      String_string(SF (String) &t_3, string(" (periodic: "));
      Z_string(SF (String) &t_3, period_33_46);
      String_string(SF (String) &t_3, string(")"));
      ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_3));
    }
  }
  if (!match_32) {
    match_32 = T;
    Z min_35_46;
    match_32 = match_32 && art_DispatchPropertyProtocol_Sporadic__is(SF &t_2);
    if (match_32) {
      min_35_46 = art_DispatchPropertyProtocol_Sporadic_min_(art_DispatchPropertyProtocol_Sporadic__as(SF &t_2));
    }
    if (match_32) {

      sfUpdateLoc(36);
      DeclNewString(t_5);
      String_string(SF (String) &t_5, string("Registered component: "));
      DeclNewString(t_6);
      art_Bridge_name_(SF (String) &t_6, bridge);
      String_string(SF (String) &t_5, ((String) &t_6));
      String_string(SF (String) &t_5, string(" (sporadic: "));
      Z_string(SF (String) &t_5, min_35_46);
      String_string(SF (String) &t_5, string(")"));
      ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_5));
    }
  }
  sfAssert(match_32, "Error when pattern matching.");

  sfUpdateLoc(38);
  {
    DeclNewart_Bridge_Ports(t_17);
    art_Bridge_ports_(SF (art_Bridge_Ports) &t_17, bridge);
    IS_820232 t_18 = art_Bridge_Ports_all_(((art_Bridge_Ports) &t_17));
    int8_t t_19 = (art_Bridge_Ports_all_(((art_Bridge_Ports) &t_17)))->size;
    for (int8_t t_20 = 0; t_20 < t_19; t_20++) {
      art_UPort port = (art_UPort) &(t_18->value[t_20]);

      sfUpdateLoc(39);
      DeclNewSome_3E197E(t_7);
      Some_3E197E_apply(SF &t_7, (art_UPort) port);
      Type_assign(MS_F55A18_at(art_Art_ports(SF_LAST), art_UPort_id_(SF port)), (&t_7), sizeof(union Option_6239DB));

      sfUpdateLoc(40);
      art_PortMode t_8 = art_UPort_mode_(SF port);
      B match_40 = F;
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_DataIn);
        if (match_40) {

          sfUpdateLoc(41);
          DeclNewString(t_9);
          String_string(SF (String) &t_9, string("- Registered port: "));
          DeclNewString(t_10);
          art_UPort_name_(SF (String) &t_10, port);
          String_string(SF (String) &t_9, ((String) &t_10));
          String_string(SF (String) &t_9, string(" (data in)"));
          ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_9));
        }
      }
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_DataOut);
        if (match_40) {

          sfUpdateLoc(42);
          DeclNewString(t_11);
          String_string(SF (String) &t_11, string("- Registered port: "));
          DeclNewString(t_12);
          art_UPort_name_(SF (String) &t_12, port);
          String_string(SF (String) &t_11, ((String) &t_12));
          String_string(SF (String) &t_11, string(" (data out)"));
          ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_11));
        }
      }
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_EventIn);
        if (match_40) {

          sfUpdateLoc(43);
          DeclNewString(t_13);
          String_string(SF (String) &t_13, string("- Registered port: "));
          DeclNewString(t_14);
          art_UPort_name_(SF (String) &t_14, port);
          String_string(SF (String) &t_13, ((String) &t_14));
          String_string(SF (String) &t_13, string(" (event in)"));
          ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_13));
        }
      }
      if (!match_40) {
        match_40 = T;
        match_40 = match_40 && art_PortMode__eq(t_8, art_PortMode_EventOut);
        if (match_40) {

          sfUpdateLoc(44);
          DeclNewString(t_15);
          String_string(SF (String) &t_15, string("- Registered port: "));
          DeclNewString(t_16);
          art_UPort_name_(SF (String) &t_16, port);
          String_string(SF (String) &t_15, ((String) &t_16));
          String_string(SF (String) &t_15, string(" (event out)"));
          ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_15));
        }
      }
      sfAssert(match_40, "Error when pattern matching.");                
    }
  }
}

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "connect", 0);

  sfUpdateLoc(83);
  DeclNewIS_82ABD8(t_0);
  IS_82ABD8__append(SF (IS_82ABD8) &t_0, MS_E444B2_at(art_Art_connections(SF_LAST), art_UPort_id_(SF from)), art_UPort_id_(SF to));
  Type_assign(MS_E444B2_at(art_Art_connections(SF_LAST), art_UPort_id_(SF from)), ((IS_82ABD8) &t_0), sizeof(struct IS_82ABD8));

  sfUpdateLoc(84);
  DeclNewString(t_1);
  String_string(SF (String) &t_1, string("Connected ports: "));
  DeclNewString(t_2);
  art_UPort_name_(SF (String) &t_2, from);
  String_string(SF (String) &t_1, ((String) &t_2));
  String_string(SF (String) &t_1, string(" -> "));
  DeclNewString(t_3);
  art_UPort_name_(SF (String) &t_3, to);
  String_string(SF (String) &t_1, ((String) &t_3));
  String_string(SF (String) &t_1, string(""));
  ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) art_Art_logTitle(SF_LAST), (String) ((String) &t_1));
}

void art_Art_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "dispatchStatus", 0);
  DeclNewart_DispatchStatus(t_0);
  ACT_Demo_Dec2018__camkes_X_ArtNix_dispatchStatus(SF (art_DispatchStatus) &t_0, bridgeId);
  Type_assign(result, ((art_DispatchStatus) &t_0), sizeof(union art_DispatchStatus));
}

Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(55);
  ACT_Demo_Dec2018__camkes_X_ArtNix_receiveInput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
}

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  ACT_Demo_Dec2018__camkes_X_ArtNix_getValue(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
}

Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(67);
  ACT_Demo_Dec2018__camkes_X_ArtNix_sendOutput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
}

Unit art_Art_logInfo(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(71);
  DeclNewart_Bridge(t_0);
  art_Art_bridge(SF (art_Bridge) &t_0, bridgeId);
  DeclNewString(t_1);
  art_Bridge_name_(SF (String) &t_1, ((art_Bridge) &t_0));
  ACT_Demo_Dec2018__camkes_X_ArtNix_logInfo(SF (String) ((String) &t_1), (String) msg);
}

Unit art_Art_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(59);
  ACT_Demo_Dec2018__camkes_X_ArtNix_putValue(SF portId, (art_DataContent) data);
}

void art_Art_bridge(STACK_FRAME art_Bridge result, Z bridgeId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "bridge", 0);

  sfUpdateLoc(21);
  MOption_EA1D29 t_0;
  t_0 = (MOption_EA1D29) MS_94FFA9_at(art_Art_bridges(SF_LAST), bridgeId);
  B t_1 = T;
  DeclNewart_Bridge(_r);
  art_Bridge r = &_r;
  {
    t_1 = t_1 && MSome_D3D128__is(SF t_0);
    if (t_1) {
      Type_assign(r, MSome_D3D128_value_(MSome_D3D128__as(SF t_0)), sizeof(union art_Bridge));
    }
  }
  sfAssert(t_1, "Error during var pattern matching.");
  Type_assign(result, r, sizeof(union art_Bridge));
}

Unit art_Art_logError(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logError", 0);

  sfUpdateLoc(75);
  DeclNewart_Bridge(t_0);
  art_Art_bridge(SF (art_Bridge) &t_0, bridgeId);
  DeclNewString(t_1);
  art_Bridge_name_(SF (String) &t_1, ((art_Bridge) &t_0));
  ACT_Demo_Dec2018__camkes_X_ArtNix_logError(SF (String) ((String) &t_1), (String) msg);
}