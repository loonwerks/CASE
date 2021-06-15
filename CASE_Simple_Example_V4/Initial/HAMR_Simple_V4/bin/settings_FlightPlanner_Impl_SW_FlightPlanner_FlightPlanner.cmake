add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner
                        muslc)
endif()