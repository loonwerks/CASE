add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(FlightController_Impl_FlightController_FlightController
                        muslc)
endif()