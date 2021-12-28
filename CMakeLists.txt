cmake_minimum_required(VERSION 3.10)

project(Mikompilation VERSION 1.0
        DESCRIPTION "Decompilation project of Fatal Frame"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(Mikompilation src/main.cpp)

target_link_libraries(Mikompilation PUBLIC ${EXTRA_LIBS})

target_include_directories(Mikompilation PUBLIC
        "${PROJECT_BINARY_DIR}"
        ${EXTRA_INCLUDES}
        )