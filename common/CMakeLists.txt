set(COMMON_SOURCES
        logging/printing.cpp
        math/VectorMath.cpp
        )

set(COMMON_HEADERS
        flags.h
        math/VectorMath.h
        logging/printing.h
        )

add_library(common EXCLUDE_FROM_ALL ${COMMON_SOURCES} ${COMMON_HEADERS})

target_include_directories(common PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        math/
        logging/
        )

set_target_properties(common PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")