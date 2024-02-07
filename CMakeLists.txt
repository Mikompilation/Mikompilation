cmake_minimum_required(VERSION 3.20.2)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Mikompilation)

add_subdirectory(third-party)
add_subdirectory(zero_rom)

if (WIN32)
    set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/resources/icon.rc")
ENDIF ()

add_executable(Mikompilation ${GAME_SOURCES} ${APP_ICON_RESOURCE_WINDOWS})

target_link_libraries(Mikompilation PUBLIC
        spdlog
        SDL2main
        SDL2-static
        IMGUI
        )

target_include_directories(Mikompilation PUBLIC ${GAME_HEADERS})