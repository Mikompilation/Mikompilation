#pragma once

#include <string>
#include <iostream>
#include <filesystem>
#include <GLFW/glfw3.h>

#include "imgui.h"
#include "imgui_render.h"
#include "glf3_render.h"
#include "ImGuiFileDialog.h"

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