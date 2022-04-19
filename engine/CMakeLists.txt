set(ENGINE_LIB "engine" CACHE STRING "Library name for ENGINE")

set(ENGINE_SOURCES
        VU/sceVu0.cpp
        entity/enemy.cpp
        sgd/sgdGlobals.cpp
        sgd/sgdRender.cpp
        sgd/sgdLoader.cpp
        fs/file.cpp
        controller/Evdev.cpp
        )

set(ENGINE_HEADERS
        VU/sceVu0.h
        entity/enemy.h
        camera/camera.h
        controller/Evdev.h
        controller/PS2Controller.h
        sgd/sgdTypes.h
        sgd/sgdRender.h
        sgd/sgdGlobals.h
        sgd/sgdLoader.h
        fs/file.h
        fs/fileLoadGlobals.h
        )

add_library(${ENGINE_LIB} EXCLUDE_FROM_ALL ${ENGINE_SOURCES} ${ENGINE_HEADERS})

set(ENGINE_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}" CACHE PATH "Path for the library ENGINE")

if (${CMAKE_HOST_SYSTEM_NAME} MATCHES "Linux")

find_package(PkgConfig REQUIRED)

pkg_search_module(EVDEV REQUIRED libevdev)

target_include_directories(${ENGINE_LIB} PUBLIC
        ${ENGINE_INCLUDE_DIRS}
        ${EVDEV_INCLUDE_DIRS}
        )

target_link_libraries(${ENGINE_LIB} PUBLIC ${COMMON_LIB} ${EVDEV_LIBRARIES})

endif()

if (${CMAKE_HOST_SYSTEM_NAME} MATCHES "Windows")
target_include_directories(${ENGINE_LIB} PUBLIC
        ${ENGINE_INCLUDE_DIRS}
        )

target_link_libraries(${ENGINE_LIB} PUBLIC ${COMMON_LIB})

endif()

set_target_properties(${ENGINE_LIB} PROPERTIES LINK_FLAGS "-m32")