#
# Copyright 2018, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#
# @TAG(DATA61_BSD)
#

cmake_minimum_required(VERSION 3.8.2)

CAmkESAddImportPath(components)
CAmkESAddImportPath(interfaces)
CAmkESAddTemplatesPath(templates)

include(${CMAKE_CURRENT_LIST_DIR}/components/PCIConfigIO/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/RTC/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/SerialServer/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/TimeServer/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/FileServer/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/VirtQueue/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/Ethdriver/CMakeLists.txt)
include(${CMAKE_CURRENT_LIST_DIR}/components/PicoServer/CMakeLists.txt)
