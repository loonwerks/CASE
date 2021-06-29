// This file will be regenerated, do not edit

#ifndef SB_RADIODRIVER_ATTESTATION_IMPL_H
#define SB_RADIODRIVER_ATTESTATION_IMPL_H

#include <sb_types.h>

bool sb_MissionCommand_enqueue(const union_art_DataContent *);

bool sb_AttestationRequest_dequeue(union_art_DataContent *);

bool sb_AttestationResponse_enqueue(const union_art_DataContent *);

bool sb_AttestationTesterResponse_dequeue(union_art_DataContent *);

bool sb_AttestationTesterRequest_enqueue(const union_art_DataContent *);

#endif // SB_RADIODRIVER_ATTESTATION_IMPL_H
