cmake_minimum_required(VERSION 2.8)
project(foo)

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})
add_executable(foo foo.cpp boo.cpp)
target_link_libraries(foo ${GTEST_LIBRARIES})

enable_testing()
add_test(FooTest foo "${CMAKE_CURRENT_LIST_DIR}/data/input.file")
