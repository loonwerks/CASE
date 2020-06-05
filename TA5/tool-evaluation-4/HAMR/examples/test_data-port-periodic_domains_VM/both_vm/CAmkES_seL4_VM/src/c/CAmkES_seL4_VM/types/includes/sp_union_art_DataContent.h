#ifndef SP_UNION_ART_DATACONTENT_H
#define SP_UNION_ART_DATACONTENT_H

#include <sb_types.h>
#include <seqNum.h>

// Sampling port message with bool data
typedef struct sp_union_art_DataContent {

  // The sampling port message data.
  //
  union_art_DataContent data;

  // Sequence number incremented by the writer every time the sampling port is
  // written. Read by the receiver to detect dropped messages and incoherent
  // message reads.  An incoherent message is one that is formed of parts of
  // more than one message.  An incoherent message can occur when writing
  // happens during read. If the component runs long enough, this counter
  // will wrap back to zero.  This causes no problems unless the receiver is
  // delayed for the wrap time. In that case the receiver may not detect
  // dropped or incoherent message. But if the receiver is delayed for that
  // long the system is probably in a very bad state. Also see DIRTY_SEQ_NUM
  // above.
  //
  // TODO: Currently using ggc builtin _Atomic. Would like to use c11 std, but
  // have not figured out how to do this int the seL4 cmake build environment.
  _Atomic seqNum_t seqNum;  

} sp_union_art_DataContent_t;

void init_sp_union_art_DataContent(sp_union_art_DataContent_t *port, seqNum_t *seqNum);

bool write_sp_union_art_DataContent(sp_union_art_DataContent_t *port, const union_art_DataContent *data, seqNum_t *seqNum);

bool read_sp_union_art_DataContent(sp_union_art_DataContent_t *port, union_art_DataContent *data, seqNum_t *seqNum);

bool is_empty_sp_union_art_DataContent(sp_union_art_DataContent_t *port);

#endif
