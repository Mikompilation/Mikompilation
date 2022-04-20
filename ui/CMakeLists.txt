set(UI_LIB "ui" CACHE STRING "Library name for UI")

set(UI_INCLUDE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        CACHE PATH "Path for the library UI")

set(UI_SOURCES
        imgui_render.cpp
        FileSelector.cpp
        MainWindow.cpp
        TopMenuBar.cpp
        MemoryViewer.cpp
        )

set(UI_HEADERS
        imgui_render.h
        FileSelector.h
        MainWindow.h
        TopMenuBar.h
        MemoryViewer.h
        )

add_library(${UI_LIB} EXCLUDE_FROM_ALL ${UI_SOURCES} ${UI_HEADERS})

target_link_libraries(${UI_LIB} PUBLIC ${THIRDPARTY_LIB})