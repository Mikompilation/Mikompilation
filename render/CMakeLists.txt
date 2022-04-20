set(RENDER_LIB "render" CACHE STRING "Library name for RENDER")

set(RENDER_INCLUDE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        CACHE PATH "Path for the library RENDER")

set(RENDER_SOURCES
        glf3_render.cpp
        )

set(RENDER_HEADERS
        glf3_render.h
        stb_image.h
        )

add_library(${RENDER_LIB} EXCLUDE_FROM_ALL ${RENDER_SOURCES} ${RENDER_HEADERS})

target_include_directories(${RENDER_LIB} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${RENDER_LIB} PUBLIC ${THIRDPARTY_LIB})

