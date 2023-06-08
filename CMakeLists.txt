cmake_minimum_required(VERSION 3.0.0)
project(cmake_demo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 20)

add_executable(cmake_demo main.cpp)

set(CMAKE_TOOLCHAIN_FILE /Users/xiaokyo/Documents/works/cpp-works/vcpkg/scripts/buildsystems/vcpkg.cmake)

include_directories(/Users/xiaokyo/Documents/works/cpp-works/vcpkg/installed/arm64-osx/include)
link_directories(/Users/xiaokyo/Documents/works/cpp-works/vcpkg/installed/arm64-osx/lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

