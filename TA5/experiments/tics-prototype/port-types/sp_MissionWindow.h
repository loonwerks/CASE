//
// NOTE: See documentation in sp_bool.h which is the same as this except for
// the type for data
//

#ifndef _SP_MISSIONWINDOW_H_
#define _SP_MISSIONWINDOW_H_

#include "seqNum.h"
#include "sb_PROC_HW_types.h"

// Sampling port message with SW__MissionWindow data
typedef struct sp_MissionWindow {
  // TODO: Why did KSU use containers?
  sb_SW__MissionWindow_container data;  
  _Atomic seqNum_t seqNum;  

} sp_MissionWindow_t;

void init_sp_MissionWindow(sp_MissionWindow_t *port, seqNum_t *seqNum);

bool write_sp_MissionWindow(sp_MissionWindow_t *port, const sb_SW__MissionWindow_container *data, seqNum_t *seqNum);

bool read_sp_MissionWindow(sp_MissionWindow_t *port, sb_SW__MissionWindow_container *data, seqNum_t *seqNum);

#endif
