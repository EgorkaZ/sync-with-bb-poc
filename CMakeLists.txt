cmake_minimum_required(VERSION 3.15)

project(sync-test LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)
add_executable(sync-test-exec ${SOURCES})

target_include_directories(sync-test-exec PRIVATE include)
