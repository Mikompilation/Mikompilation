cmake_minimum_required(VERSION 3.20.2)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(common)

add_subdirectory(engine)

add_subdirectory(third-party)

add_subdirectory(render)

add_subdirectory(game)

add_subdirectory(ui)

set(SOURCES
        src/main.cpp
        )

add_executable(Mikompilation ${SOURCES})

target_link_libraries(Mikompilation PUBLIC
        ${UI_LIB}
        ${GAME_LIB}
        )

target_include_directories(Mikompilation PUBLIC
        ${UI_INCLUDE_DIRS}
        ${GAME_INCLUDE_DIRS}
        )