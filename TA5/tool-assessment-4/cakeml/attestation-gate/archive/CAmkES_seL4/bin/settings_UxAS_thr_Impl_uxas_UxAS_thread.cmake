add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(UxAS_thr_Impl_uxas_UxAS_thread
                        muslc)
endif()