cmake_minimum_required(VERSION 3.8)

project(calculator VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release)
set(DIR ${CMAKE_CURRENT_SOURCE_DIR})

# Directory settings
set(INC_DIR ${DIR}/inc)
set(SRC_DIR ${DIR}/src)

# Executable name
set(TARGET_NAME calculator)

# All the sources to be linked
set(SOURCE_FILES ${SRC_DIR}/main.cpp
                 ${SRC_DIR}/number.cpp
                 ${SRC_DIR}/count.cpp
                 ${SRC_DIR}/operation.cpp
                 ${SRC_DIR}/rpn.cpp)

add_executable(${TARGET_NAME} ${SOURCE_FILES})

# Include headers.
target_include_directories(${TARGET_NAME} PUBLIC ${INC_DIR})