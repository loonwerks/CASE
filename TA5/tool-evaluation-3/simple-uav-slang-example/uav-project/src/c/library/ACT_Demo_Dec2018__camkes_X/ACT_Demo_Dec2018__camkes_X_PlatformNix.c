#include <all.h>

B ACT_Demo_Dec2018__camkes_X_PlatformNix_initialized_ = F;

Z _ACT_Demo_Dec2018__camkes_X_PlatformNix_seed;
struct IS_82ABD8 _ACT_Demo_Dec2018__camkes_X_PlatformNix_ids;

void ACT_Demo_Dec2018__camkes_X_PlatformNix_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_PlatformNix_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_PlatformNix_initialized_ = T;
  DeclNewStackFrame(caller, "PlatformNix.scala", "ACT_Demo_Dec2018__camkes_X.PlatformNix", "<init>", 0);
  _ACT_Demo_Dec2018__camkes_X_PlatformNix_seed = Z_C(0);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_PlatformNix_ids, (&t_0), sizeof(struct IS_82ABD8));
}

Z ACT_Demo_Dec2018__camkes_X_PlatformNix_seed(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_PlatformNix_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_PlatformNix_seed;
}

void ACT_Demo_Dec2018__camkes_X_PlatformNix_seed_a(STACK_FRAME Z p_seed) {
  ACT_Demo_Dec2018__camkes_X_PlatformNix_init(CALLER_LAST);
  _ACT_Demo_Dec2018__camkes_X_PlatformNix_seed = p_seed;
}

IS_82ABD8 ACT_Demo_Dec2018__camkes_X_PlatformNix_ids(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_PlatformNix_init(CALLER_LAST);
  return (IS_82ABD8) &_ACT_Demo_Dec2018__camkes_X_PlatformNix_ids;
}

void ACT_Demo_Dec2018__camkes_X_PlatformNix_ids_a(STACK_FRAME IS_82ABD8 p_ids) {
  ACT_Demo_Dec2018__camkes_X_PlatformNix_init(CALLER_LAST);
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_PlatformNix_ids, p_ids, sizeof(struct IS_82ABD8));
}

Unit ACT_Demo_Dec2018__camkes_X_PlatformNix_initialise(STACK_FRAME Z seed, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "ACT_Demo_Dec2018__camkes_X.PlatformNix", "initialise", 0);

  sfUpdateLoc(15);
  ACT_Demo_Dec2018__camkes_X_PlatformNix_seed_a(SF (Z) seed);

  sfUpdateLoc(16);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, portOpt, sizeof(union Option_882048));
  B match_16 = F;
  if (!match_16) {
    match_16 = T;
    Z port_17_17;
    match_16 = match_16 && Some_488F47__is(SF &t_0);
    if (match_16) {
      port_17_17 = Some_488F47_value_(Some_488F47__as(SF &t_0));
    }
    if (match_16) {

      sfUpdateLoc(18);
      Z id = Z__add(seed, port_17_17);

      sfUpdateLoc(19);
      Z t_1 = ACT_Demo_Dec2018__camkes_X_SharedMemory_create(SF id);

      sfUpdateLoc(20);
      DeclNewIS_82ABD8(t_2);
      IS_82ABD8__append(SF (IS_82ABD8) &t_2, ACT_Demo_Dec2018__camkes_X_PlatformNix_ids(SF_LAST), id);
      ACT_Demo_Dec2018__camkes_X_PlatformNix_ids_a(SF (IS_82ABD8) ((IS_82ABD8) &t_2));
    }
  }
  if (!match_16) {
    match_16 = T;
    if (match_16) {
    }
  }
  sfAssert(match_16, "Error when pattern matching.");
}

void ACT_Demo_Dec2018__camkes_X_PlatformNix_receive(STACK_FRAME Tuple2_D0E3BB result, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "ACT_Demo_Dec2018__camkes_X.PlatformNix", "receive", 0);

  sfUpdateLoc(26);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, portOpt, sizeof(union Option_882048));
  B match_26 = F;
  if (!match_26) {
    match_26 = T;
    Z port_27_17;
    match_26 = match_26 && Some_488F47__is(SF &t_0);
    if (match_26) {
      port_27_17 = Some_488F47_value_(Some_488F47__as(SF &t_0));
    }
    if (match_26) {

      sfUpdateLoc(28);
      DeclNewart_DataContent(t_1);
      ACT_Demo_Dec2018__camkes_X_SharedMemory_receive(SF (art_DataContent) &t_1, Z__add(ACT_Demo_Dec2018__camkes_X_PlatformNix_seed(SF_LAST), port_27_17));
      art_DataContent d = (art_DataContent) ((art_DataContent) &t_1);
      DeclNewTuple2_D0E3BB(t_2);
      Tuple2_D0E3BB_apply(SF &t_2, port_27_17, d);
      Type_assign(result, (&t_2), sizeof(struct Tuple2_D0E3BB));
    }
  }
  if (!match_26) {
    match_26 = T;
    if (match_26) {

      sfUpdateLoc(30);
      DeclNewString(t_3);
      String t_4 = (String) &t_3;
      String_string(SF t_4, string("Unsupported receive operation without port."));
      sfAbort(t_4->value);
      abort();
    }
  }
  sfAssert(match_26, "Error when pattern matching.");
}

void ACT_Demo_Dec2018__camkes_X_PlatformNix_receiveAsync(STACK_FRAME Option_02FA6D result, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "ACT_Demo_Dec2018__camkes_X.PlatformNix", "receiveAsync", 0);

  sfUpdateLoc(44);
  DeclNewOption_882048(t_0);
  Type_assign(&t_0, portOpt, sizeof(union Option_882048));
  B match_44 = F;
  if (!match_44) {
    match_44 = T;
    Z port_45_17;
    match_44 = match_44 && Some_488F47__is(SF &t_0);
    if (match_44) {
      port_45_17 = Some_488F47_value_(Some_488F47__as(SF &t_0));
    }
    if (match_44) {

      sfUpdateLoc(46);
      DeclNewOption_8E9F45(t_1);
      ACT_Demo_Dec2018__camkes_X_SharedMemory_receiveAsync(SF (Option_8E9F45) &t_1, Z__add(ACT_Demo_Dec2018__camkes_X_PlatformNix_seed(SF_LAST), port_45_17));
      Option_8E9F45 dOpt = (Option_8E9F45) ((Option_8E9F45) &t_1);

      sfUpdateLoc(47);
      DeclNewOption_8E9F45(t_2);
      Type_assign(&t_2, dOpt, sizeof(union Option_8E9F45));
      B match_47 = F;
      if (!match_47) {
        match_47 = T;
        art_DataContent d_48_21;
        match_47 = match_47 && Some_D29615__is(SF &t_2);
        if (match_47) {
          d_48_21 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF &t_2));
        }
        if (match_47) {
          DeclNewTuple2_D0E3BB(t_4);
          Tuple2_D0E3BB_apply(SF &t_4, port_45_17, d_48_21);
          DeclNewSome_E9D1E5(t_3);
          Some_E9D1E5_apply(SF &t_3, (Tuple2_D0E3BB) (&t_4));
          Type_assign(result, (&t_3), sizeof(struct Some_E9D1E5));
        }
      }
      if (!match_47) {
        match_47 = T;
        if (match_47) {
          DeclNewNone_93AA2B(t_5);
          None_93AA2B_apply(SF &t_5);
          Type_assign(result, (&t_5), sizeof(struct None_93AA2B));
        }
      }
      sfAssert(match_47, "Error when pattern matching.");
    }
  }
  if (!match_44) {
    match_44 = T;
    if (match_44) {

      sfUpdateLoc(51);
      DeclNewString(t_6);
      String t_7 = (String) &t_6;
      String_string(SF t_7, string("Unsupported receive operation without port."));
      sfAbort(t_7->value);
      abort();
    }
  }
  sfAssert(match_44, "Error when pattern matching.");
}

B ACT_Demo_Dec2018__camkes_X_PlatformNix_sendAsync(STACK_FRAME Z app, Z port, art_DataContent data) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "ACT_Demo_Dec2018__camkes_X.PlatformNix", "sendAsync", 0);

  sfUpdateLoc(39);
  B r = ACT_Demo_Dec2018__camkes_X_SharedMemory_sendAsync(SF port, Z__add(ACT_Demo_Dec2018__camkes_X_PlatformNix_seed(SF_LAST), port), (art_DataContent) data);
  return r;
}

Unit ACT_Demo_Dec2018__camkes_X_PlatformNix_finalise(STACK_FRAME_LAST) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "ACT_Demo_Dec2018__camkes_X.PlatformNix", "finalise", 0);

  sfUpdateLoc(56);
  {
    IS_82ABD8 t_0 = ACT_Demo_Dec2018__camkes_X_PlatformNix_ids(SF_LAST);
    int8_t t_1 = (ACT_Demo_Dec2018__camkes_X_PlatformNix_ids(SF_LAST))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z id = t_0->value[t_2];

      sfUpdateLoc(57);
      ACT_Demo_Dec2018__camkes_X_SharedMemory_remove(SF id);
    }
  }
}