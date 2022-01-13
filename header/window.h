#pragma once

#include <GLFW/glfw3.h>
#include <filesystem>
#include <iostream>
#include <string>

#include "../header/file_picker.h"
#include "ImGuiFileDialog.h"
#include "glf3_render.h"
#include "imgui.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  int windowWidth = 1200, windowHeight = 800;
  GLFWwindow *window;
  FilePicker *filePicker;

 public:
  bool Init();
  void Update();
};