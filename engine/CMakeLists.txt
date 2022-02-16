set(ENGINE_SOURCES
        VU/sceVu0.cpp
        enemy/EnemyData.cpp
        sgd/sgdGlobals.cpp
        sgd/sgdRender.cpp
        sgd/sgdLoader.cpp
        )

set(ENGINE_HEADERS
        FatalData.h
        camera/Camera.h
        VU/sceVU0.h
        sgd/sgdTypes.h
        sgd/sgdRender.h
        sgd/sgdGlobals.h
        sgd/sgdLoader.h
        )

add_library(engine EXCLUDE_FROM_ALL ${ENGINE_SOURCES} ${ENGINE_HEADERS})

target_include_directories(engine PUBLIC
        camera/
        sgd/
        VU/
        enemy/
        )

target_link_libraries(engine PUBLIC common)

set_target_properties(engine PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")