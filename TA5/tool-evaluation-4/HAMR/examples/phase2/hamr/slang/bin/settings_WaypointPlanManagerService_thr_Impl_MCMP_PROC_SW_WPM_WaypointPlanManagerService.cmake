add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService
                        muslc)
endif()