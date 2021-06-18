add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo
                        muslc)
endif()