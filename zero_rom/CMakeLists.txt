set(GAME_SOURCES
        # SCE
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/sce/klib.cpp

        # Main
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main/gphase.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main/glob.cpp

        # Common
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/packfile.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/logging/logging.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/basic_types.h
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/my_malloc.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/mem_util.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/heapctrl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common/ol_load.cpp

        # Debug
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/debug/mem_dbg.cpp

        # Ingame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/plyr/plyr_mdl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/ingame.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/loading/loading.cpp

        # Outgame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/option.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/logo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/title.cpp

        # System
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/os/system.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/playpss/playpss.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/snd.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/ee_iop.cpp

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