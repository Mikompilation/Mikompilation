set(COMMON_LIB "common" CACHE STRING "Library name for COMMON")

set(COMMON_SOURCES
        logging/printing.cpp
        math/VectorMath.cpp
        file/file_util.cpp
        )

set(COMMON_HEADERS
        flags.h
        math/VectorMath.h
        logging/printing.h
        file/file_util.h
        )

add_subdirectory(logging/spdlog)

add_library(${COMMON_LIB} EXCLUDE_FROM_ALL ${COMMON_SOURCES} ${COMMON_HEADERS})

target_include_directories(${COMMON_LIB} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries(${COMMON_LIB} PUBLIC spdlog::spdlog)

set(COMMON_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Path for the library COMMON")