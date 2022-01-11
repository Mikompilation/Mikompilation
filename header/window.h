#pragma once

#include <iostream>
#include <filesystem>
#include <string>
#include <GLFW/glfw3.h>

#include "imgui.h"
#include "imgui_render.h"
#include "glf3_render.h"
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"

namespace fs = std::filesystem;

class MainWindow
{
 private:
  int windowWidth = 1200, windowHeight = 800;
  fs::path filePath;
  GLFWwindow *window;

 public:
  bool Init(); 
  void Update();
};