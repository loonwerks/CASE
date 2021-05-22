#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>
#include <sb_queue_union_art_DataContent_1.h>

#include <lmcp.h>
#include <common/conv.h>
#include "LineSearchTask.h"

// This file will not be overwritten so is safe to edit

/************************************************************
 * FORWARD DECLS
 ***********************************************************/

char* setupOutgoingEventDataPort(char* portName, int portSize, int* port_fd, int** portEmit); // convenience method

char* setupIncomingEventDataPorts(char* portName, int portSize, int* portQueue_fd);	// convenience method

void tearDownPort(char* raw_fd, int fd, int size); // convenience method


void sb_pacer_notification_wait(); // would be provided via CAmkES if native 

const char *get_instance_name(void); // would be provided via CAmkES if native

void sb_trusted_ids_1_notification_emit(); // would be provided via CAmkES if native
void sb_AutomationRequest_1_notification_emit(); // would be provided via CAmkES if native
void sb_OperatingRegion_1_notification_emit(); // would be provided via CAmkES if native
void sb_LineSearchTask_1_notification_emit(); // would be provided via CAmkES if native


// the following api_send_X methods would be provided if the RADIO slang library was linked in
void api_send_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME size_t numBits, uint8_t *byteArray);
void api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME size_t numBits, uint8_t *byteArray);
void api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME size_t numBits, uint8_t *byteArray);
void api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME size_t numBits, uint8_t *byteArray);


/************************************************************
 * VARIABLES  
 *   The *queue* versions would be provided via camkes.h for
 *   native components
 ***********************************************************/
int sb_trusted_ids_fd;
sb_queue_union_art_DataContent_1_t *sb_trusted_ids_queue_1;
int *sb_trusted_ids_emit;

int sb_AutomationRequest_fd;
sb_queue_union_art_DataContent_1_t *sb_AutomationRequest_queue_1;
int *sb_AutomationRequest_emit;

int sb_OperatingRegion_fd;
sb_queue_union_art_DataContent_1_t *sb_OperatingRegion_queue_1;
int *sb_OperatingRegion_emit;

int sb_LineSearchTask_fd;
sb_queue_union_art_DataContent_1_t *sb_LineSearchTask_queue_1;
int *sb_LineSearchTask_emit;

int sb_pacer_period_fd;
sb_queue_int8_t_1_t *sb_pacer_period_queue;
sb_queue_int8_t_1_Recv_t sb_pacer_period_recv_queue;



void pre_init(void) {
  // initialise data structures for incoming event data ports
  // sb_queue_int8_t_1_init(sb_pacer_period_queue); receiver so shouldn't init queue
  sb_queue_int8_t_1_Recv_init(&sb_pacer_period_recv_queue, sb_pacer_period_queue); // but should init its recv queue
  
  // initialise data structures for outgoing event data ports
  sb_queue_union_art_DataContent_1_init(sb_trusted_ids_queue_1);
  sb_queue_union_art_DataContent_1_init(sb_AutomationRequest_queue_1);
  sb_queue_union_art_DataContent_1_init(sb_OperatingRegion_queue_1);
  sb_queue_union_art_DataContent_1_init(sb_LineSearchTask_queue_1);
}


// TODO: use LMCP directly.  For now just send some pre-baked byte arrays

// https://github.com/loonwerks/case-ta6-experimental-platform-models/blob/master/Phase-2-UAV-Experimental-Platform-Transformed/hamr/src/c/ext-c/CASE_AttestationManager_thr_Impl_Impl/CASE_AttestationManager_thr_Impl_Impl.c#L5
// Address array in AADL model - 3 Addresses, each Address has an array of 4 8-bit ints 
U8 AMTrusted_ids[] = {0x35, 0x30, 0x30, 0x00, 
                      0x34, 0x30, 0x30, 0x00,
                      0x36, 0x30, 0x30, 0x00};
static size_t numBitsAMTrusted_ids = (int) sizeof(AMTrusted_ids) * 8;

// https://github.com/loonwerks/case-ta6-experimental-platform-models/blob/master/Phase-2-UAV-Experimental-Platform-Transformed/hamr/src/c/ext-c/RadioDriver_Attestation_thr_Impl_Impl/RadioDriver_Attestation_thr_Impl_Impl.c#L5
U8 radioOperatingRegion[] = {0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4F,0x70,0x65,0x72,0x61,0x74,0x69,0x6E,0x67,0x52,0x65,0x67,0x69,0x6F,0x6E,0x24,0x6C,0x6D,0x63,0x70,0x7C,0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4F,0x70,0x65,0x72,0x61,0x74,0x69,0x6E,0x67,0x52,0x65,0x67,0x69,0x6F,0x6E,0x7C,0x54,0x63,0x70,0x42,0x72,0x69,0x64,0x67,0x65,0x7C,0x34,0x30,0x30,0x7C,0x36,0x38,0x24,0x4C,0x4D,0x43,0x50,0x00,0x00,0x00,0x2B,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x50,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x4E,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x4F,0x00,0x00,0x03,0xE1};
static size_t numBitsOperatingRegion = (int) sizeof(radioOperatingRegion) * 8;

// https://github.com/loonwerks/case-ta6-experimental-platform-models/blob/master/Phase-2-UAV-Experimental-Platform-Transformed/hamr/src/c/ext-c/RadioDriver_Attestation_thr_Impl_Impl/RadioDriver_Attestation_thr_Impl_Impl.c#L7
U8 radioLineSearchTask[] = {0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4C,0x69,0x6E,0x65,0x53,0x65,0x61,0x72,0x63,0x68,0x54,0x61,0x73,0x6B,0x24,0x6C,0x6D,0x63,0x70,0x7C,0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4C,0x69,0x6E,0x65,0x53,0x65,0x61,0x72,0x63,0x68,0x54,0x61,0x73,0x6B,0x7C,0x54,0x63,0x70,0x42,0x72,0x69,0x64,0x67,0x65,0x7C,0x34,0x30,0x30,0x7C,0x36,0x38,0x24,0x4C,0x4D,0x43,0x50,0x00,0x00,0x0E,0x26,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE8,0x00,0x17,0x4C,0x49,0x4E,0x45,0x5F,0x57,0x61,0x74,0x65,0x72,0x77,0x61,0x79,0x5F,0x44,0x65,0x73,0x63,0x68,0x75,0x74,0x65,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x7A,0x00,0x00,0x00,0x5A,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB1,0x6B,0x64,0xBB,0x7F,0xC0,0x5E,0x40,0x88,0x67,0x79,0x20,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB2,0xD1,0x06,0x35,0x8D,0xC0,0x5E,0x40,0x78,0x33,0x09,0xF5,0xA6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xAB,0xFE,0xFC,0x16,0x85,0xC0,0x5E,0x40,0x64,0xB6,0xDD,0x71,0x8E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x9E,0xB5,0x9F,0x8C,0xCF,0xC0,0x5E,0x40,0x51,0x3E,0xED,0x62,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x92,0x8F,0x58,0x2D,0xA4,0xC0,0x5E,0x40,0x3F,0x03,0x3B,0xF9,0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x86,0x74,0x63,0x08,0xB6,0xC0,0x5E,0x40,0x31,0x3C,0x3A,0xE4,0xF9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x76,0x25,0x0F,0x8D,0x88,0xC0,0x5E,0x40,0x22,0x2A,0x2A,0xAF,0x6F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x62,0x88,0x0B,0xC6,0x02,0xC0,0x5E,0x40,0x14,0x36,0x22,0x09,0xEA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x52,0x6F,0x35,0x77,0x3D,0xC0,0x5E,0x40,0x00,0x8D,0x96,0x25,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x3D,0xDC,0x93,0xFD,0xF4,0xC0,0x5E,0x3F,0xE2,0x16,0x83,0x48,0xF4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x42,0x67,0xA8,0x6B,0xF3,0xC0,0x5E,0x3F,0xB8,0xE8,0xFF,0x79,0xB7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x56,0xBC,0x7D,0xE4,0x3C,0xC0,0x5E,0x3F,0x95,0xFB,0x90,0x01,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x82,0x4D,0xF1,0xD0,0x46,0xC0,0x5E,0x3F,0x72,0xB5,0x14,0x6B,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB0,0x0E,0xA4,0xDF,0xFF,0xC0,0x5E,0x3F,0x5D,0x76,0x74,0xF2,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x01,0x11,0x85,0x59,0x25,0xC0,0x5E,0x3F,0x47,0x97,0x63,0x50,0x5E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x26,0x69,0x2D,0xFA,0x7B,0xC0,0x5E,0x3F,0x40,0x76,0x34,0xEC,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x39,0xA6,0x09,0x86,0x16,0xC0,0x5E,0x3F,0x38,0xEB,0x79,0xDB,0xDF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x5D,0x35,0xED,0x43,0xDA,0xC0,0x5E,0x3F,0x33,0x92,0xFD,0xE7,0xF7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xAE,0x94,0x15,0x22,0x1E,0xC0,0x5E,0x3F,0x22,0xDE,0x91,0x7B,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xDA,0x66,0x64,0xDC,0xD7,0xC0,0x5E,0x3F,0x19,0x44,0x45,0x1D,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xFA,0x09,0x34,0x69,0xCD,0xC0,0x5E,0x3F,0x0E,0x9A,0x50,0xC2,0x3B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x17,0x20,0x89,0x5C,0x44,0xC0,0x5E,0x3E,0xFD,0xA1,0x73,0x6F,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x31,0x42,0x05,0x4D,0xC2,0xC0,0x5E,0x3E,0xE7,0xEA,0xA6,0x95,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x47,0xB7,0x20,0x32,0x99,0xC0,0x5E,0x3E,0xCD,0x0F,0x49,0x40,0xAF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x4D,0xCB,0xC3,0xBB,0x37,0xC0,0x5E,0x3E,0xBA,0x02,0xDC,0xE8,0x52,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x43,0x9A,0xE4,0x15,0xCA,0xC0,0x5E,0x3E,0xA8,0x51,0x07,0x70,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x2D,0xC5,0x5A,0x7C,0x51,0xC0,0x5E,0x3E,0x89,0xCB,0x2A,0x26,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x1E,0xD2,0xD0,0x33,0x00,0xC0,0x5E,0x3E,0x76,0x40,0xC3,0x27,0x6D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x10,0x63,0xE5,0x17,0x45,0xC0,0x5E,0x3E,0x59,0x3F,0x54,0xE6,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xFF,0x4F,0x91,0x66,0xDB,0xC0,0x5E,0x3E,0x48,0xC9,0x9D,0xFC,0xD9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xEB,0xA5,0xA3,0x2F,0x20,0xC0,0x5E,0x3E,0x3E,0x91,0xBD,0x46,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xD4,0x79,0xE0,0x9A,0x42,0xC0,0x5E,0x3E,0x3D,0x81,0xCA,0x08,0x45,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xC0,0x07,0xAF,0xD5,0x0F,0xC0,0x5E,0x3E,0x41,0xC0,0x0A,0x4C,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xAF,0xE3,0xCE,0xCB,0x45,0xC0,0x5E,0x3E,0x49,0x39,0xF5,0x9F,0x52,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x93,0x79,0xAF,0xE5,0x95,0xC0,0x5E,0x3E,0x4F,0xE3,0xD8,0xAD,0x97,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x74,0x7D,0x25,0xC4,0x74,0xC0,0x5E,0x3E,0x4F,0x95,0xB8,0xE1,0x83,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x4F,0x22,0x7A,0x8F,0x73,0xC0,0x5E,0x3E,0x57,0xC2,0xE7,0xDD,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x2E,0xB9,0xDD,0x5C,0xE6,0xC0,0x5E,0x3E,0x5B,0x24,0x89,0xEC,0xEB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xFA,0x6D,0xB4,0x51,0x3F,0xC0,0x5E,0x3E,0x57,0x81,0x15,0x1B,0xEB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xDA,0xE8,0x1E,0x99,0x3D,0xC0,0x5E,0x3E,0x50,0xCD,0xDE,0x84,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB3,0xC3,0x8D,0x9F,0x5F,0xC0,0x5E,0x3E,0x47,0x9D,0x23,0x64,0xBA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x8C,0x30,0x4C,0x8D,0xF9,0xC0,0x5E,0x3E,0x3A,0x18,0x14,0xE3,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x6D,0x0A,0xAB,0xA9,0x38,0xC0,0x5E,0x3E,0x27,0xA7,0xC1,0x42,0x7D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x54,0xF0,0xDA,0xC1,0x60,0xC0,0x5E,0x3E,0x09,0x0F,0x02,0x75,0xDF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x42,0xFE,0xB1,0x5E,0xA1,0xC0,0x5E,0x3D,0xE0,0x2E,0x0A,0x3F,0xA5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x42,0xF9,0x1F,0x6A,0x86,0xC0,0x5E,0x3D,0xA2,0x76,0x84,0x66,0xB1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x5A,0x3C,0x87,0xD2,0x6D,0xC0,0x5E,0x3D,0x77,0x17,0x4A,0x1D,0x8A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x7B,0xE2,0xA6,0x35,0xD7,0xC0,0x5E,0x3D,0x58,0x93,0x86,0x77,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xA3,0x92,0x60,0xDA,0x64,0xC0,0x5E,0x3D,0x3C,0x42,0x5B,0xDF,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xD8,0x4A,0xE6,0xB6,0x1F,0xC0,0x5E,0x3D,0x32,0x3D,0x81,0x89,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x0B,0x64,0x25,0xBE,0x9D,0xC0,0x5E,0x3D,0x2C,0x04,0x7A,0xA8,0xDE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x31,0x11,0x42,0x8B,0x18,0xC0,0x5E,0x3D,0x2B,0x47,0x6B,0x06,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x56,0x09,0xCB,0x7D,0xFF,0xC0,0x5E,0x3D,0x1E,0x8E,0xB1,0x7D,0x95,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x7D,0x3E,0xF7,0x8B,0x82,0xC0,0x5E,0x3D,0x13,0xAA,0x69,0xB3,0xA4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xA4,0x23,0xF5,0x57,0x32,0xC0,0x5E,0x3D,0x07,0x18,0xC3,0x27,0xE6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xBC,0x40,0x6C,0x20,0x3B,0xC0,0x5E,0x3C,0xFA,0xC6,0x34,0x0C,0xB1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xD7,0xF9,0xD5,0x7E,0x22,0xC0,0x5E,0x3C,0xE9,0x19,0x33,0x6B,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x0A,0x76,0x43,0x01,0x99,0xC0,0x5E,0x3C,0xC9,0x6B,0xB0,0x65,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x32,0xB9,0x0B,0x50,0x33,0xC0,0x5E,0x3C,0xB5,0xD9,0x2B,0xA2,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x5C,0xAE,0xCC,0xFE,0xE6,0xC0,0x5E,0x3C,0xA1,0xCD,0xC9,0x12,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x8A,0x8F,0x95,0xA4,0x18,0xC0,0x5E,0x3C,0x8F,0x58,0xE2,0x8B,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0xA8,0xE4,0xC3,0x97,0x4F,0xC0,0x5E,0x3C,0x89,0x2D,0x04,0xDD,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0xF3,0x9A,0xC0,0x8E,0x55,0xC0,0x5E,0x3C,0x86,0xE1,0xAA,0xC1,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x37,0xC7,0xCF,0xB8,0xB5,0xC0,0x5E,0x3C,0x8C,0x33,0xB1,0xB5,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x62,0xD0,0xA9,0x7E,0x96,0xC0,0x5E,0x3C,0x90,0xE4,0x59,0x14,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x74,0x7E,0x2F,0x4C,0xDF,0xC0,0x5E,0x3C,0x9F,0x6C,0xFF,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x89,0x3E,0x8B,0x37,0xD3,0xC0,0x5E,0x3C,0xC7,0x51,0xD8,0x2A,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xAC,0x97,0x19,0xB9,0x30,0xC0,0x5E,0x3D,0x09,0x7B,0x80,0x3D,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xC9,0xA1,0x2C,0xB9,0xFC,0xC0,0x5E,0x3D,0x1E,0x4C,0x2F,0x4B,0xD2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xF0,0xB0,0xEC,0xFC,0x4F,0xC0,0x5E,0x3D,0x22,0x42,0x50,0xFF,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x12,0xFC,0x08,0xA7,0xF4,0xC0,0x5E,0x3D,0x15,0xD1,0x75,0x04,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x2D,0x2A,0x4F,0x09,0x61,0xC0,0x5E,0x3D,0x07,0xF3,0xB2,0x37,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x38,0x4C,0x5A,0xCC,0x59,0xC0,0x5E,0x3C,0xF7,0x3E,0xCF,0x84,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x3B,0xC9,0x4A,0xE6,0x6A,0xC0,0x5E,0x3C,0xDB,0x34,0x3B,0x39,0xDD,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x37,0x5A,0xD6,0x75,0x1A,0xC0,0x5E,0x3C,0xC1,0x76,0x08,0x0F,0x4B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x25,0x80,0x82,0xE6,0xE2,0xC0,0x5E,0x3C,0x9C,0x63,0x24,0x63,0xD3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xF6,0xA6,0x11,0x3E,0xAA,0xC0,0x5E,0x3C,0x75,0xCC,0x9F,0x77,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xDB,0x61,0x75,0x43,0x85,0xC0,0x5E,0x3C,0x5C,0x1D,0xB9,0x41,0x59,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xB3,0x80,0x8A,0x69,0x67,0xC0,0x5E,0x3C,0x34,0xF5,0xA7,0x5B,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x66,0xB9,0x62,0x5E,0x39,0xC0,0x5E,0x3B,0xF6,0xF0,0x11,0x7F,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x5A,0x39,0x63,0x99,0xCE,0xC0,0x5E,0x3B,0xEE,0xCB,0x59,0x5B,0x5A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x5F,0x16,0xE3,0x49,0xA8,0xC0,0x5E,0x3B,0xDA,0xD9,0x53,0xE8,0x9E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x70,0xF3,0x52,0x6A,0x23,0xC0,0x5E,0x3B,0xBD,0x66,0xF3,0x23,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x92,0x3B,0xD0,0x29,0x1F,0xC0,0x5E,0x3B,0xAD,0x35,0x9A,0xBA,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xCC,0xA8,0x68,0x50,0x3E,0xC0,0x5E,0x3B,0xA8,0x50,0xEA,0x66,0xA3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xEF,0x3F,0x95,0xAA,0x77,0xC0,0x5E,0x3B,0xAB,0x5F,0x64,0x6D,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x1C,0xD2,0xB7,0x0A,0x6E,0xC0,0x5E,0x3B,0xAC,0x71,0x95,0x75,0x91,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x4B,0x3E,0x3B,0xE0,0x79,0xC0,0x5E,0x3B,0xB9,0x9E,0xCC,0x78,0xB6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x7A,0xE8,0x86,0x2B,0xD4,0xC0,0x5E,0x3B,0xDB,0xBA,0xC7,0xA5,0xE7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0xAC,0xBC,0x22,0xA2,0xA4,0xC0,0x5E,0x3C,0x04,0x4C,0x0D,0x9F,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x03,0x42,0x0C,0x00,0x00,0xC2,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x2E,0x25};
static size_t numBitsLineSearchTask = (int) sizeof(radioLineSearchTask) * 8;

// https://github.com/loonwerks/case-ta6-experimental-platform-models/blob/master/Phase-2-UAV-Experimental-Platform-Transformed/hamr/src/c/ext-c/RadioDriver_Attestation_thr_Impl_Impl/RadioDriver_Attestation_thr_Impl_Impl.c#L9
U8 radioAutomationRequest[] = {0x61, 0x66, 0x72, 0x6C, 0x2E, 0x63, 0x6D, 0x61, 0x73, 0x69, 0x2E, 0x41, 0x75, 0x74, 0x6F, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x24, 0x6C, 0x6D, 0x63, 0x70, 0x7C, 0x61, 0x66, 0x72, 0x6C, 0x2E, 0x63, 0x6D, 0x61, 0x73, 0x69, 0x2E, 0x41, 0x75, 0x74, 0x6F, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x7C, 0x54, 0x63, 0x70, 0x42, 0x72, 0x69, 0x64, 0x67, 0x65, 0x7C, 0x34, 0x30, 0x30, 0x7C, 0x36, 0x38, 0x24, 0x4C, 0x4D, 0x43, 0x50, 0x00, 0x00, 0x00, 0x2E, 0x01, 0x43, 0x4D, 0x41, 0x53, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x90, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x50, 0x00, 0x00, 0x00, 0x04, 0xC2};
static size_t numBitsAutomationRequest = (int) sizeof(radioAutomationRequest) * 8;

void print_msgs() {
  // TODO: no LMCP defs for trusted_ids, OperatingRegion, AutomationRequest 
  
  LineSearchTask *lineSearchTask = NULL;
  lmcp_init_LineSearchTask(&lineSearchTask);

  if (lineSearchTask != NULL) {
    uint8_t *payload = radioLineSearchTask;
    int msg_result = lmcp_process_msg(&payload, numBitsLineSearchTask, (lmcp_object**)&lineSearchTask);

    if (msg_result == 0) {
       printf("Valid LineSearchTask: %i %s\n", lineSearchTask->super.super.taskid, lineSearchTask->super.super.label);
     } else {
       printf("Invalid LineSearchTask byte-stream\n");
     }
     lmcp_free_LineSearchTask(lineSearchTask, 1);
  } else {
    printf("Line Search Task init was null\n");
  }
}

int run() {

  printf("Hello from %s's run method\n", get_instance_name());
  
  print_msgs();
  
  for(;;) {
    sb_pacer_notification_wait();
    {
      // printf("Hello from %s's run loop\n", get_instance_name());
      
      api_send_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF
        numBitsAMTrusted_ids, AMTrusted_ids);
      
      api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF 
        numBitsAutomationRequest, radioAutomationRequest);
        
      api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF
        numBitsOperatingRegion, radioOperatingRegion);
      
      api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF
        numBitsLineSearchTask, radioLineSearchTask); 
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {
  printf("VM App %s started\n", get_instance_name());
  
  char* defaults[] = {get_instance_name(), "/dev/uio0", "262144", 
                                           "/dev/uio1", "262144", 
                                           "/dev/uio2", "262144", 
                                           "/dev/uio3", "262144",
                                           "/dev/uio4", "4096"};
  
  char** myargs = defaults;
  
  if (argc > 1) { // use cli args instead
    myargs = argv;   
    if (argc != 11) {
      char* t =   "<fd of sb_trusted_ids_queue_1> <size of sb_trusted_ids_queue_1>";
      char* ar =  "<fd of sb_AutomationRequest_queue_1> <size of sb_AutomationRequest_queue_1>";
      char* or =  "<fd of sb_OperatingRegion_queue_1> <size of sb_OperatingRegion_queue_1>";
      char* lst = "<fd of sb_LineSearchTask_queue_1> <size of sb_LineSearchTask_queue_1>";
      char* p =   "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
    
      printf("Usage:\n	%s\n	%s\n	%s\n	%s\n	%s\n\n", t, ar, or, lst, p);
      return 1;
    }
  }
  
  int arg = 1;
  char* raw_trusted_ids = setupOutgoingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
    &sb_trusted_ids_fd, &sb_trusted_ids_emit);
  sb_trusted_ids_queue_1 = (sb_queue_union_art_DataContent_1_t*) raw_trusted_ids; 
  
  char* raw_AutomationRequest = setupOutgoingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
    &sb_AutomationRequest_fd, &sb_AutomationRequest_emit);
  sb_AutomationRequest_queue_1 = (sb_queue_union_art_DataContent_1_t*) raw_AutomationRequest;
  
  char* raw_OperatingRegion = setupOutgoingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
    &sb_OperatingRegion_fd, &sb_OperatingRegion_emit);
  sb_OperatingRegion_queue_1 = (sb_queue_union_art_DataContent_1_t*) raw_OperatingRegion;
  
  char* raw_LineSearchTask = setupOutgoingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
    &sb_LineSearchTask_fd, &sb_LineSearchTask_emit);
  sb_LineSearchTask_queue_1 = (sb_queue_union_art_DataContent_1_t*) raw_LineSearchTask;
  
  char* raw_pacer_period = setupIncomingEventDataPorts(myargs[arg++], atoi(myargs[arg++]),
    &sb_pacer_period_fd);
  sb_pacer_period_queue = (sb_queue_int8_t_1_t *) raw_pacer_period;

  if(sb_trusted_ids_queue_1 == NULL || sb_AutomationRequest_queue_1 == NULL || sb_OperatingRegion_queue_1 == NULL ||
     sb_LineSearchTask_queue_1 == NULL || sb_pacer_period_queue == NULL) {
     
     printf("Something went wrong while setting up the ports, bailing out\n");
     
  } else {
  
    // TODO: can't rely on c struct init here
    sb_trusted_ids_queue_1->numSent = 0;
    sb_AutomationRequest_queue_1->numSent = 0;
    sb_OperatingRegion_queue_1->numSent = 0;
    sb_LineSearchTask_queue_1->numSent = 0;

    pre_init();
    
    run();
  }
  
  tearDownPort(raw_trusted_ids, sb_trusted_ids_fd, atoi(myargs[2]));
  tearDownPort(raw_AutomationRequest, sb_AutomationRequest_fd, atoi(myargs[4]));
  tearDownPort(raw_OperatingRegion, sb_OperatingRegion_fd, atoi(myargs[6]));
  tearDownPort(raw_LineSearchTask, sb_LineSearchTask_fd, atoi(myargs[8]));
  tearDownPort(raw_pacer_period, sb_pacer_period_fd, atoi(myargs[10]));
  
  return 0;
}

void tearDownPort(char* raw_fd, int fd, int size) {
  munmap(raw_fd, size);
  close(fd);
}

char* setupIncomingEventDataPorts(
  char* portName,
  int portSize,
  int* portQueue_fd) {

  printf("Setting up incoming event data port %s with size %i\n", portName, portSize);

  assert(portSize > 0);

  *portQueue_fd = open(portName, O_RDWR);
  assert(*portQueue_fd >= 0);

  char *raw_port_queue;
  if ((raw_port_queue = mmap(NULL, 
                             portSize, 
                             PROT_READ | PROT_WRITE, MAP_SHARED, 
                             *portQueue_fd, 
                             1 * getpagesize())) == (void *) -1) {
    printf("mmap %s failed\n", portName);
    close(*portQueue_fd);
    return NULL;
  }

  printf("Successfully setup incoming event data port %s\n", portName);
    
  return raw_port_queue;
}

char* setupOutgoingEventDataPort(
  char* portName, 
  int portSize,
  int* port_fd,
  int** portEmit) {

  printf("Setting up outgoing event data port %s %i\n", portName, portSize);
  assert(portSize > 0);
 
  *port_fd = open(portName, O_RDWR);
  assert(*port_fd >= 0);

  char *raw_port_queue;
  if ((raw_port_queue = mmap(NULL, 
                       portSize, 
                       PROT_READ | PROT_WRITE, 
                       MAP_SHARED, 
                       *port_fd, 
                       1 * getpagesize())) == (void *) -1) {
    printf("mmap %s failed\n", portName);
    close(*port_fd);
    return NULL;
  }

  char *emit;
  if ((emit = mmap(NULL, 
                   0x1000, 
                   PROT_READ | PROT_WRITE, 
                   MAP_SHARED, 
                   *port_fd, 
                   0 * getpagesize())) == (void *) -1) {
    printf("mmap emit failed for %s\n", portName);
    close(*port_fd);
    return NULL;
  }
  
  *portEmit = (int*) emit;
  
  printf("Successfully setup %s\n", portName);
  
  return raw_port_queue;
}

// replicate the behavior of a native seL4 version of pacer wait
void sb_pacer_notification_wait() {
  sb_event_counter_t numDropped = 0;
  int8_t data;
    
  while (!sb_queue_int8_t_1_dequeue(&sb_pacer_period_recv_queue, &numDropped, &data)) {
    int val;
    	
    /* Blocking read */
    int result = read(sb_pacer_period_fd, &val, sizeof(val));
    if (result < 0) {
      printf("Error reading period. %i\n", result);
      //return -1;
    }
  }
  // printf("read %i -- numDropped %i\n", data, numDropped);
}


// camkes.h would have provided this method
const char *get_instance_name(void) {
    static const char name[] = "vmRADIO";
    return name;
}


/********************************************************************************
 * replicate the behavior of a native seL4 versions of outgoing event data 
 * notification emit methods
 ********************************************************************************/
void sb_trusted_ids_1_notification_emit() { sb_AutomationRequest_emit[0] = 1; }
void sb_AutomationRequest_1_notification_emit() { sb_AutomationRequest_emit[0] = 1; }
void sb_OperatingRegion_1_notification_emit() { sb_AutomationRequest_emit[0] = 1; }
void sb_LineSearchTask_1_notification_emit() { sb_AutomationRequest_emit[0] = 1; }
/********************************************************************************
 * END emit methods
 ********************************************************************************/
 
 
/********************************************************************************
 * seL4 enqueue methods
 * the following are direct copies of the seL4 enqueue methods HAMR would generate
 * for a native component's outgoing event data ports 
 ********************************************************************************/
bool sb_trusted_ids_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_trusted_ids_queue_1, (union_art_DataContent*) data);
  sb_trusted_ids_1_notification_emit();

  return true;
}

bool sb_AutomationRequest_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AutomationRequest_queue_1, (union_art_DataContent*) data);
  sb_AutomationRequest_1_notification_emit();

  return true;
}

bool sb_OperatingRegion_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_OperatingRegion_queue_1, (union_art_DataContent*) data);
  sb_OperatingRegion_1_notification_emit();

  return true;
}

bool sb_LineSearchTask_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_LineSearchTask_queue_1, (union_art_DataContent*) data);
  sb_LineSearchTask_1_notification_emit();

  return true;
}
/********************************************************************************
 * END CAmkES enqueue methods
 ********************************************************************************/


/** this is the guts of one of the hamr generated RADIO api_send... methods which wraps 
 *  a byte array into a payload struct.  Separating it out so that it can be reused for the
 *  other outgoing send methods */
void populatePayload(
  size_t numBits,
  uint8_t *byteArray,
  hamr_Base_Types_Bits_Payload payload // note hamr_Base_Types_Bits_Payload is typedef'ed as a pointer to a 'struct hamr_Base_Types_Payload' 
  ){ 
  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  // NOTE:
  // when using the wire-protocol (i.e. byte-arrays) HAMR passes around the Slang type
  //  
  //    @datatype class Bits_Payload(value: ISZ[B]) extends art.DataContent
  // 
  // The fingerprint for ISZ[B] is IS_C4575 (e.g. ISZ[String] yields a different fingerprint).
  
  // declare a new IS_C4F575 on the stack
  DeclNewIS_C4F575(t_0);

  // IS (immutable sequences) have two fields; size and value -- value is an U8 array
  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // FIXME: using the apply method causes a linking error related to missing
  //        fmod, fmodl methods (muslc related?) coming from Slang F32/F64 methods.
  //        So instead just do what the apply method does directly.
  //        i.e. uses Type_assign to copy the IS into the bits payload value field
  // hamr_Base_Types_Bits_Payload_apply(SF payload, (IS_C4F575) &t_0);
  
  Type_assign(&payload->value, &t_0, sizeof(struct IS_C4F575));
}


/**********************************************************************
 * the following api_send_X method are adapted from the non-vm versions
 * of radio's slang-embedded c-api's
 **********************************************************************/
void api_send_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  size_t numBits, uint8_t *byteArray){
  DeclNewhamr_Base_Types_Bits_Payload(payload);
  populatePayload(SF numBits, byteArray, &payload);
  sb_trusted_ids_enqueue(&payload);
}

void api_send_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  size_t numBits, uint8_t *byteArray) {
  DeclNewhamr_Base_Types_Bits_Payload(payload);  
  populatePayload(SF numBits, byteArray, &payload);
  sb_AutomationRequest_enqueue(&payload);
}

void api_send_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  size_t numBits, uint8_t *byteArray){
  DeclNewhamr_Base_Types_Bits_Payload(payload);
  populatePayload(SF numBits, byteArray, &payload);
  sb_OperatingRegion_enqueue(&payload);
}

void api_send_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  size_t numBits, uint8_t *byteArray){
  DeclNewhamr_Base_Types_Bits_Payload(payload);
  populatePayload(SF numBits, byteArray, &payload);
  sb_LineSearchTask_enqueue(&payload);
}
