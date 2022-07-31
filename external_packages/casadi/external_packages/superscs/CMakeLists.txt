cmake_minimum_required(VERSION 2.8.6)

project(superscs C CXX)

add_definitions(-DLAPACK_LIB_FOUND -DUSE_LAPACK -fPIC -DSVD_ACTIVATED=1 -DCTRLC=1  -DCOPYAMATRIX=1 -DCASADI=1)

add_subdirectory(linsys)
#add_subdirectory(examples)

add_library(superscs STATIC
  src/cones.c
  src/cs.c
  src/ctrlc.c
  src/directions.c
  src/linAlg.c
  src/scs.c
  src/scs_parser.c
  src/scs_version.c
  src/unit_test_util.c
  src/util.c)

target_link_libraries(superscs linsys m casadi ${LAPACK_LIBRARIES})

target_include_directories(superscs PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
