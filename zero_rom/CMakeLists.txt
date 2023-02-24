set(GAME_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main/gphase.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/packfile.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/plyr/plyr_mdl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/ingame.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/option.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/logo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/title.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/loading/loading.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/os/system.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/playpss/playpss.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/snd.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/logging/logging.cpp
        PARENT_SCOPE
        )


set(GAME_HEADERS
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/plyr
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/loading
        zero2np/src/system/os
        PARENT_SCOPE
)