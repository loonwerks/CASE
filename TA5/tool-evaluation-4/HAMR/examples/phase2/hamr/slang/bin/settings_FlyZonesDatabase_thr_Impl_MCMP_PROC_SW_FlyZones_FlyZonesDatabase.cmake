add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase
                        muslc)
endif()