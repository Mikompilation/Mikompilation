set(ENGINE_LIB "engine" CACHE STRING "Library name for ENGINE")

set(ENGINE_SOURCES
        VU/sceVu0.cpp
        entity/enemy.cpp
        sgd/sgdGlobals.cpp
        sgd/sgdRender.cpp
        sgd/sgdLoader.cpp
        )

set(ENGINE_HEADERS
        entity/enemy.h
        camera/camera.h
        VU/sceVU0.h
        sgd/sgdTypes.h
        sgd/sgdRender.h
        sgd/sgdGlobals.h
        sgd/sgdLoader.h
        )

add_library(${ENGINE_LIB} EXCLUDE_FROM_ALL ${ENGINE_SOURCES} ${ENGINE_HEADERS})

set(ENGINE_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Path for the library ENGINE")

target_include_directories(${ENGINE_LIB} PUBLIC
        ${ENGINE_INCLUDE_DIRS}
        )

target_link_libraries(${ENGINE_LIB} PUBLIC ${COMMON_LIB})

set_target_properties(${ENGINE_LIB} PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")