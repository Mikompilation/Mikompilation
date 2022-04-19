cmake_minimum_required(VERSION 3.20.2)

project(Mikompilation CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

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
        ${RENDER_LIB}
        )

target_include_directories(Mikompilation PUBLIC
        ${UI_INCLUDE_DIRS}
        ${GAME_INCLUDE_DIRS}
        ${RENDER_INCLUDE_DIRS}
        )

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_SOURCE_DIR}/data $<TARGET_FILE_DIR:${PROJECT_NAME}>/data)