// This file will be regenerated, do not edit

#ifndef SB_CASE_ATTESTATIONGATE_THR_IMPL_H
#define SB_CASE_ATTESTATIONGATE_THR_IMPL_H

#include <sb_types.h>

bool sb_trusted_ids_read(union_art_DataContent * value);

bool sb_AutomationRequest_in_dequeue(union_art_DataContent *);

bool sb_AutomationRequest_out_enqueue(const union_art_DataContent *);

bool sb_OperatingRegion_in_dequeue(union_art_DataContent *);

bool sb_OperatingRegion_out_enqueue(const union_art_DataContent *);

bool sb_LineSearchTask_in_dequeue(union_art_DataContent *);

bool sb_LineSearchTask_out_enqueue(const union_art_DataContent *);

#endif // SB_CASE_ATTESTATIONGATE_THR_IMPL_H
