#pragma once

#include "FilePicker.h"
#include "TopMenuBar.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  GLFWwindow *window;
  FilePicker* filePicker;
  TopMenuBar* topMenuBar;

 public:
  MainWindow(GLFWwindow *window);
  bool Init();
  void Update();
};