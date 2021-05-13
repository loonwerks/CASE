add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(WaypointManager_Impl_SW_WaypointManager_WaypointManager
                        muslc)
endif()