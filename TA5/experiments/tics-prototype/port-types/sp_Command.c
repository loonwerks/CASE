//
// NOTE: See documentation in sp_bool.c which is the same as this except for
// the type for data
//

// TODO: Prune Includes?
#include <camkes.h>
#include <stdio.h>
#include <sel4/sel4.h>
#include <utils/util.h>
#include <sel4utils/util.h>
#include <sel4utils/helpers.h>

#include "seqNum.h"
#include "sp_Command.h"

void init_sp_Command(sp_Command_t *port, seqNum_t *seqNum) {
  *seqNum = 0; // First message sequence number will be 1.
  port->seqNum = DIRTY_SEQ_NUM;
}

// Write message to a sampling port (data type: int)
// See sp_bool.c for additional documentation
bool write_sp_Command(sp_Command_t *port, const SW__Command_Impl *data, seqNum_t *seqNum) {
  // Mark the message dirty BEFORE we start writting.
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
  // <dataportName>_release() expands to:
  __atomic_thread_fence(__ATOMIC_RELEASE);
  // Can't fail for now.
  return true;
}

// Read a message from a sampling port (data type: int)
// See sp_bool.c for additional documentation
bool read_sp_Command(sp_Command_t *port, SW__Command_Impl *data, seqNum_t *seqNum) {
  seqNum_t newSeqNum = port->seqNum;
  // Acquire memory fence - Read seqNum BEFORE reading data
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  *data = port->data;
  // Acquire memory fence - Read data BEFORE reading seqNum again 
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  // The following logic will NOT catch case where the writer wrapped
  // sequence numbers since our last read. For this to happen, this reader
  // would have to be delayed for the entire time to wrap. 
  if (newSeqNum != DIRTY_SEQ_NUM && newSeqNum == port->seqNum) {
    // Message data is good.  Write did not occure durring read. 
    *seqNum = newSeqNum;
    return true;
  } else {
    // Writer may have updated data while we were reading. Do not use possibly incoherent data.
    *seqNum = DIRTY_SEQ_NUM;
    return false;
  }
}

