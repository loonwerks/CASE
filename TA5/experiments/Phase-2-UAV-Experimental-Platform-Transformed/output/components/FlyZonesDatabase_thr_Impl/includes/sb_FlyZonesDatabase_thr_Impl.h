#ifndef __sb_AADL_FlyZonesDatabase_thr_Impl_types__H
#define __sb_AADL_FlyZonesDatabase_thr_Impl_types__H

#include <sb_PROC_HW_types.h>

bool sb_keep_in_zones_write(const CMASI__Polygon_i * sb_keep_in_zones);

bool sb_keep_out_zones_write(const CMASI__Polygon_i * sb_keep_out_zones);

void initialize_fzdb(const int64_t *arg);

#endif // __sb_AADL_FlyZonesDatabase_thr_Impl_types__H
