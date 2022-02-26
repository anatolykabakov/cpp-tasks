cmake_minimum_required(VERSION 3.15)
file(STRINGS VERSION PROJECT_VERSION)
project(cpp-tasks VERSION ${PROJECT_VERSION})

set(CHAPTER5_LIBRARY chapter5)
file(GLOB CHAPTER5_LIBRARY_SRC ${CMAKE_SOURCE_DIR}/src/chapter5/*.cpp)

add_library(${CHAPTER5_LIBRARY} SHARED ${CHAPTER5_LIBRARY_SRC})

target_include_directories(${CHAPTER5_LIBRARY}
  PUBLIC include
)

install(TARGETS ${CHAPTER5_LIBRARY} DESTINATION bin)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME ${PACKAGE_NAME})
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Anatoly Kabakov <anatoly.kabakov@mail.ru>")
set(CPACK_PACKAGE_DESCRIPTION "Package contain programming tasks.")
include(CPack)

if (BUILD_TESTS)
  enable_testing()
  add_subdirectory(test)
endif()
