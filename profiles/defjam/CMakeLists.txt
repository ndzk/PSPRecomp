# Def Jam: Fight for NY - The Takeover (PSP) profile.
#
# The build works in two states. With profiles/defjam/generated populated,
# DefJamNative links the AOT corpus. Without it, the same target builds as a
# skeleton that validates its manifest and exits, so the profile stays
# buildable before the corpus exists and after a clean checkout that has not
# regenerated it.

set(DEFJAM_PROFILE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(DEFJAM_MANIFEST "${DEFJAM_PROFILE_DIR}/config/defjam_ulus10100.toml")

if(NOT EXISTS "${DEFJAM_MANIFEST}")
    message(FATAL_ERROR "defjam profile manifest is missing: ${DEFJAM_MANIFEST}")
endif()

set(DEFJAM_HOST_SOURCES
    host/defjam_atrac.cpp
    host/defjam_config.cpp
    host/defjam_decoder.cpp
    host/defjam_decoder_ffmpeg.cpp
    host/defjam_disc.cpp
    host/defjam_ge.cpp
    host/defjam_io.cpp
    host/defjam_mpeg.cpp
    host/defjam_profile.cpp
    host/defjam_utility.cpp
)

# A generated unit is one enormous function. Letting MSVC inline into it is
# what drove the optimizer past convergence on the reference profile, so the
# corpus defaults to no inline expansion while host code keeps /Ob3.
set(PSPRECOMP_GENERATED_INLINE_LEVEL "0" CACHE STRING
    "MSVC /Ob level applied to generated AOT units (0, 1, 2 or 3)")
set_property(CACHE PSPRECOMP_GENERATED_INLINE_LEVEL PROPERTY STRINGS 0 1 2 3)
if(NOT PSPRECOMP_GENERATED_INLINE_LEVEL MATCHES "^[0-3]$")
    message(FATAL_ERROR "PSPRECOMP_GENERATED_INLINE_LEVEL must be 0, 1, 2 or 3")
endif()

# ---------------------------------------------------------------------------
# Generated AOT corpus
# ---------------------------------------------------------------------------
# CONFIGURE_DEPENDS so regenerating the corpus re-runs CMake rather than
# silently building a stale file list.
file(GLOB DEFJAM_GENERATED CONFIGURE_DEPENDS "${DEFJAM_PROFILE_DIR}/generated/*.cpp")
list(LENGTH DEFJAM_GENERATED DEFJAM_GENERATED_COUNT)

if(DEFJAM_GENERATED_COUNT GREATER 0)
    message(STATUS "defjam: ${DEFJAM_GENERATED_COUNT} generated translation units")

    if(MSVC)
        # /O1 and /O2 are accepted verbatim; 0 and 3 have no matching /O digit.
        if(PSPRECOMP_GENERATED_OPT_LEVEL STREQUAL "0")
            set(DEFJAM_GENERATED_OPT "/Od")
        elseif(PSPRECOMP_GENERATED_OPT_LEVEL STREQUAL "3")
            set(DEFJAM_GENERATED_OPT "/Ox")
        else()
            set(DEFJAM_GENERATED_OPT "/O${PSPRECOMP_GENERATED_OPT_LEVEL}")
        endif()

        # Each unit is one very large function, well past the default object
        # section limit.
        set(DEFJAM_GENERATED_OPTIONS
            "${DEFJAM_GENERATED_OPT};/Ob${PSPRECOMP_GENERATED_INLINE_LEVEL};/bigobj;${PSPRECOMP_MSVC_MP_FLAG}")

        if(PSPRECOMP_LTO)
            # CMAKE_INTERPROCEDURAL_OPTIMIZATION puts /GL on the target. /GL- on
            # these sources overrides it so the linker receives native objects
            # instead of one LTCG IR module per generated unit, which is what
            # makes link memory unmanageable at this corpus size. Per-unit
            # optimization is unaffected; host and runtime LTCG still apply.
            string(APPEND DEFJAM_GENERATED_OPTIONS ";/GL-")
        endif()

        set_source_files_properties(${DEFJAM_GENERATED} PROPERTIES
            COMPILE_OPTIONS "${DEFJAM_GENERATED_OPTIONS}")
    else()
        set_source_files_properties(${DEFJAM_GENERATED} PROPERTIES
            COMPILE_OPTIONS "-O${PSPRECOMP_GENERATED_OPT_LEVEL};-g0")
    endif()
else()
    message(STATUS "defjam: no generated corpus present; building the manifest-only skeleton")
endif()

# ---------------------------------------------------------------------------
# Optional movie decoder
# ---------------------------------------------------------------------------
# Off by default. The profile builds, runs and boots the title without it; only
# movie playback needs one, and it is the one thing here that cannot be written
# from a published specification, so it is taken as a third-party component
# rather than grown in-tree.
#
# FFmpeg must be an LGPL build. A build configured with --enable-gpl is GPL and
# would not be compatible with this MIT profile. Neither decoder this needs -
# H.264 and ATRAC3+ - requires any GPL component, so an LGPL build suffices.
option(PSPRECOMP_DEFJAM_FFMPEG "Decode movies with FFmpeg (LGPL, dynamically linked)" OFF)

if(PSPRECOMP_DEFJAM_FFMPEG)
    set(PSPRECOMP_DEFJAM_FFMPEG_ROOT "" CACHE PATH
        "Root of an LGPL FFmpeg with include/ and lib/ (leave empty to search the system)")

    set(_defjam_ffmpeg_hints "")
    if(PSPRECOMP_DEFJAM_FFMPEG_ROOT)
        set(_defjam_ffmpeg_hints
            "${PSPRECOMP_DEFJAM_FFMPEG_ROOT}/include" "${PSPRECOMP_DEFJAM_FFMPEG_ROOT}/lib")
    endif()

    find_path(DEFJAM_FFMPEG_INCLUDE_DIR libavcodec/avcodec.h
        HINTS ${_defjam_ffmpeg_hints})
    foreach(_lib avcodec avutil)
        find_library(DEFJAM_FFMPEG_${_lib} NAMES ${_lib} HINTS ${_defjam_ffmpeg_hints})
        if(NOT DEFJAM_FFMPEG_${_lib})
            message(FATAL_ERROR
                "PSPRECOMP_DEFJAM_FFMPEG is ON but lib${_lib} was not found. "
                "Point PSPRECOMP_DEFJAM_FFMPEG_ROOT at an LGPL FFmpeg development package, "
                "or configure with -DPSPRECOMP_DEFJAM_FFMPEG=OFF to build without movie playback.")
        endif()
    endforeach()
    if(NOT DEFJAM_FFMPEG_INCLUDE_DIR)
        message(FATAL_ERROR
            "PSPRECOMP_DEFJAM_FFMPEG is ON but libavcodec/avcodec.h was not found. "
            "Point PSPRECOMP_DEFJAM_FFMPEG_ROOT at an LGPL FFmpeg development package.")
    endif()

    message(STATUS "defjam: movie decoder enabled, FFmpeg headers at ${DEFJAM_FFMPEG_INCLUDE_DIR}")
endif()

function(defjam_link_decoder target)
    if(PSPRECOMP_DEFJAM_FFMPEG)
        target_compile_definitions(${target} PRIVATE DEFJAM_HAS_FFMPEG=1)
        # SYSTEM: these are third-party headers and must not be held to this
        # profile's warning level.
        target_include_directories(${target} SYSTEM PRIVATE "${DEFJAM_FFMPEG_INCLUDE_DIR}")
        target_link_libraries(${target} PRIVATE
            "${DEFJAM_FFMPEG_avcodec}" "${DEFJAM_FFMPEG_avutil}")
    endif()
endfunction()

function(defjam_target_common target)
    target_include_directories(${target} PRIVATE "${DEFJAM_PROFILE_DIR}/host")
    target_link_libraries(${target} PRIVATE psprecomp_core)
    defjam_link_decoder(${target})
    # Lets the tests and the development launch path find the in-tree manifest
    # without depending on the working directory.
    target_compile_definitions(${target} PRIVATE
        DEFJAM_MANIFEST_PATH="${DEFJAM_MANIFEST}")
    if(MSVC)
        target_compile_options(${target} PRIVATE /W4 /permissive- /EHsc ${PSPRECOMP_MSVC_MP_FLAG})
        target_compile_definitions(${target} PRIVATE _CRT_SECURE_NO_WARNINGS)
    else()
        target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endfunction()

function(defjam_set_runtime_output target)
    set_target_properties(${target} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/$<CONFIG>")
endfunction()

add_executable(DefJamNative
    host/main.cpp
    ${DEFJAM_HOST_SOURCES}
    ${DEFJAM_GENERATED}
)
defjam_target_common(DefJamNative)
defjam_set_runtime_output(DefJamNative)

if(DEFJAM_GENERATED_COUNT GREATER 0)
    # register_generated_functions has no default definition in the framework,
    # so only a build that links the corpus may call it.
    target_compile_definitions(DefJamNative PRIVATE DEFJAM_HAS_GENERATED_CORPUS=1)
endif()

if(MSVC)
    # /Ob3 must not go on the target. target_compile_options lands in the
    # vcxproj AdditionalOptions, which cl.exe sees after the per-source
    # InlineFunctionExpansion, so a target-wide /Ob3 silently overrides the
    # /Ob${PSPRECOMP_GENERATED_INLINE_LEVEL} set on the corpus above. MSVC
    # reports that as "D9025: overriding '/Ob0' with '/Ob3'". Host sources only.
    set_source_files_properties(host/main.cpp ${DEFJAM_HOST_SOURCES}
        DIRECTORY "${DEFJAM_PROFILE_DIR}" PROPERTIES COMPILE_OPTIONS
        "$<$<CONFIG:Release>:/Ob3>;$<$<CONFIG:RelWithDebInfo>:/Ob3>")
    # Generated units are single enormous functions; the default 1 MB stack is
    # not enough once guest recursion nests through chained calls.
    target_link_options(DefJamNative PRIVATE /STACK:67108864)
    if(PSPRECOMP_LTO)
        # Make the otherwise silent LTCG phase visible while it runs.
        target_link_options(DefJamNative PRIVATE /LTCG:STATUS /INCREMENTAL:NO)
        if(NOT PSPRECOMP_MSVC_CGTHREADS STREQUAL "0")
            target_link_options(DefJamNative PRIVATE "/CGTHREADS:${PSPRECOMP_MSVC_CGTHREADS}")
        endif()
    endif()
endif()

# Ship the manifest beside the executable so a packaged build resolves it
# directly instead of falling back to the in-tree copy.
add_custom_command(TARGET DefJamNative POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${DEFJAM_MANIFEST}"
            "$<TARGET_FILE_DIR:DefJamNative>/defjam_ulus10100.toml"
    COMMENT "Staging defjam manifest beside DefJamNative")

if(PSPRECOMP_DEFJAM_FFMPEG AND PSPRECOMP_DEFJAM_FFMPEG_ROOT)
    # Dynamic linkage is what keeps the LGPL library replaceable, so the DLLs
    # have to travel with the executable rather than be linked in.
    file(GLOB DEFJAM_FFMPEG_RUNTIME "${PSPRECOMP_DEFJAM_FFMPEG_ROOT}/bin/*.dll")
    foreach(_dll ${DEFJAM_FFMPEG_RUNTIME})
        add_custom_command(TARGET DefJamNative POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                    "${_dll}" "$<TARGET_FILE_DIR:DefJamNative>")
    endforeach()
endif()

if(PSPRECOMP_BUILD_PROFILE_TESTS)
    # A profile must be able to ship tests even when the framework's own tests
    # are switched off.
    if(NOT PSPRECOMP_BUILD_TESTS)
        enable_testing()
    endif()

    # Deliberately excludes the corpus: this exercises manifest parsing and
    # identity checking, and linking ~170 large units into it would make the
    # test build as expensive as the application build.
    add_executable(defjam_config_tests
        tests/defjam_config_tests.cpp
        ${DEFJAM_HOST_SOURCES}
    )
    defjam_target_common(defjam_config_tests)
    defjam_set_runtime_output(defjam_config_tests)
    add_test(NAME defjam_config_tests COMMAND defjam_config_tests)
endif()
