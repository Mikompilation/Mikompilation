add_subdirectory(third-party/glfw)
include_directories(glfw/include)

if( MSVC )
    SET( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup" )
endif()

find_package(OpenGL)

set(THIRD_PARTY_DEPS glfw ${OPENGL_LIBRARIES} ${GLFW_LIBRARIES})