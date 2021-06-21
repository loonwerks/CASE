include(ExternalProject)

ExternalProject_Add(hacl-star
    GIT_REPOSITORY https://github.com/project-everest/hacl-star/
    # This was the most recent commit on master, at the time of integration.
    # The next release will likely support ARM cross-compilation (as this commit
    # does), and we should switch to that when it arrives.
    GIT_TAG 50db8e4147258a5dc8e18c940c1b045ce5558723
    GIT_PROGRESS True
    SOURCE_DIR ${CMAKE_CURRENT_BINARY_DIR}/hacl-star
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
)

set(hacl_release_dir "${CMAKE_CURRENT_BINARY_DIR}/hacl-star/dist")
set(hacl_path    "${hacl_release_dir}/gcc-compatible")
set(kremlin_path "${hacl_release_dir}/kremlin/include")
set(kremlib_path "${hacl_release_dir}/kremlin/kremlib/dist/minimal")

# Config by arch
if("${target_arch_lower}" STREQUAL "native")
    include(HaclConfig.cmake)
    add_definitions(${comp_defns})
elseif("${target_arch_lower}" STREQUAL "armv7")
    # Make sure whole-project is hard-float
    add_definitions(-DIS_ARM_7 -DBROKEN_INTRINSICS IS_NOT_X64 -DKRML_VERIFIED_UINT128)
    add_definitions(-DLib_IntVector_Intrinsics_vec256="void *")
elseif("${target_arch_lower}" STREQUAL "other")
    message(WARNING "TARGET_ARCH value \"other\" implies cross-compilation to an unspecified target. The relevant CMake variables will need to be configured manually.")
endif()

set(hacl_sources ${hacl_path}/Hacl_Hash.c ${hacl_path}/Hacl_Ed25519.c ${hacl_path}/Hacl_Curve25519_51.c ${hacl_path}/Hacl_Chacha20_Vec32.c ${hacl_path}/Hacl_Chacha20.c)
set_source_files_properties(${hacl_sources} PROPERTIES GENERATED True)

# Small standalone executable to generate keys for Ed25519
# add_executable(keyGen EXCLUDE_FROM_ALL
#     key_gen.c ${hacl_path}/Hacl_Hash.c ${hacl_path}/Hacl_Ed25519.c ${hacl_path}/Hacl_Curve25519_51.c
# )
# target_include_directories(keyGen BEFORE PRIVATE ${hacl_path} ${kremlin_path} ${kremlib_path})
# add_dependencies(keyGen hacl-star)

function(add_hacl target)
    # For some reason these are not in scope unless defined in the function
    set(hacl_release_dir "${CMAKE_BINARY_DIR}/system/crypto/hacl-star/dist") # Better way to reference crypto binary dir?
    set(hacl_path    "${hacl_release_dir}/gcc-compatible")
    set(kremlin_path "${hacl_release_dir}/kremlin/include")
    set(kremlib_path "${hacl_release_dir}/kremlin/kremlib/dist/minimal")
    set(hacl_sources ${hacl_path}/Hacl_Hash.c ${hacl_path}/Hacl_Ed25519.c ${hacl_path}/Hacl_Curve25519_51.c ${hacl_path}/Hacl_Chacha20_Vec32.c ${hacl_path}/Hacl_Chacha20.c)
    set_source_files_properties(${hacl_sources} PROPERTIES GENERATED True)

    target_include_directories(${target} BEFORE PRIVATE ${hacl_path} ${kremlin_path} ${kremlib_path})
    target_sources(${target} PRIVATE ${CMAKE_SOURCE_DIR}/system/crypto/crypto_ffi.c ${hacl_sources})
    add_dependencies(${target} hacl-star)
endfunction()

# Small standalone executable to generate keys for Ed25519
add_executable(keyGen EXCLUDE_FROM_ALL key_gen.c)
add_hacl(keyGen)