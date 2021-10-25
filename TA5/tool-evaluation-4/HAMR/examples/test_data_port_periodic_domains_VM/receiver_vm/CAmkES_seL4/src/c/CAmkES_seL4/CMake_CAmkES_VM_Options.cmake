option(USE_PRECONFIGURED_ROOTFS
       "Use preconfigured rootfs rather than downloading a vanilla linux image"
       OFF)

if("$ENV{USE_PRECONFIGURED_ROOTFS}" STREQUAL "ON")
   set(USE_PRECONFIGURED_ROOTFS ON)
endif()