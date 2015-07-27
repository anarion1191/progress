cmake_minimum_required(VERSION 3.2)

project(progress)

set(INCLUDES "${PROJECT_SOURCE_DIR}/src/include")
set(SOURCES "${PROJECT_SOURCE_DIR}/src/main.cpp")

include_directories(${INCLUDES})

if(UNIX)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
endif()

add_executable(progress ${SOURCES})
