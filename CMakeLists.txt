cmake_minimum_required(VERSION 3.0.0)
project(cmake_demo VERSION 0.1.0 LANGUAGES C CXX)

set(VCPKG_PATH /Users/xiaokyo/Documents/works/cpp-works/vcpkg)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 20)

aux_source_directory(./src DIR_SRCS)

add_executable(cmake_demo main.cpp ${DIR_SRCS})

set(CMAKE_TOOLCHAIN_FILE ${VCPKG_PATH}/scripts/buildsystems/vcpkg.cmake)

include_directories(${VCPKG_PATH}/installed/arm64-osx/include)
link_directories(${VCPKG_PATH}/installed/arm64-osx/lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

