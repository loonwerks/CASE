//
// NOTE: See documentation in sp_bool.h which is the same as this except for
// the type for data
//

#ifndef _SP_COMMAND_H_
#define _SP_COMMAND_H_

#include "seqNum.h"
#include "sb_PROC_HW_types.h"

// Sampling port message with SW__Command data
typedef struct sp_Command {
  SW__Command_Impl data;  
  _Atomic seqNum_t seqNum;  
} sp_Command_t;

void init_sp_Command(sp_Command_t *port, seqNum_t *seqNum);

bool write_sp_Command(sp_Command_t *port, const SW__Command_Impl *data, seqNum_t *seqNum);

bool read_sp_Command(sp_Command_t *port, SW__Command_Impl *data, seqNum_t *seqNum);

#endif
