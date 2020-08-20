# CMakeList.txt : CMake project for abl_link~, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project (abl_link)


# Add source to this project's executable.
add_library (abl_link SHARED "abl_link~.cpp" "abl_link_instance.cpp")
set_target_properties(abl_link PROPERTIES OUTPUT_NAME abl_link~)

if (WIN32)
	target_include_directories(abl_link SYSTEM PRIVATE $ENV{ProgramW6432}/Pd/src)
	target_link_directories(abl_link PRIVATE $ENV{ProgramW6432}/Pd/bin)
    add_definitions(-D LINK_PLATFORM_WINDOWS=1 -D__x86_64__=1)
endif()

target_include_directories(abl_link PRIVATE ./link/include)
target_include_directories(abl_link PRIVATE ./link/modules/asio-standalone/asio/include)

target_link_libraries(abl_link pd)
