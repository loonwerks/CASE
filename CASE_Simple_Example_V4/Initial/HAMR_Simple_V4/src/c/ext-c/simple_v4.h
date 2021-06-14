#ifndef SIMPLE_V4_H
#define SIMPLE_V4_h

// ************************************
//  Assuming all data is little-endian
// ************************************

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

#endif
