set(THIRDPARTY_LIB "ThirdParty" CACHE STRING "Library name for ThirdParty")

# GLFW
set(GLFW_BUILD_DOCS     OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS    OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL        OFF CACHE BOOL "" FORCE)

if( MSVC )
    SET( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup" )
endif()

add_subdirectory(glfw)

set(THIRDPARTY_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ImGuiFileDialog/ImGuiFileDialog.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_draw.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/backends/imgui_impl_glfw.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/backends/imgui_impl_opengl3.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_demo.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_tables.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/imgui_widgets.cpp
        )

set(THIRDPARTY_HEADERS
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui_memory_editor/imgui_memory_editor.h
        ${CMAKE_CURRENT_SOURCE_DIR}/stb/stb_image.h
        )

add_library(ThirdParty EXCLUDE_FROM_ALL ${THIRDPARTY_SOURCES} ${THIRDPARTY_HEADERS})

set(ThirdParty_INCLUDE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui/backends
        ${CMAKE_CURRENT_SOURCE_DIR}/ImGuiFileDialog
        ${CMAKE_CURRENT_SOURCE_DIR}/imgui_memory_editor
        CACHE PATH "Path for the library ThirdParty"
        )

target_include_directories(ThirdParty PUBLIC
        ${ThirdParty_INCLUDE_DIRS}
        )

target_link_libraries(ThirdParty PUBLIC glfw)
