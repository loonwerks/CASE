#ifndef EXT_H
#define EXT_H

// This file will not be overwritten so is safe to edit

#include <all.h>

// bit-codec size for HAMR_Data_Types_AttestationRequestMsg_Impl
#define numBits_HAMR_Data_Types_AttestationRequestMsg_Impl 128
#define numBytes_HAMR_Data_Types_AttestationRequestMsg_Impl ((numBits_HAMR_Data_Types_AttestationRequestMsg_Impl - 1) / 8 + 1)

// bit-codec size for HAMR_Data_Types_AttestationResponseMsg_Impl
#define numBits_HAMR_Data_Types_AttestationResponseMsg_Impl 16384
#define numBytes_HAMR_Data_Types_AttestationResponseMsg_Impl ((numBits_HAMR_Data_Types_AttestationResponseMsg_Impl - 1) / 8 + 1)

void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes);

void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes);

void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes);

// bit-codec size for HAMR_Data_Types_RF_Msg_Impl
#define numBits_HAMR_Data_Types_RF_Msg_Impl 256
#define numBytes_HAMR_Data_Types_RF_Msg_Impl ((numBits_HAMR_Data_Types_RF_Msg_Impl - 1) / 8 + 1)

// bit-codec size for HAMR_Data_Types_Mission
#define numBits_HAMR_Data_Types_Mission 288
#define numBytes_HAMR_Data_Types_Mission ((numBits_HAMR_Data_Types_Mission - 1) / 8 + 1)

// bit-codec size for HAMR_Data_Types_AllowList_Impl
#define numBits_HAMR_Data_Types_AllowList_Impl 128
#define numBytes_HAMR_Data_Types_AllowList_Impl ((numBits_HAMR_Data_Types_AllowList_Impl - 1) / 8 + 1)

typedef struct {
	float latitude;
	float longitude;
	float altitude;
} Coordinate;

#define num_coord 2

typedef struct {
	Coordinate coord[num_coord];
} Map;

typedef struct {
	Map map;
} Command;

typedef struct {
	Coordinate waypoint[2];
} MissionCommand;

#define num_mission_waypoints 3
typedef struct {
	Coordinate waypoint[num_mission_waypoints];
} Mission;

typedef struct {
	unsigned src;
	unsigned dst;
} MsgHeader;

typedef struct {
	MsgHeader header;
	Command payload;
} RFMsg;

#define AttestationRequestMsg char[16];
#define AttestationResponseMsg char[2048];

void print_Coordinate(const Coordinate* const bytes);
void print_Map(const Map* const bytes);
void print_Command(const Command* const bytes);
void print_MsgHeader(const MsgHeader* const bytes);
void print_RFMsg(const RFMsg* const bytes);
void print_Mission(const Mission* const bytes);
void print_AttestationRequestMsg(const char* const bytes);
void print_AttestationResponseMsg(const char* const bytes);

uint8_t* getRadioOutput();
uint8_t isTrusted(uint8_t* msg, uint8_t* ids);
uint8_t isBounded(uint8_t* msg);
uint8_t* getFlightPlannerOutput(uint8_t* msg);
uint8_t getMonitorAlertOutput(uint8_t* msg);

#endif
