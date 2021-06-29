#ifndef SIREUM_TYPE_H_HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api
#define SIREUM_TYPE_H_HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api

typedef struct HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api *HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api;
struct HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api {
  TYPE type;
  Z id;
  Z MissionCommand_in_Id;
  Z MissionCommand_out_Id;
  Z TrustedIds_Id;
};

#define DeclNewHAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api(x) struct HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api x = { .type = THAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api }

#ifdef __cplusplus
}
#endif

#endif