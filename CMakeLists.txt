cmake_minimum_required(VERSION 3.17)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(engine)

include(third-party/third-party.cmake)

add_executable(Mikompilation src/main.cpp ${IMGUI_BACKEND_SOURCES})

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURE_DIR}/camera ${CMAKE_CURRENT_SOURE_DIR}/gra3d ${CMAKE_CURRENT_SOURE_DIR}/math ${IMGUI_BACKEND_HEADERS})

target_link_libraries(Mikompilation PUBLIC ${EXTRA_LIBS} engine ${THIRD_PARTY_DEPS})

target_include_directories(Mikompilation PUBLIC
        "${PROJECT_BINARY_DIR}"
        ${EXTRA_INCLUDES}
        )