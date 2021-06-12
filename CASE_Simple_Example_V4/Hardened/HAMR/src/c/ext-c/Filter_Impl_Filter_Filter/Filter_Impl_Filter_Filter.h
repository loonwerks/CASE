#ifndef FILTER_IMPL_FILTER_FILTER_H
#define FILTER_IMPL_FILTER_FILTER_H

#include <all.h>

Unit HAMR_SW_Filter_Impl_Filter_Filter_initialise_(STACK_FRAME_ONLY);

Unit HAMR_SW_Filter_Impl_Filter_Filter_finalise_(STACK_FRAME_ONLY);

Unit HAMR_SW_Filter_Impl_Filter_Filter_handle_Input_(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

#endif
