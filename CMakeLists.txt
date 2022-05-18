cmake_minimum_required(VERSION 3.22)
project(mcmc_sampler CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")

include(PatchOpenMPApple)

find_package(catch2 CONFIG REQUIRED)
find_package(xtensor CONFIG REQUIRED)
find_package(cxxopts CONFIG REQUIRED)

set(MCMC_SAMPLERS_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

set(MCMC_SAMPLERS_HEADERS
        ${MCMC_SAMPLERS_INCLUDE_DIR}/mcmc_sampler.hpp)

add_library(mcmc_samplers INTERFACE)
target_include_directories(mcmc_samplers INTERFACE
        $<BUILD_INTERFACE:${MCMC_SAMPLERS_INCLUDE_DIR}>
        $<INSTALL_INTERFACE:${include}>)
target_link_libraries(mcmc_samplers INTERFACE xtensor xtensor::optimize xtensor::use_xsimd)

add_subdirectory(tests)