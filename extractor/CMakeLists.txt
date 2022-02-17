set(EXTRACTOR_LIB "extractor" CACHE STRING "Library name for EXTRACTOR")

set(EXTRACTOR_INCLUDE_DIRS
        "${CMAKE_CURRENT_SOURCE_DIR}"
        CACHE PATH "Path for the library EXTRACTOR")

set(EXTRACTOR_SOURCES
        extractor.cpp
        )

set(EXTRACTOR_HEADERS
        extractor.h
        )

add_library(${EXTRACTOR_LIB} EXCLUDE_FROM_ALL ${EXTRACTOR_SOURCES} ${EXTRACTOR_HEADERS})