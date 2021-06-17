#include <all.h>

B hamr_PlatformNix_initialized_ = F;

Z _hamr_PlatformNix_seed;
struct IS_82ABD8 _hamr_PlatformNix_ids;

void hamr_PlatformNix_init(STACK_FRAME_ONLY) {
  if (hamr_PlatformNix_initialized_) return;
  hamr_PlatformNix_initialized_ = T;
  DeclNewStackFrame(caller, "PlatformNix.scala", "hamr.PlatformNix", "<init>", 0);
  hamr_PlatformNix_init_seed(SF_LAST);
  hamr_PlatformNix_init_ids(SF_LAST);
}

Z hamr_PlatformNix_seed(STACK_FRAME_ONLY) {
  hamr_PlatformNix_init(CALLER_LAST);
  return _hamr_PlatformNix_seed;
}

void hamr_PlatformNix_seed_a(STACK_FRAME Z p_seed) {
  hamr_PlatformNix_init(CALLER_LAST);
  _hamr_PlatformNix_seed = p_seed;
}

IS_82ABD8 hamr_PlatformNix_ids(STACK_FRAME_ONLY) {
  hamr_PlatformNix_init(CALLER_LAST);
  return (IS_82ABD8) &_hamr_PlatformNix_ids;
}

void hamr_PlatformNix_ids_a(STACK_FRAME IS_82ABD8 p_ids) {
  hamr_PlatformNix_init(CALLER_LAST);
  Type_assign(&_hamr_PlatformNix_ids, p_ids, sizeof(struct IS_82ABD8));
}

static inline B hamr_PlatformNix_receive_extract_27_12_882048(STACK_FRAME_SF Option_882048 t_0, Z *_port_27_17) {
  if (!Some_488F47__is(SF t_0)) return F;
  *_port_27_17 = Some_488F47_value_(Some_488F47__as(SF t_0));
  return T;
}

static inline B hamr_PlatformNix_receive_extract_30_12_882048(STACK_FRAME_SF Option_882048 t_0) {
  return T;
}

Unit hamr_PlatformNix_receive(STACK_FRAME Option_882048 portOpt, MBox2_1CBFC4 out) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "hamr.PlatformNix", "receive", 0);

  sfUpdateLoc(26);
  Option_882048 t_0 = portOpt;
  B match_26_5 = F;
  if (!match_26_5) {
    Z port_27_17;
    match_26_5 = hamr_PlatformNix_receive_extract_27_12_882048(SF t_0, &port_27_17);
    if (match_26_5) {

      sfUpdateLoc(28);
      {
        MBox2_1CBFC4_value1_a(out, (Z) port_27_17);
      }

      sfUpdateLoc(29);
      {
        hamr_SharedMemory_receive(SF Z__add(hamr_PlatformNix_seed(SF_LAST), port_27_17), (MBox2_1CBFC4) out);
      }
    }
  }
  if (!match_26_5) {
    match_26_5 = hamr_PlatformNix_receive_extract_30_12_882048(SF t_0);
    if (match_26_5) {

      sfUpdateLoc(30);
      {
        DeclNewString(t_1);
        String t_2 = (String) &t_1;
        String_string_(SF t_2, string("Unsupported receive operation without port."));
        sfAbort(t_2->value);
        abort();
      }
    }
  }
  sfAssert(match_26_5, "Error when pattern matching.");
}

static inline B hamr_PlatformNix_receiveAsync_extract_45_12_882048(STACK_FRAME_SF Option_882048 t_0, Z *_port_45_17) {
  if (!Some_488F47__is(SF t_0)) return F;
  *_port_45_17 = Some_488F47_value_(Some_488F47__as(SF t_0));
  return T;
}

static inline B hamr_PlatformNix_receiveAsync_extract_46_12_882048(STACK_FRAME_SF Option_882048 t_0) {
  return T;
}

Unit hamr_PlatformNix_receiveAsync(STACK_FRAME Option_882048 portOpt, MBox2_1029D1 out) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "hamr.PlatformNix", "receiveAsync", 0);

  sfUpdateLoc(44);
  Option_882048 t_0 = portOpt;
  B match_44_5 = F;
  if (!match_44_5) {
    Z port_45_17;
    match_44_5 = hamr_PlatformNix_receiveAsync_extract_45_12_882048(SF t_0, &port_45_17);
    if (match_44_5) {

      sfUpdateLoc(45);
      {
        hamr_SharedMemory_receiveAsync(SF Z__add(hamr_PlatformNix_seed(SF_LAST), port_45_17), (MBox2_1029D1) out);
      }
    }
  }
  if (!match_44_5) {
    match_44_5 = hamr_PlatformNix_receiveAsync_extract_46_12_882048(SF t_0);
    if (match_44_5) {

      sfUpdateLoc(46);
      {
        DeclNewString(t_1);
        String t_2 = (String) &t_1;
        String_string_(SF t_2, string("Unsupported receive operation without port."));
        sfAbort(t_2->value);
        abort();
      }
    }
  }
  sfAssert(match_44_5, "Error when pattern matching.");
}

static inline B hamr_PlatformNix_initialise_extract_17_12_882048(STACK_FRAME_SF Option_882048 t_0, Z *_port_17_17) {
  if (!Some_488F47__is(SF t_0)) return F;
  *_port_17_17 = Some_488F47_value_(Some_488F47__as(SF t_0));
  return T;
}

static inline B hamr_PlatformNix_initialise_extract_21_12_882048(STACK_FRAME_SF Option_882048 t_0) {
  return T;
}

Unit hamr_PlatformNix_initialise(STACK_FRAME Z seed, Option_882048 portOpt) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "hamr.PlatformNix", "initialise", 0);

  sfUpdateLoc(15);
  {
    hamr_PlatformNix_seed_a(SF (Z) seed);
  }

  sfUpdateLoc(16);
  Option_882048 t_0 = portOpt;
  B match_16_5 = F;
  if (!match_16_5) {
    Z port_17_17;
    match_16_5 = hamr_PlatformNix_initialise_extract_17_12_882048(SF t_0, &port_17_17);
    if (match_16_5) {

      sfUpdateLoc(18);
      Z id;
      {
        id = Z__add(seed, port_17_17);
      }

      sfUpdateLoc(19);
      {
        Z t_1 = hamr_SharedMemory_create(SF id);
      }

      sfUpdateLoc(20);
      {
        DeclNewIS_82ABD8(t_2);
        IS_82ABD8__append(SF (IS_82ABD8) &t_2, hamr_PlatformNix_ids(SF_LAST), id);
        hamr_PlatformNix_ids_a(SF (IS_82ABD8) ((IS_82ABD8) &t_2));
      }
    }
  }
  if (!match_16_5) {
    match_16_5 = hamr_PlatformNix_initialise_extract_21_12_882048(SF t_0);
    if (match_16_5) {
    }
  }
  sfAssert(match_16_5, "Error when pattern matching.");
}

B hamr_PlatformNix_sendAsync(STACK_FRAME Z app, Z port, art_DataContent data) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "hamr.PlatformNix", "sendAsync", 0);

  sfUpdateLoc(39);
  B r;
  {
    r = hamr_SharedMemory_sendAsync(SF port, Z__add(hamr_PlatformNix_seed(SF_LAST), port), (art_DataContent) data);
  }
  return r;
}

Unit hamr_PlatformNix_finalise(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "PlatformNix.scala", "hamr.PlatformNix", "finalise", 0);

  sfUpdateLoc(51);
  {
    IS_82ABD8 t_0 = hamr_PlatformNix_ids(SF_LAST);
    int8_t t_1 = (hamr_PlatformNix_ids(SF_LAST))->size;
    for (int8_t t_2 = 0; t_2 < t_1; t_2++) {
      Z id = t_0->value[t_2];

      sfUpdateLoc(52);
      {
        hamr_SharedMemory_remove(SF id);
      }
    }
  }
}

void hamr_PlatformNix_init_seed(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(11);
  _hamr_PlatformNix_seed = Z_C(0);
};

void hamr_PlatformNix_init_ids(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&_hamr_PlatformNix_ids, (&t_0), sizeof(struct IS_82ABD8));
};