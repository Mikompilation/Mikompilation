cmake_minimum_required(VERSION 3.17)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES src/main.cpp src/window.cpp src/imgui_render.cpp src/glf3_render.cpp extractor/extractor.cpp)

add_subdirectory(engine)

include(third-party/third-party.cmake)

add_executable(Mikompilation ${SOURCES} ${IMGUI_BACKEND_SOURCES})

target_link_libraries(Mikompilation PUBLIC ${EXTRA_LIBS} engine ${THIRD_PARTY_DEPS})

target_include_directories(Mikompilation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/header "${PROJECT_BINARY_DIR}" ${EXTRA_INCLUDES} )