set(ENGINE_SOURCES
        math/sceVu0.cpp
        enemy/EnemyData.cpp
        sgd/sgdGlobals.cpp
        sgd/sgdRender.cpp
        sgd/sgdLoader.cpp
        )

set(ENGINE_HEADERS
        math/sceVu0.h
        FatalData.h
        camera/Camera.h
        sgd/sgdTypes.h
        math/sceVU0.h
        sgd/sgdRender.cpp
        sgd/sgdRender.h
        sgd/sgdGlobals.cpp
        sgd/sgdGlobals.h
        sgd/sgdLoader.cpp
        sgd/sgdLoader.h)

add_library(engine EXCLUDE_FROM_ALL ${ENGINE_SOURCES} ${ENGINE_HEADERS})

target_include_directories(engine PUBLIC
        ${CMAKE_CURRENT_SOURE_DIR}/camera
        ${CMAKE_CURRENT_SOURE_DIR}/sgd
        ${CMAKE_CURRENT_SOURE_DIR}/math
        ${CMAKE_CURRENT_SOURCE_DIR}/enemy)

target_link_libraries(engine PUBLIC common)

set_target_properties(engine PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")