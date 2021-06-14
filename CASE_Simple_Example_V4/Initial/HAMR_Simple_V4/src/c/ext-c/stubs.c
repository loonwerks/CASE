#include <stdio.h>
#include "simple_v4.h"

const Coordinate bottom_left = {-121.0083254511704,45.31010191362929,1000.0};
const Coordinate top_right = {-120.9377622731235,45.34120895091226,1000.0};
const Map map = {{bottom_left,top_right}};
const Command cmd = {map};
const MsgHeader msg_header = {0, 0};
const RFMsg input = { msg_header, cmd };
const Coordinate bad_intermediate = {45.3507453, -120.9728625, 10000.0};
const Coordinate good_intermediate = {45.31512567936078,-120.9549900754267,1000.0};
const Mission good_waypoints = {bottom_left, good_intermediate, top_right};
const Mission bad_waypoints = {bottom_left, bad_intermediate, top_right};

int main(int argc, char* argv[]) {
	printf("Coordinate: %d\n", sizeof(Coordinate));
	Map Arr;
	printf("Map: %d\n", sizeof(Arr));
	printf("Command: %d\n", sizeof(Command));
	printf("MsgHeader: %d\n", sizeof(MsgHeader));
	printf("RFMsg: %d\n", sizeof(RFMsg));
	printf("MissionCommand: %d\n", sizeof(MissionCommand));

	print_RFMsg(&input);

	const Mission mission = {{{0,0,0}, {0,0,1}, {0,0,2}}};
	print_Mission(&mission);
	return 1;
}
