cmake_minimum_required(VERSION 3.0.0)
project(Singleton VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES 
main.cpp
Singleton.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Singleton.h
)

add_executable(Singleton ${SOURCES})

target_include_directories(Singleton PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
