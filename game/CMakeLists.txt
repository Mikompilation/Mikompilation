set(GAME_LIB "game" CACHE STRING "Library name for GAME")

set(GAME_INCLUDE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        CACHE PATH "Path for the library GAME"
        )

set(GAME_SOURCES
        game_main.cpp
        ingame.cpp
        gphase/gphase.cpp
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
        mc/mc.cpp
        mc/autoload.cpp
        mc/mc_check_card.cpp
        mc/mc_set_data.cpp
        mc/mc_check.cpp
        mc/mc_check_dir.cpp
        )

set(GAME_HEADERS
        game_main.h
        ingame.h
        gphase/gphase.h
        gphase/gphase_types.h
        gphase/gphase_data.h
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
        mc/mc.h
        mc/autoload.h
        mc/mc_check_card.h
        mc/mc_set_data.h
        system/glob.h
        system/system_types.h
        mc/mc_check.h
        mc/mc_check_dir.h
        )

add_library(${GAME_LIB} EXCLUDE_FROM_ALL ${GAME_SOURCES} ${GAME_HEADERS})

target_link_libraries(${GAME_LIB} PUBLIC ${ENGINE_LIB} ${COMMON_LIB})