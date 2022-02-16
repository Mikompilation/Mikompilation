set(UI_SOURCES
        imgui_render.cpp
        file_picker.cpp
        window.cpp
        )

set(UI_HEADERS
        imgui_render.h
        file_picker.h
        window.h
        )

add_library(ui EXCLUDE_FROM_ALL ${UI_SOURCES} ${UI_HEADERS})

target_link_libraries(ui PUBLIC ThirdParty render extractor)