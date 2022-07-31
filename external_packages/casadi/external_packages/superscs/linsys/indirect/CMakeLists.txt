cmake_minimum_required(VERSION 2.8.6)

add_library(indirect STATIC
  private.c)

target_link_libraries(indirect ${LAPACK_LIBRARIES} ${BLAS_LIBRARIES})

target_include_directories(indirect PRIVATE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../include>
)

target_link_libraries(indirect superscs)
