#ifndef __sb_AADL_RadioDriver_thr_Impl_types__H
#define __sb_AADL_RadioDriver_thr_Impl_types__H

#include <sb_types.h>

bool sb_trusted_ids_out_write(const union_art_DataContent * value);

bool sb_automation_request_out_enqueue(const union_art_DataContent *);

bool sb_operating_region_out_enqueue(const union_art_DataContent *);

bool sb_line_search_task_out_enqueue(const union_art_DataContent *);

#endif // __sb_AADL_RadioDriver_thr_Impl_types__H
