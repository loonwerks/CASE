//
// NOTE: See documentation in sp_bool.h which is the same as this except for
// the type for data
//

#ifndef _SP_MISSION_H_
#define _SP_MISSION_H_

#include "seqNum.h"
#include "sb_PROC_HW_types.h"

// Sampling port message with SW__Mission data
typedef struct sp_Mission {
  // TODO: Why did KSU use containers?
  sb_SW__Mission_container data;  
  _Atomic seqNum_t seqNum;  
} sp_Mission_t;

void init_sp_Mission(sp_Mission_t *port, seqNum_t *seqNum);

bool write_sp_Mission(sp_Mission_t *port, const sb_SW__Mission_container *data, seqNum_t *seqNum);

bool read_sp_Mission(sp_Mission_t *port, sb_SW__Mission_container *data, seqNum_t *seqNum);

#endif
