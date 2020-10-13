#include <sp_int8_t.h>

void init_sp_event_t(sp_event_t_t *port) {
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
bool emit_event_t(sp_event_t_t *port, seqNum_t *seqNum) {
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
// message. The sequence number of the message is also returned.
// The sequences number can be used to
// detect rereading the same message or dropped messages.
//
// This is a blocking read. The function will not return until a new event
// is received and consumed.
//
// TODO: Currently using ggc builtin __atomic_thread_fence(__ATOMIC_ACQUIRE).
// Would like to use c11 std, but have not figured out how to do this int the
// seL4 cmake build environment.
bool consume_event_t(sp_event_t_t *port, seqNum_t *seqNum) {
  seqNum_t newSeqNum = DIRTY_SEQ_NUM;
  while (newSeqNum == DIRTY_SEQ_NUM || newSeqNum == *seqNum) {
    // Acquire memory fence - Read data BEFORE reading seqNum again 
    __atomic_thread_fence(__ATOMIC_ACQUIRE);
    // The following logic will NOT catch case where the writer wrapped
    // sequence numbers since our last read. For this to happen, this reader
    // would have to be delayed for the entire time to wrap. 
    newSeqNum = port->seqNum;
  }
  // Message data is good.  Write did not occur during read. 
  *seqNum = newSeqNum;
  return true;
}
