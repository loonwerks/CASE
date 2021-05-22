#include <CASE_AttestationGate_thr_Impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit
#define OperatingRegion_inMaxSizeBits 2048
U8 OperatingRegion_in[OperatingRegion_inMaxSizeBits / sizeof(U8)];

#define AutomationRequest_inMaxSizeBits 2048
U8 AutomationRequest_in[AutomationRequest_inMaxSizeBits / sizeof(U8)];

#define LineSearchTask_inMaxSizeBits 65536
U8 LineSearchTask_in[LineSearchTask_inMaxSizeBits / sizeof(U8)];

Unit hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl_initialise_(
  STACK_FRAME
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this) {
}

Unit hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl_finalise_(
  STACK_FRAME
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this) {
  // example finalise method
}

Unit hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl this) {
    Z numBitsOperatingRegion = 0;
    B event_OperatingRegion = api_get_OperatingRegion_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBitsOperatingRegion, OperatingRegion_in);

    Z numBitsAutomationRequest = 0;
    B event_AutomationRequest = api_get_AutomationRequest_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBitsAutomationRequest, AutomationRequest_in);

    Z numBitsLineSearchTask = 0;
    B event_LineSearchTask = api_get_LineSearchTask_in__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, &numBitsLineSearchTask, LineSearchTask_in);

    if (event_OperatingRegion) {
        api_send_OperatingRegion_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, numBitsOperatingRegion, OperatingRegion_in);
    }

    if (event_AutomationRequest) {
        api_send_AutomationRequest_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, numBitsAutomationRequest, AutomationRequest_in);
    }

    if (event_LineSearchTask) {
        api_send_LineSearchTask_out__alt__hamr_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_Impl(this, numBitsLineSearchTask, LineSearchTask_in);
    }
}
