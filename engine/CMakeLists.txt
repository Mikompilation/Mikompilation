Project(engine)
cmake_minimum_required(VERSION 3.20.2)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/gra3dSGDData.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/sceVu0.cpp ${CMAKE_CURRENT_SOURCE_DIR}/src/sceVu0.h)

add_library(engine EXCLUDE_FROM_ALL ${SOURCES})

target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURE_DIR}/Header)

set_target_properties(Mikompilation PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
