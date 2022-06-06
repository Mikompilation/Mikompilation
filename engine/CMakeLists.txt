set(ENGINE_LIB "engine" CACHE STRING "Library name for ENGINE")

set(ENGINE_SOURCES
        VU/sceVu0.cpp
        entity/enemy.cpp
        camera/camera.cpp
        ## Those files are removed atm for 64bits compatibility
        #sgd/sgdGlobals.cpp
        #sgd/sgdRender.cpp
        #sgd/sgdLoader.cpp
        fs/eecdvd.cpp
        texture/tim2.cpp
        controller/GameInput.cpp
        texture/Texture.cpp
        texture/ZeroShader.cpp
        texture/EBO.cpp
        texture/VAO.cpp
        texture/VBO.cpp
        gra3d/gra3d.cpp
        gra3d/draw_env.cpp
        g2d/g2d_main.cpp
        g2d/g2d_draw.cpp
        texture/Texture.cpp
        gfx/glf3_render.cpp
        texture/Sprite.cpp
        Vif1/dmaVif1.cpp
        fade.cpp
        message.cpp
        )

set(ENGINE_HEADERS
        VU/sceVu0.h
        entity/enemy.h
        camera/camera.h
        ## Those files are removed atm for 64bits compatibility
        #sgd/sgdTypes.h
        #sgd/sgdRender.h
        #sgd/sgdGlobals.h
        #sgd/sgdLoader.h
        fs/eecdvd.h
        fs/iopsys.h
        controller/GameInput.h
        texture/tim2.h
        texture/ZeroShader.h
        texture/Texture.h
        texture/EBO.h
        texture/VAO.h
        texture/VBO.h
        gra3d/gra3d.h
        gra3d/draw_env.h
        Vif1/dmaVif1.h
        g2d/g2d_main.h
        g2d/g2d_draw.h
        texture/Texture.h
        PS2_HARDWARE_CONFIG.h
        gfx/glf3_render.h
        gfx/GFX_CONFIG.h
        texture/Sprite.h
        fade.h
        message.h
        )

add_library(${ENGINE_LIB} EXCLUDE_FROM_ALL ${ENGINE_SOURCES} ${ENGINE_HEADERS})

set(ENGINE_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Path for the library ENGINE")

target_include_directories(${ENGINE_LIB} PUBLIC
        ${ENGINE_INCLUDE_DIRS}
        )

target_link_libraries(${ENGINE_LIB} PUBLIC ${COMMON_LIB} ${THIRDPARTY_LIB})