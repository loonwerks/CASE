add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST
                        muslc)
endif()