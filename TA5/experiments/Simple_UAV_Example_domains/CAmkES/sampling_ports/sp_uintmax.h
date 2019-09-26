//
// NOTE: See documentation in sp_bool.h which is the same as this except for
// the type for data
//

#ifndef _SP_UINTMAX_H_
#define _SP_UINTMAX_H_

#include "seqNum.h"
#include "sb_PROC_HW_types.h"

// Sampling port message with uintmax_t data
typedef struct sp_uintmax {
  uintmax_t data;  
  _Atomic seqNum_t seqNum;  
} sp_uintmax_t;

void init_sp_uintmax(sp_uintmax_t *port, seqNum_t *seqNum);

bool write_sp_uintmax(sp_uintmax_t *port, const uintmax_t *data, seqNum_t *seqNum);

bool read_sp_uintmax(sp_uintmax_t *port, uintmax_t *data, seqNum_t *seqNum);

#endif
