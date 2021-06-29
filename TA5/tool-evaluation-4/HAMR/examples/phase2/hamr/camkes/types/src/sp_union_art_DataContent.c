#include <sp_union_art_DataContent.h>

void init_sp_union_art_DataContent(sp_union_art_DataContent_t *port, seqNum_t *seqNum) {
  *seqNum = 0; // First message sequence number will be 1.
  port->seqNum = DIRTY_SEQ_NUM;
}

// Write message to a sampling port (data type: int)
//
// Returns true when successful. Otherwise returns false. Currently there is no
// way to fail and true is always returned. But this may change in the
// future. seqNum is incremented when a message is successfully sent. seqNum
// should not be modified otherwise.
//
// TODO: Encapsulate this better. seqNum state should be maintained internally. Possible solutions:
//
//    - Allow write to have read access to dataport. Then seqNum is simply in the data port.
//
//    - Create a wrapper struct.
//
// TODO: Currently using ggc builtin __atomic_thread_fence(__ATOMIC_RELEASE).
// Would like to use c11 std, but have not figured out how to do this int the
// seL4 cmake build environment.
bool write_sp_union_art_DataContent(sp_union_art_DataContent_t *port, const union_art_DataContent *data, seqNum_t *seqNum) {
  // Mark the message dirty BEFORE we start writing.
  port->seqNum = DIRTY_SEQ_NUM;
  // Release memory fence - ensure write above to seqNum happens BEFORE reading data
  __atomic_thread_fence(__ATOMIC_RELEASE);
  // Write the data
  port->data = *data;
  // Increment the sequence number. We are the only writer of seqNum, so
  // increment does not have to be atomic.
  *seqNum = (*seqNum + 1) % DIRTY_SEQ_NUM;
  port->seqNum = *seqNum;
  // Release memory fence - ensure write above to seqNum happens BEFORE continuing
  __atomic_thread_fence(__ATOMIC_RELEASE);
  // Can't fail for now.
  return true;
}

// Read a message from a sampling port (data type: int)
//
// Return true upon successful read. Data is updated with the read
// message. The sequence number of the message is also returned. The message,
// might be tha same previously read. The sequences number can be used to
// detect rereading the same message or dropped messages.
//
// Return false if we fail to read a message. For now the only way to fail is
// when we detect the possibility of a write during read. In this case data
// may be incoherent and should not be used. Sequence number is set to
// DIRTY_SEQ_NUM;
//
// TODO: Currently using ggc builtin __atomic_thread_fence(__ATOMIC_ACQUIRE).
// Would like to use c11 std, but have not figured out how to do this int the
// seL4 cmake build environment.
bool read_sp_union_art_DataContent(sp_union_art_DataContent_t *port, union_art_DataContent *data, seqNum_t *seqNum) {
  seqNum_t newSeqNum = port->seqNum;
  // Acquire memory fence - Read seqNum BEFORE reading data
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  *data = port->data;
  // Acquire memory fence - Read data BEFORE reading seqNum again 
  //atomic_thread_fence(memory_order_acquire);
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  // The following logic will NOT catch case where the writer wrapped
  // sequence numbers since our last read. For this to happen, this reader
  // would have to be delayed for the entire time to wrap. 
  if (newSeqNum != DIRTY_SEQ_NUM && newSeqNum == port->seqNum) {
    // Message data is good.  Write did not occur during read. 
    *seqNum = newSeqNum;
    return true;
  } else {
    // Writer may have updated data while we were reading. Do not use possibly incoherent data.
    *seqNum = DIRTY_SEQ_NUM;
    return false;
  }
}

bool is_empty_sp_union_art_DataContent(sp_union_art_DataContent_t *port) {
  return port->seqNum == DIRTY_SEQ_NUM;
}
