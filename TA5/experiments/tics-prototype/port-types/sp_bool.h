#ifndef _SP_BOOL_H_
#define _SP_BOOL_H_

#include "seqNum.h"

// Sampling port message with bool data
typedef struct sp_bool {

  // The sampling port message data.
  ///
  // TODO: How do we handle differnet data types?  Possible options:
  //
  //   - HAMR could generate a dedicated struct for each data port type. In
  //     the long run this may be the best options since AADL can specify the
  //     message type.
  //
  //   - Generalize this struct with some C wizardry. Would it help to split
  //     this into two data parts, one for the data and one for the sequence
  //     number?
  //
  bool data;
  
  // Sequence number incremented by the writer every time the sampling port is
  // written. Read by the reciever to detect dropped messages and incoherant
  // message reads.  An incoherant message is one that is formed of parts of
  // more than one message.  An incoherent message can occure when writing
  // happens durring read. If the component runs long enough, this counter
  // will wrap back to zero.  This causes no problems unless the reciever is
  // delayed for the wrap time. In that case the reciever may not detect
  // dropped or incoherent messags. But if the reciver is delayed for that
  // long the system is probably in a very bad state. Also see DIRTY_SEQ_NUM
  // above.
  //
  // TODO: Currently using ggc builtin _Atomic. Would like to use c11 std, but
  // have not figured out how to do this in the seL4 cmake build environment.
  _Atomic seqNum_t seqNum;  

} sp_bool_t;

void init_sp_bool(sp_bool_t *port, seqNum_t *seqNum);

bool write_sp_bool(sp_bool_t *port, const bool *data, seqNum_t *seqNum);

bool read_sp_bool(sp_bool_t *port, bool *data, seqNum_t *seqNum);

#endif
