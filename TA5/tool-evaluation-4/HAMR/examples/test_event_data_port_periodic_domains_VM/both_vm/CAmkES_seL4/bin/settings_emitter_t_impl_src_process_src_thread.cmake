add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(emitter_t_impl_src_process_src_thread
                        muslc)
endif()