set(EXTRACTOR_SOURCES
        extractor.cpp
        )

set(EXTRACTOR_HEADERS
        extractor.h
        )

add_library(extractor EXCLUDE_FROM_ALL ${EXTRACTOR_SOURCES} ${EXTRACTOR_HEADERS})

