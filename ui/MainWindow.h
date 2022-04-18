#pragma once

#include "FileSelector.h"
#include "TopMenuBar.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  GLFWwindow *window;
  FileSelector * filePicker;
  TopMenuBar* topMenuBar;

 public:
  MainWindow(GLFWwindow *window);
  bool Init();
  void Update();
};