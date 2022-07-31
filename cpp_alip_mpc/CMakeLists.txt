cmake_minimum_required(VERSION 3.0.0)
project(cassie_mpc_lip VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O3 -DEIGEN_NO_DEBUG -march=native -Wl,--no-as-needed")

find_package(casadi REQUIRED)

# UDP static library
set(LIB_UDP 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/udp/udp.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/cassie_buses/linux_to_slrt_data_t.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/cassie_buses/slrt_to_linux_data_t.c)
add_library(udp_lib ${LIB_UDP})
target_include_directories(udp_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/udp
    ${CMAKE_CURRENT_SOURCE_DIR}/include/cassie_buses)

# Control Library
set(LIB_CTRL
    ${CMAKE_CURRENT_SOURCE_DIR}/src/control/Cassie_Fp_Controller.cpp)
add_library(ctrl_lib ${LIB_CTRL})
target_include_directories(ctrl_lib PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/control)
target_link_libraries(ctrl_lib
    udp_lib
    libcasadi.so)

#######################################################################
# Main executable
add_executable(cassie_alip_mpc ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(cassie_alip_mpc 
    udp_lib
    ctrl_lib)

# Generate mpc solver libraries
add_executable(generate_mpc_solver_libs
    ${CMAKE_CURRENT_SOURCE_DIR}/src/generate_mpc_solver_libs.cpp)
target_link_libraries(generate_mpc_solver_libs PUBLIC
    libcasadi.so)

# Copy mpc solver libraries
add_executable(copy_mpc_solver_libs
${CMAKE_CURRENT_SOURCE_DIR}/src/copy_mpc_solver_libs.cpp)
target_link_libraries(copy_mpc_solver_libs PUBLIC
libcasadi.so)

# Test solvers
add_executable(test_solvers
    ${CMAKE_CURRENT_SOURCE_DIR}/src/test_solvers.cpp)
target_link_libraries(test_solvers PUBLIC
    libcasadi.so)

