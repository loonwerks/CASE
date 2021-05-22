#include <UxAS_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
#define OperatingRegionMaxSizeBits 2048
U8 OperatingRegion[OperatingRegionMaxSizeBits / sizeof(U8)];

#define AutomationRequestMaxSizeBits 2048
U8 AutomationRequest[AutomationRequestMaxSizeBits / sizeof(U8)];

#define LineSearchTaskMaxSizeBits 65536
U8 LineSearchTask[LineSearchTaskMaxSizeBits / sizeof(U8)];

Unit hamr_SysContext_UxAS_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_SysContext_UxAS_thr_Impl_Impl this) {
}

Unit hamr_SysContext_UxAS_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_SysContext_UxAS_thr_Impl_Impl this) {
  // example finalise method
}

Unit hamr_SysContext_UxAS_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_SysContext_UxAS_thr_Impl_Impl this) {
    Z numBitsOperatingRegion = 0;
    B event_OperatingRegion = api_get_OperatingRegion__alt__hamr_SysContext_UxAS_thr_Impl_Impl(this, &numBitsOperatingRegion, OperatingRegion);

    Z numBitsAutomationRequest = 0;
    B event_AutomationRequest = api_get_AutomationRequest__alt__hamr_SysContext_UxAS_thr_Impl_Impl(this, &numBitsAutomationRequest, AutomationRequest);

    Z numBitsLineSearchTask = 0;
    B event_LineSearchTask = api_get_LineSearchTask__alt__hamr_SysContext_UxAS_thr_Impl_Impl(this, &numBitsLineSearchTask, LineSearchTask);

    DeclNewString(_msg);
    String msg = (String)&_msg;

    if (event_OperatingRegion) {
        String__append(msg, string("\n\tOperating Region (" ));
        Z_string_(msg, numBitsOperatingRegion / 8);
        String__append(msg, string(" bytes)"));
    }

    if (event_AutomationRequest) {
        String__append(msg, string("\n\tAutomation Request (" ));
        Z_string_(msg, numBitsAutomationRequest / 8);
        String__append(msg, string(" bytes)"));
    }

    if (event_LineSearchTask) {
        String__append(msg, string("\n\tLine Search Task (" ));
        Z_string_(msg, numBitsLineSearchTask / 8);
        String__append(msg, string(" bytes)"));
    }

    if (event_OperatingRegion || event_AutomationRequest || event_LineSearchTask) {
      api_logInfo__hamr_SysContext_UxAS_thr_Impl_Impl(this, msg);
    }
}
