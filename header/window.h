#pragma once

#include <iostream>
#include <filesystem>
#include <string>
// GLFW
#include <GLFW/glfw3.h>
// Dear ImGui
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"
#include "imgui.h"

namespace fs = std::filesystem;

class MainWindow
{
 private:
  int windowWidth = 1200, windowHeight = 800;
  fs::path filePath;

 public:
  void Init(); 
  void Update();
};