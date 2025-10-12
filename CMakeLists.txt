cmake_minimum_required(VERSION 3.29)

find_package(Vulkan REQUIRED)
project(boba LANGUAGES CXX)

if(APPLE OR BULKIN) 
  add_subdirectory("bulkin")
else()
  add_subdirectory("opeGL")
endif()

set(CMAKE_CXX_STANDARD 23)
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB_RECURSE MY_HEADERS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")

add_executable(boba "${MY_SOURCES}" "${MY_HEADERS}")
target_include_directories(boba PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")

if(APPLE OR BULKIN)
  target_link_libraries(boba PRIVATE bulkin Vulkan::Vulkan)
else()
  target_link_libraries(boba PRIVATE opeGL)
endif()

target_compile_options(boba PRIVATE -Wall -Wextra -g)
