cmake_minimum_required(VERSION 3.13)
project(MLCPP)
set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_PREFIX_PATH "D:/c++ml/vcpkg/vcpkg/packages/xtensor_x64-windows/share/xtensor" "D:/c++ml/vcpkg/vcpkg/packages/xtl_x64-windows/share/xtl")
find_package(xtensor CONFIG REQUIRED)
find_package(xtl CONFIG REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE xtensor xtensor::optimize)

# Specify where you want to install the executable
set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/install")
