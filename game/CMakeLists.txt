set(GAME_LIB "game" CACHE STRING "Library name for GAME")

set(GAME_INCLUDE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        CACHE PATH "Path for the library GAME"
        )

set(GAME_SOURCES
        game_main.cpp
        gphase.cpp
        player/plyr_mdl.cpp
        )

set(GAME_HEADERS
        game_main.h
        gphase.h
        gphaseTypes.h
        gphase_data.h
        player/plyr_mdl.h
        )

add_library(${GAME_LIB} EXCLUDE_FROM_ALL ${GAME_SOURCES} ${GAME_HEADERS})

target_link_libraries(${GAME_LIB} PUBLIC ${ENGINE_LIB} ${COMMON_LIB})