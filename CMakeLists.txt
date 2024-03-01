cmake_minimum_required(VERSION 3.28)
project(google_test_demo)
# C++17编译标准
set(CMAKE_CXX_STANDARD 17)

include_directories(./include)
link_directories(./lib)

add_executable(google_test_demo src/main.cpp)

target_link_libraries(google_test_demo libgtest.a libgtest_main.a libgmock.a libgmock_main.a)
