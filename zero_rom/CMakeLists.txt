cmake_minimum_required(VERSION 3.20.2)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mikompilation)

set(SOURCES
        zero2np/src/main/main.cpp
        zero2np/src/main/main.h
        zero2np/src/main/gphase.cpp
        zero2np/src/main/gphase.h
        zero2np/src/common/packfile.cpp
        zero2np/src/common/packfile.h
        )

add_executable(Mikompilation ${SOURCES})