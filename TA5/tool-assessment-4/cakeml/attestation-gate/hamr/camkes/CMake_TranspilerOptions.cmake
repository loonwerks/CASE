option(BOUND_CHECK
       "Build the program with sequence bound checking."
       OFF)

if(BOUND_CHECK OR "$ENV{BOUND_CHECK}" STREQUAL "ON")
   add_definitions(-DSIREUM_BOUND_CHECK)
endif()

option(NO_PRINT
       "Build the program without console output."
       OFF)

if(NO_PRINT OR "$ENV{NO_PRINT}" STREQUAL "ON")
   add_definitions(-DSIREUM_NO_PRINT)
endif()

option(RANGE_CHECK
       "Build the program with range checking."
       OFF)

if(RANGE_CHECK OR "$ENV{RANGE_CHECK}" STREQUAL "ON")
   add_definitions(-DSIREUM_RANGE_CHECK)
endif()

option(WITH_LOC
       "Build the program with Slang location info."
       OFF)

if(WITH_LOC OR "$ENV{WITH_LOC}" STREQUAL "ON")
   add_definitions(-DSIREUM_LOC)
endif()