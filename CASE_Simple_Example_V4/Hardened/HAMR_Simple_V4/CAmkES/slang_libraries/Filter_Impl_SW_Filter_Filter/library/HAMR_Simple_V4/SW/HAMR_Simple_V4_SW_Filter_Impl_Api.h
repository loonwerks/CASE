#ifndef SIREUM_H_HAMR_Simple_V4_SW_Filter_Impl_Api
#define SIREUM_H_HAMR_Simple_V4_SW_Filter_Impl_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_logInfo_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api this, String msg);

Unit HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_logDebug_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api this, String msg);

Unit HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_logError_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api this, String msg);

Unit HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_logInfo_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Operational_Api this, String msg);

Unit HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_logDebug_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Operational_Api this, String msg);

Unit HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_logError_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Operational_Api this, String msg);

Unit HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_put_Output_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api this, IS_C4F575 value);

Unit HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_put_Output_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Operational_Api this, IS_C4F575 value);

#ifdef __cplusplus
}
#endif

#endif