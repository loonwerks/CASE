add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(FlyZoneDatabase_Impl_SW_FlyZones_FlyZoneDatabase
                        muslc)
endif()