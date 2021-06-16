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
const Coordinate startingCoordinate = {45.31010191362929, -121.0083254511704,1000.0};
const Coordinate endingCoordinate = {45.34120895091226, -120.9377622731235, 1000.0};
const Coordinate badCoordinate = {-91.0,181.0, 999.0};

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
    i = 10;
  }

  if (i < 13) {
    ++i;
  }

  return output;
}

/*****************************************************************************/
/*                             AttestationGate                               */
/*****************************************************************************/
uint8_t isTrusted(uint8_t* msg, uint8_t* ids) {
	uint32_t* trustedIDs = (uint32_t *)ids;
	uint32_t id = ((RFMsg *)msg)->header.src; 
	return    id == trustedIDs[0] 
	       || id == trustedIDs[1]
				 || id == trustedIDs[2]
				 || id == trustedIDs[3];
}

/*****************************************************************************/
/*                                 Filter                                    */
/*****************************************************************************/
uint8_t isBoundedWaypoint(Coordinate c) {
	return    c.latitude >= -90.0 && c.latitude <= 90 
	       && c.longitude >= -180.0 && c.longitude <= 180
				 && c.altitude >= 1000 && c.altitude <= 1500;
	    
}

uint8_t isBounded(uint8_t* msg) {
	Coordinate *ll = &(((RFMsg *)msg)->payload.map.coord[0]);
	Coordinate *ur = &(((RFMsg *)msg)->payload.map.coord[1]);
	return isBoundedWaypoint(*ll) && isBoundedWaypoint(*ur);
}

/*****************************************************************************/
/*                               FlightPlanner                               */
/*****************************************************************************/
const Coordinate badIntermediate = {45.3507453, -120.9728625, 10000.0};
const Coordinate goodIntermediate = {45.31512567936078,-120.9549900754267,1000.0};
Mission mission;

void copyCoordinate(Coordinate src, Coordinate *dst) {
	dst->latitude = src.latitude;
	dst->longitude = src.longitude;
	dst->altitude = src.altitude;
}

uint8_t* getFlightPlannerOutput(uint8_t* msg) {
	static int i = 0;
	Coordinate *ll = &(((RFMsg *)msg)->payload.map.coord[0]);
	Coordinate *ur = &(((RFMsg *)msg)->payload.map.coord[1]);
	uint8_t* output = NULL;

	copyCoordinate(*ll, mission.waypoint);
	if (i == 0) {
		copyCoordinate(badIntermediate, mission.waypoint + 1);
		i = 1;
	} else {
		copyCoordinate(goodIntermediate, mission.waypoint + 1);
		i = 0;
	}
	copyCoordinate(*ur, mission.waypoint + 2);
	
	output = (uint8_t *)&mission;
	return output; 
}

/*****************************************************************************/
/*                                  Monitor                                  */
/*****************************************************************************/
uint8_t alert = 0;

uint8_t isFencedWaypoint(Coordinate c) {
	return    c.latitude >= 45.300400 && c.latitude <= 45.345315
				 && c.longitude >=  -121.014730 && c.longitude <= -120.912520
				 && c.altitude >= 1000.0 && c.altitude <= 1000.0; 
}

uint8_t isFenced(Mission *mission) {
	return    isFencedWaypoint(mission->waypoint[0])
		     && isFencedWaypoint(mission->waypoint[1])
				 && isFencedWaypoint(mission->waypoint[2]);
}

uint8_t getMonitorAlertOutput(uint8_t* msg) {
	Mission* mission = (Mission *)msg;
	alert = !isFenced(mission);
	return alert; 
}
