cmake_minimum_required(VERSION 2.8.6)

add_library(linsys STATIC
  common.c)

target_include_directories(linsys PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
)

target_include_directories(linsys PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

add_subdirectory(indirect)

target_link_libraries(linsys indirect)
