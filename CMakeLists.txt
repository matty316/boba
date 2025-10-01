cmake_minimum_required(VERSION 3.29)

find_package(Vulkan REQUIRED)
project(boba LANGUAGES CXX)

add_subdirectory("../bulkin" "../bulkin")

set(CMAKE_CXX_STANDARD 23)
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE MY_HEADERS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
file(GLOB_RECURSE MY_RESOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/resources/*")

add_executable(boba "${MY_SOURCES}" "${MY_HEADERS}" "${MY_RESOURCES}")
target_include_directories(boba PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")

target_link_libraries(boba PRIVATE bulkin Vulkan::Vulkan)

target_compile_options(boba PRIVATE -Wall -Wextra -g)
