project(cpp-tasks)
cmake_minimum_required(VERSION 3.10)

add_executable(task1 src/1.cpp)

if (CATKIN_ENABLE_TESTING)
  enable_testing()
  add_subdirectory(test)
endif()
