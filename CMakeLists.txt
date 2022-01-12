cmake_minimum_required(VERSION 3.17)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(engine)

add_subdirectory(third-party)

set(SOURCES src/main.cpp src/window.cpp src/imgui_render.cpp src/glf3_render.cpp extractor/extractor.cpp)

add_executable(Mikompilation ${SOURCES})

target_link_libraries(Mikompilation PUBLIC ThirdParty engine)

target_include_directories(Mikompilation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/header ${EXTRA_INCLUDES} )