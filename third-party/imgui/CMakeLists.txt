set(IMGUI_DIR ${CMAKE_CURRENT_SOURCE_DIR} CACHE PATH "Path for the library ImGui")

add_library(IMGUI EXCLUDE_FROM_ALL
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui_draw.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui_tables.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui_widgets.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui_memory_editor/imgui_memory_editor.h
        ${CMAKE_CURRENT_SOURCE_DIR}/backends/imgui_impl_sdlrenderer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/backends/imgui_impl_sdl.cpp
        )

target_include_directories(IMGUI
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/backends
        )

target_link_libraries(IMGUI PRIVATE SDL2-static)
