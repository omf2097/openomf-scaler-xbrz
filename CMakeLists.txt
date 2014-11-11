cmake_minimum_required(VERSION 2.6)
project(openomf-scaler-xbrz CXX)

set(CMAKE_CXX_FLAGS "-std=gnu++11 -fpermissive -DNDEBUG")
set(CMAKE_CXX_FLAGS_DEBUG "-ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-O2")

link_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(include/)

add_library(scaler_xbrz SHARED
    src/xbrz/xbrz.cpp
    src/scaler_xbrz.cpp
)
