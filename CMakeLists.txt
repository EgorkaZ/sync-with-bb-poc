cmake_minimum_required(VERSION 3.15)

project(sync-test LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)
add_executable(sync-test-exec ${SOURCES})

target_include_directories(sync-test-exec PRIVATE include)

# set(GCC_TOOLCHAIN "" CACHE PATH "Ask Clang to use GCC toolchain from specified directory")
# if (EXISTS ${GCC_TOOLCHAIN})
#     set(TOOLCHAIN_ARG "--gcc-toolchain=${GCC_TOOLCHAIN}")
#     if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
#         message(STATUS "Using GCC toolchain: ${GCC_TOOLCHAIN}")
#         target_compile_options(sync-test-exec PRIVATE "${TOOLCHAIN_ARG}")
#         target_link_options(sync-test-exec PRIVATE "${TOOLCHAIN_ARG}")
#         target_compile_definitions(sync-test-exec PRIVATE -D_GLIBCXX_USE_CXX11_ABI=0)
#     endif()
# endif()
