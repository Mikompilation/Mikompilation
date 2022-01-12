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

struct File 
{
  fs::path path;
  fs::path fileName;
};

class MainWindow
{
 private:
  int windowWidth = 1200, windowHeight = 800;

  File bdPath;
  File hdPath;
  File elfPath;

  GLFWwindow *window;

 public:
  bool Init(); 
  void Update();
};