// This file will be regenerated, do not edit

#ifndef SB_ATTESTATIONMANAGER_IMPL_H
#define SB_ATTESTATIONMANAGER_IMPL_H

#include <sb_types.h>

bool sb_AttestationRequest_enqueue(const union_art_DataContent *);

bool sb_AttestationResponse_dequeue(union_art_DataContent *);

bool sb_TrustedIds_enqueue(const union_art_DataContent *);

#endif // SB_ATTESTATIONMANAGER_IMPL_H
