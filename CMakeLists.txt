cmake_minimum_required(VERSION 3.17)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(Mikompilation src/main.cpp)

add_subdirectory(engine)

include(third-party/third-party.cmake)

target_link_libraries(Mikompilation PUBLIC ${EXTRA_LIBS} engine ${THIRD_PARTY_DEPS})

target_include_directories(Mikompilation PUBLIC
        "${PROJECT_BINARY_DIR}"
        ${EXTRA_INCLUDES}
        )