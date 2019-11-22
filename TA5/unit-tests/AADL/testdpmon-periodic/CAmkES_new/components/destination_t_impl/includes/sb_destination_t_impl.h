#ifndef __sb_AADL_destination_t_impl_types__H
#define __sb_AADL_destination_t_impl_types__H

#include "../../../includes/sb_proc_types.h"

bool sb_read_port_read(int8_t * value);
bool sb_read_port_read_isFresh(int8_t * value, bool * isFresh);

void testdpmon_destination_component_time_triggered(int64_t *);

#endif // __sb_AADL_destination_t_impl_types__H
