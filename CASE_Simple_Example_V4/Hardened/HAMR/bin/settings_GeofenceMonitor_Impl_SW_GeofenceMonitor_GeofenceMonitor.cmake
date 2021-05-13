add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor
                        muslc)
endif()