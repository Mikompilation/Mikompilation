set(RENDER_SOURCES
        glf3_render.cpp
        )

set(RENDER_HEADERS
        glf3_render.h
        )

add_library(render EXCLUDE_FROM_ALL ${RENDER_SOURCES} ${RENDER_HEADERS})

target_link_libraries(render PUBLIC ThirdParty)

target_include_directories(render PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})