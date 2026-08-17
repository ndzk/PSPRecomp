# Def Jam: Fight for NY - The Takeover (PSP) profile.
#
# Skeleton stage: no generated AOT corpus exists yet, so DefJamNative only
# loads and validates its manifest. The build shape is deliberately close to
# profiles/vcs so the corpus and host layers can be added without rework.

set(DEFJAM_PROFILE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(DEFJAM_MANIFEST "${DEFJAM_PROFILE_DIR}/config/defjam_ulus10100.toml")

if(NOT EXISTS "${DEFJAM_MANIFEST}")
    message(FATAL_ERROR "defjam profile manifest is missing: ${DEFJAM_MANIFEST}")
endif()

set(DEFJAM_HOST_SOURCES
    host/defjam_config.cpp
)

function(defjam_target_common target)
    target_include_directories(${target} PRIVATE "${DEFJAM_PROFILE_DIR}/host")
    target_link_libraries(${target} PRIVATE psprecomp_core)
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
)
defjam_target_common(DefJamNative)
defjam_set_runtime_output(DefJamNative)

# Ship the manifest beside the executable so a packaged build resolves it
# directly instead of falling back to the in-tree copy.
add_custom_command(TARGET DefJamNative POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${DEFJAM_MANIFEST}"
            "$<TARGET_FILE_DIR:DefJamNative>/defjam_ulus10100.toml"
    COMMENT "Staging defjam manifest beside DefJamNative")

if(PSPRECOMP_BUILD_PROFILE_TESTS)
    # A profile must be able to ship tests even when the framework's own tests
    # are switched off.
    if(NOT PSPRECOMP_BUILD_TESTS)
        enable_testing()
    endif()

    add_executable(defjam_config_tests
        tests/defjam_config_tests.cpp
        ${DEFJAM_HOST_SOURCES}
    )
    defjam_target_common(defjam_config_tests)
    defjam_set_runtime_output(defjam_config_tests)
    add_test(NAME defjam_config_tests COMMAND defjam_config_tests)
endif()
