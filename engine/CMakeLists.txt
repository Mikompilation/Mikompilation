Project(engine)
cmake_minimum_required(VERSION 3.20.2)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/gra3d/gra3dSGDData.cpp ${CMAKE_CURRENT_SOURCE_DIR}/math/sceVu0.cpp ${CMAKE_CURRENT_SOURCE_DIR}/math/sceVu0.h)

add_library(engine EXCLUDE_FROM_ALL ${SOURCES})

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURE_DIR}/camera ${CMAKE_CURRENT_SOURE_DIR}/gra3d ${CMAKE_CURRENT_SOURE_DIR}/math)

set_target_properties(engine PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")