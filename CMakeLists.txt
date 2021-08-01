cmake_minimum_required(VERSION 3.19)
project(sorting_usage)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_BINARY_DIR})

find_package(sorting REQUIRED)

add_executable(sorting_usage main.cpp)
target_link_libraries(sorting_usage PRIVATE sorting::sorting)