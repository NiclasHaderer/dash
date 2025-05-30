cmake_minimum_required(VERSION 3.5)
project(dash)

# 1) Find Python
#find_package(Python3 COMPONENTS Interpreter)
#
#if (NOT Python3_Interpreter_FOUND)
#    # print the current directory
#    message(STATUS "Python not found, trying to install it...")
#    message(STATUS "Current directory: ${CMAKE_CURRENT_SOURCE_DIR}")
#
#    if (WIN32)
#        set(SCRIPT_NAME "install_python_windows.bat")
#    elseif (APPLE)
#        set(SCRIPT_NAME "install_python_mac.sh")
#    elseif (UNIX)
#        set(SCRIPT_NAME "install_python_linux.sh")
#    else()
#        message(FATAL_ERROR "Unsupported platform.")
#    endif()
#
#    execute_process(
#            COMMAND ${CMAKE_COMMAND} -E env bash "${CMAKE_CURRENT_SOURCE_DIR}/scripts/${SCRIPT_NAME}"
#            RESULT_VARIABLE INSTALL_RESULT
#    )
#
#    if (INSTALL_RESULT)
#        message(FATAL_ERROR "Failed to install Python.")
#    endif()
#
#    find_package(Python3 REQUIRED)  # Re-check after installing
#endif()
#
#message(STATUS "Python found: ${Python3_EXECUTABLE}")


# 1) Find npm
#find_program(NPM_EXECUTABLE NAMES npm)
#
#if (NOT NPM_EXECUTABLE)
#    message(STATUS "npm not found, trying to install it...")
#    message(STATUS "Current directory: ${CMAKE_CURRENT_SOURCE_DIR}")
#
#    if (WIN32)
#        set(SCRIPT_NAME "install_npm_windows.bat")
#        # On Windows, we typically run batch files via `cmd /c`
#        execute_process(
#                COMMAND cmd /c "${CMAKE_CURRENT_SOURCE_DIR}/scripts/${SCRIPT_NAME}"
#                WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/scripts"
#                RESULT_VARIABLE INSTALL_RESULT
#        )
#    elseif (APPLE)
#        set(SCRIPT_NAME "install_npm_mac.sh")
#        execute_process(
#                COMMAND ${CMAKE_COMMAND} -E env bash "${CMAKE_CURRENT_SOURCE_DIR}/scripts/${SCRIPT_NAME}"
#                WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/scripts"
#                RESULT_VARIABLE INSTALL_RESULT
#        )
#    elseif (UNIX)
#        set(SCRIPT_NAME "install_npm_linux.sh")
#        execute_process(
#                COMMAND ${CMAKE_COMMAND} -E env bash "${CMAKE_CURRENT_SOURCE_DIR}/scripts/${SCRIPT_NAME}"
#                WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/scripts"
#                RESULT_VARIABLE INSTALL_RESULT
#        )
#    else()
#        message(FATAL_ERROR "Unsupported platform.")
#    endif()
#
#    if (INSTALL_RESULT)
#        message(FATAL_ERROR "Failed to install npm.")
#    endif()
#endif()
#
#message(STATUS "npm found: ${NPM_EXECUTABLE}")

# 2) Add a custom target that runs your Python script
# The `ALL` ensures the script will run whenever you type `make`
# (or build the default target).
#add_custom_target(
#        run_my_python_script ALL
#        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/scripts/build_ui.py
#        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}  # or wherever you need to run
#        COMMENT "Running Python script to build UI"
#)

# CMake example
string(REGEX MATCH "v([0-9]+)\\.([0-9]+)\\.([0-9]+)" _ ${DUCKDB_VERSION})
set(DUCKDB_MAJOR_VERSION "${CMAKE_MATCH_1}")
set(DUCKDB_MINOR_VERSION "${CMAKE_MATCH_2}")
set(DUCKDB_PATCH_VERSION "${CMAKE_MATCH_3}")
add_compile_definitions(
    DUCKDB_MAJOR_VERSION=${DUCKDB_MAJOR_VERSION}
    DUCKDB_MINOR_VERSION=${DUCKDB_MINOR_VERSION}
    DUCKDB_PATCH_VERSION=${DUCKDB_PATCH_VERSION}
)

# Set extension name here
set(TARGET_NAME dash)

if(MINGW)
    set(OPENSSL_USE_STATIC_LIBS TRUE)
endif()

find_package(OpenSSL REQUIRED)

include_directories(src/include duckdb/third_party/httplib)

set(EXTENSION_NAME ${TARGET_NAME}_extension)
set(LOADABLE_EXTENSION_NAME ${TARGET_NAME}_loadable_extension)

set(EXTENSION_SOURCES
        src/dash_extension.cpp
        src/gen/files.cpp
        src/serializer/result_serializer.cpp
        src/temp_file.cpp
)


# 3) Build the extensions
build_static_extension(${TARGET_NAME} ${EXTENSION_SOURCES})
build_loadable_extension(${TARGET_NAME} " " ${EXTENSION_SOURCES})

# 4) Link OpenSSL
target_link_libraries(${EXTENSION_NAME} OpenSSL::SSL OpenSSL::Crypto)
target_link_libraries(${LOADABLE_EXTENSION_NAME} OpenSSL::SSL OpenSSL::Crypto)

# 5) Make sure the extension depends on the script target
#add_dependencies(${EXTENSION_NAME} run_my_python_script)
#add_dependencies(${LOADABLE_EXTENSION_NAME} run_my_python_script)

install(
        TARGETS ${EXTENSION_NAME}
        EXPORT "${DUCKDB_EXPORT_SET}"
        LIBRARY DESTINATION "${INSTALL_LIB_DIR}"
        ARCHIVE DESTINATION "${INSTALL_LIB_DIR}"
)
