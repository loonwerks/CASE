// This file will be regenerated, do not edit

#ifndef SB_CASE_MONITOR_GEO_THR_IMPL_H
#define SB_CASE_MONITOR_GEO_THR_IMPL_H

#include <sb_types.h>

bool sb_keep_in_zones_read(union_art_DataContent * value);

bool sb_keep_out_zones_read(union_art_DataContent * value);

bool sb_observed_dequeue(union_art_DataContent *);

bool sb_output_enqueue(const union_art_DataContent *);

bool sb_alert_enqueue(void);

#endif // SB_CASE_MONITOR_GEO_THR_IMPL_H
