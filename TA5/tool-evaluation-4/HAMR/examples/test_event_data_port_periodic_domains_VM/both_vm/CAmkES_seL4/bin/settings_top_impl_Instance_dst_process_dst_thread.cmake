add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(top_impl_Instance_dst_process_dst_thread
                        muslc)
endif()