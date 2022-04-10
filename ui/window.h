#pragma once

#include "file_picker.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  int windowWidth = 1200, windowHeight = 800;
  GLFWwindow *window;
  FilePicker* filePicker;

 public:
  MainWindow(GLFWwindow *window);
  bool Init();
  void Update();
};