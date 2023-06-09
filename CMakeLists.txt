cmake_minimum_required(VERSION 3.0.0)
project(cmake_demo VERSION 0.1.0 LANGUAGES C CXX)

# 设置vcpkg路径变量
set(VCPKG_PATH /Users/xiaokyo/Documents/works/cpp-works/vcpkg)

include(CTest)
enable_testing()

# 设置标准库
set(CMAKE_CXX_STANDARD 20)

# 多文件编译路径变量声明
aux_source_directory(./src DIR_SRCS)

# 主文件
add_executable(cmake_demo main.cpp ${DIR_SRCS})

# 设置vcpkg工具链
set(CMAKE_TOOLCHAIN_FILE ${VCPKG_PATH}/scripts/buildsystems/vcpkg.cmake)

# 设置vcpkg库
include_directories(${VCPKG_PATH}/installed/arm64-osx/include)
link_directories(${VCPKG_PATH}/installed/arm64-osx/lib)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

