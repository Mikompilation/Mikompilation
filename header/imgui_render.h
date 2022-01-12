#pragma once
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "imgui.h"

void InitializeImGui(GLFWwindow *window );
void Render(GLFWwindow *window);
void NewFrame();
void EndFrame();
void Terminate();