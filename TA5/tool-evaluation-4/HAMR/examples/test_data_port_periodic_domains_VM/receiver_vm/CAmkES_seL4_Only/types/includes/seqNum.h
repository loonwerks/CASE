#ifndef _SEQNUM_H_
#define _SEQNUM_H_

// Typedef for seqNum to make it easy to change the type. Keep these consistent!
typedef uintmax_t seqNum_t;
#define SEQNUM_MAX UINTMAX_MAX
#define PRIseqNum PRIuMAX

// DIRTY_SEQ_NUM is used to mark a sampling port message as dirty while it is
// being writen. DIRTY_SEQ_NUM is not a valid sequence number. Valid sequence
// numbers are from 0 to DIRTY_SEQ_NUM-1 is never a valid sequence number.
static const seqNum_t DIRTY_SEQ_NUM = SEQNUM_MAX;

#endif