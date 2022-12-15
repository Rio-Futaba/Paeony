cmake_minimum_required(VERSION 3.24)
project(Paeony VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EVENT__DISABLE_MBEDTLS ON)
add_subdirectory(3rdpart/spdlog)
add_subdirectory(3rdpart/yyjson)
add_subdirectory(3rdpart/libevent)
INCLUDE_DIRECTORIES(
        3rdpart/spdlog/include
        3rdpart/yyjson/src
        3rdpart/libevent
)
set(EVENT__DISABLE_MBEDTLS ON)
AUX_SOURCE_DIRECTORY(. SRC_LIST)
AUX_SOURCE_DIRECTORY(src SRCLIST)


add_executable(Paeony ${SRC_LIST})

target_link_directories(Paeony PUBLIC event event_core kqueue event_pthreads spdlog yyjson)



