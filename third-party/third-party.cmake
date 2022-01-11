add_subdirectory(third-party/glfw)
include_directories(glfw/include)

if( MSVC )
    SET( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup" )
endif()

find_package(OpenGL)

set(IMGUI_PATH third-party/imgui)
file(GLOB IMGUI_SOURCES ${IMGUI_PATH}/*.cpp)
add_library("ImGui" STATIC ${IMGUI_SOURCES})
target_include_directories("ImGui" PUBLIC ${IMGUI_PATH})

set(IMGUI_BACKEND_SOURCES ${IMGUI_PATH}/backends/imgui_impl_glfw.cpp ${IMGUI_PATH}/backends/imgui_impl_opengl3.cpp ${CMAKE_CURRENT_SOURCE_DIR}/third-party/ImGuiFileDialog/ImGuiFileDialog.cpp)
set(IMGUI_BACKEND_HEADERS ${IMGUI_PATH}/backends/imgui_impl_glfw.h ${IMGUI_PATH}/backends/imgui_impl_opengl3.h ${IMGUI_PATH}/backends/imgui_impl_opengl3_loader.h
${CMAKE_CURRENT_SOURCE_DIR}/thrid-party/ImGuiFileDialog/ImGuiFileDialog.h ${CMAKE_CURRENT_SOURCE_DIR}/third-party/ImGuiFileDialog/ImGuiFileDialogConfig.h)


set(THIRD_PARTY_DEPS glfw ${OPENGL_LIBRARIES} ${GLFW_STATIC_LIBRARIES} ${GLFW_LIBRARIES} ImGui)