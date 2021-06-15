#include <stdio.h>
#include "hardened_v4.h"

// ADD THE BELOW TO ext.c

// ************************************
//  Assuming all data is little-endian
// ************************************


void print_Coordinate(const Coordinate* const bytes) {
	printf("(lat: %f, long: %f, alt: %f)", bytes->latitude, bytes->longitude, bytes->altitude);
}

void print_Map(const Map* const bytes) {
	printf("Map: \n\t{\n ");
	for (int i = 0; i < num_coord; i++) {
		printf("\t\t");
		print_Coordinate(&(bytes->coord[i]));
		printf("\n");
	}
	printf("\t}\n");
}

void print_Command(const Command* const bytes) {
	print_Map(&(bytes->map));
}

void print_MsgHeader(const MsgHeader* const bytes) {
	printf("MessageHeader: { src: %u, dst: %u }\n", bytes->src, bytes->dst);
}

void print_RFMsg(const RFMsg* const bytes) {
	print_MsgHeader(&(bytes->header));
	print_Command(&(bytes->payload));
}

void print_Mission(const Mission* const bytes) {
	printf("Mission Waypoints: \n\t{\n");
	for (int i = 0; i < num_mission_waypoints; i++) {
		printf("\t\t");
		print_Coordinate(&(bytes->waypoint[i]));
		printf("\n");
	}
	printf("\t}\n");
}

void print_AttestationRequestMsg(const char* const bytes) {
	printf("AttestationRequestMsg: ");
	for (int i = 0; i < 16; i++) {
		printf("%02x", bytes[i]);
	}
}

void print_AttestationResponseMsg(const char* const bytes) {
	printf("AttestationResponseMsg: ");
	for (int i = 0; i < 2048; i++) {
		printf("%02x", bytes[i]);
	}
}

/*****************************************************************************/
/*                       RadioDriver_Attestation                             */
/*****************************************************************************/
const Coordinate startingCoordinate = {-121.0083254511704,45.31010191362929,1000.0};
const Coordinate endingCoordinate = {-120.9377622731235,45.34120895091226,1000.0};
const Coordinate badCoordinate = {-181.0,91.0};

const Map goodMap = {{startingCoordinate,endingCoordinate}};
const Map badMap = {{badCoordinate, endingCoordinate}};

const Command goodCmd = {goodMap};
const Command badCmd = {badMap};

const MsgHeader goodHeader = {1,0};
const MsgHeader badHeader = {2,2};

const RFMsg  goodHeaderGoodCmd = {goodHeader, goodCmd};
const RFMsg  goodHeaderBadCmd = {goodHeader, badCmd};
const RFMsg  badHeaderBadCmd = {badHeader, badCmd};

uint8_t* getRadioOutput() {
  static int i = 0;
  uint8_t* output = NULL;

  if (i == 11) {
    output = (uint8_t *)(&badHeaderBadCmd);
  } else if (i == 12) {
    output = (uint8_t *)(&goodHeaderBadCmd);
  } else if (i >= 13) {
    output = (uint8_t*)(&goodHeaderGoodCmd);
  }

  if (i < 13) {
    ++i;
  }

  return output;
}
