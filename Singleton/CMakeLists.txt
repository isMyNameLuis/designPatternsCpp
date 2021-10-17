cmake_minimum_required(VERSION 3.0.0)
project(Singleton VERSION 0.1.0)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

#include(CTest)
enable_testing() 

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)


set(SOURCES 
main.cpp
Singleton.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Singleton.h
)

add_executable(Singleton ${SOURCES})

target_include_directories(Singleton PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Singleton PRIVATE Threads::Threads)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_executable(
    unitTest
    unitTest.cpp
    Singleton.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Singleton.h
)
target_link_libraries(
    unitTest
  gtest_main
  Threads::Threads
)

include(GoogleTest)
gtest_discover_tests(unitTest)
