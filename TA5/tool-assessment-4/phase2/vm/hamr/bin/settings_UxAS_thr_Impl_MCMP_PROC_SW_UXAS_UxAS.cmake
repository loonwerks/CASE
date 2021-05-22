add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS
                        muslc)
endif()