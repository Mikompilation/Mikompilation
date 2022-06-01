set(GAME_LIB "game" CACHE STRING "Library name for GAME")

set(GAME_INCLUDE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        CACHE PATH "Path for the library GAME"
        )

set(GAME_SOURCES
        game_main.cpp
        ingame.cpp
        gphase.cpp
        system/option.cpp
        system/system.cpp
        scene/scene.cpp
        scene/scene_effect.cpp
        flag/clear_flg.cpp
        player/plyr_mdl.cpp
        menu/title_menu.cpp
        menu/logo_main.cpp
        menu/menu_main.cpp
        finder/finder.cpp
        MemoryCard/mc.cpp
        )

set(GAME_HEADERS
        game_main.h
        ingame.h
        gphase.h
        gphase_types.h
        gphase_data.h
        system/option.h
        system/system.h
        scene/scene.h
        scene/scene_effect.h
        flag/clear_flg.h
        player/plyr_mdl.h
        menu/title_menu.h
        menu/logo_main.h
        menu/menu_main.h
        finder/finder.h
        MemoryCard/mc.h
        )

add_library(${GAME_LIB} EXCLUDE_FROM_ALL ${GAME_SOURCES} ${GAME_HEADERS})

target_link_libraries(${GAME_LIB} PUBLIC ${ENGINE_LIB} ${COMMON_LIB})