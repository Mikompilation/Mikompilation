set(ENGINE_LIB "engine" CACHE STRING "Library name for ENGINE")

set(ENGINE_SOURCES
        VU/sceVu0.cpp
        entity/enemy.cpp
        sgd/sgdGlobals.cpp
        sgd/sgdRender.cpp
        sgd/sgdLoader.cpp
        fs/file.cpp
        controller/GameInput.cpp
        )

set(ENGINE_HEADERS
        VU/sceVu0.h
        entity/enemy.h
        camera/camera.h
        sgd/sgdTypes.h
        sgd/sgdRender.h
        sgd/sgdGlobals.h
        sgd/sgdLoader.h
        fs/file.h
        fs/fileLoadGlobals.h
        controller/GameInput.h
        )

add_library(${ENGINE_LIB} EXCLUDE_FROM_ALL ${ENGINE_SOURCES} ${ENGINE_HEADERS})

set(ENGINE_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Path for the library ENGINE")

target_include_directories(${ENGINE_LIB} PUBLIC
        ${ENGINE_INCLUDE_DIRS}
        )

target_link_libraries(${ENGINE_LIB} PRIVATE ${COMMON_LIB} ${THIRDPARTY_LIB})

set_target_properties(${ENGINE_LIB} PROPERTIES LINK_FLAGS "-m32")