add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(top_impl_Instance_src_process_src_thread
                        muslc)
endif()