add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req
                        muslc)
endif()