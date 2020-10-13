add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(consumer_t_impl_dst_process_dst_thread
                        muslc)
endif()