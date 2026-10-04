cmake_minimum_required(VERSION 3.20)
project(ne-estac VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(estac INTERFACE)
add_library(ne_pp::estac ALIAS estac)

target_include_directories(estac INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries(estac INTERFACE lattice)
