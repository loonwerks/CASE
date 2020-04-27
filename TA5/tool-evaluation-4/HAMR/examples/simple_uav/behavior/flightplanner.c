#include <camkes.h>
#include <sb_types.h>
#include <sb_FlightPlanner_Impl.h>
#include <assert.h>

static bool missioncommand_sent = false;

void init(const int64_t *arg){
}

void printCommand(const SW__Command_Impl * command) {
  	printf("  Map     = [\n");
    for(int i = 0; i < 4; i++){
      SW__Coordinate_Impl c = command->Map[i];
      printf("             %i: {%i, %i, %i}\n", i, c.lat, c.longitude, c.alt);
    }  	
    printf("            ]\n");
		printf("  Pattern = %i\n", command->Pattern);
		printf("  HMAC    = %i\n", command->HMAC);
}

void recv_map(const SW__Command_Impl * command) {

  	printf("FPLN:< Command.\n");
  	printCommand(command);
  	
  	if(!missioncommand_sent) {
  	    
  	    // simulate the creation of a new mission
  		sb_SW__Mission_container mission = { .f = {{ .lat = 0, .longitude = 1, .alt = 2},
   		                                           { .lat = 1, .longitude = 2, .alt = 3},
  		                                           { .lat = 2, .longitude = 3, .alt = 4},
  		                                           { .lat = 3, .longitude = 4, .alt = 5},
  		                                           { .lat = 4, .longitude = 5, .alt = 6},
  		                                           { .lat = 5, .longitude = 6, .alt = 7},
  		                                           { .lat = 6, .longitude = 7, .alt = 8},
  		                                           { .lat = 7, .longitude = 8, .alt = 9},
  		                                           { .lat = 8, .longitude = 9, .alt = 10},
  		                                           { .lat = 9, .longitude = 10, .alt = 11}}};
  		
  		printf("FPLN:> new mission notification.\n");
  		
  		// send the flight plan to WMP
  		assert(sb_flight_plan_enqueue(&mission) == true);
  		
    	missioncommand_sent = true;
  	}
}

void mission_rcv(const bool * value) {
	printf("FPLN:< Received mission receipt confirmation: %i.\n", *value);
}