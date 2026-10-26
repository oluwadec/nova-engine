cmake_minimum_required(VERSION 3.20)
project(NovaEngine VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Warnings
if(MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Wconversion -Wshadow)
endif()

# Engine library (will grow)
add_library(nova_engine INTERFACE)
target_include_directories(nova_engine INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/engine)

# Sandbox / example application
add_executable(sandbox sandbox/main.cpp)
target_link_libraries(sandbox PRIVATE nova_engine)

message(STATUS "Nova Engine ${PROJECT_VERSION} configured")
