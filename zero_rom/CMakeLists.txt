set(GAME_SOURCES
        # SCE
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/sce/klib.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/sce/sce_types.h

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
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/debug/zero2_perf.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/debug/perf_measure.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/debug/debug_menu.cpp

        # Ingame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/plyr/plyr_mdl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/ingame.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/loading/loading.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/map/MapSave.cpp

        # Outgame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/option.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/logo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/title.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame/mission_sel.cpp

        # Graphics
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/graphics/graph2d/message.cpp

        # System
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/os/system.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/playpss/playpss.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/snd.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/snd_bank.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/ee_iop.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/cddat.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/eeiop/snd_3d.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/pad/key_cnf.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/pad/pad.cpp

        PARENT_SCOPE
        )


set(GAME_HEADERS
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/main
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/common
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/plyr
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/outgame
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/ingame/loading
        ${CMAKE_CURRENT_SOURCE_DIR}/zero2np/src/system/os
        PARENT_SCOPE
)